#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvBlockRewardToast; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2EE236548D948D58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E3B130)
#define CLASS_3_2EE236548D948D58__CTOR_OFFSET UNITYSDK_OFFSET(0x16E3B100)

inline static constexpr unsigned int Class_3_2EE236548D948D58_TypeDefinitionIndex = 55298;

class Class_3_2EE236548D948D58 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvBlockRewardToast*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvBlockRewardToast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvBlockRewardToast*))((::PBYTE)hIl2Cpp + CLASS_3_2EE236548D948D58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EE236548D948D58_ONTASKBEGIN_OFFSET))(this);
	}
};
