#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchBossHeadEffType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5629EB978387B245_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11634A80)
#define CLASS_3_5629EB978387B245__CTOR_OFFSET UNITYSDK_OFFSET(0x11634A50)

inline static constexpr unsigned int Class_3_5629EB978387B245_TypeDefinitionIndex = 44597;

class Class_3_5629EB978387B245 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchBossHeadEffType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchBossHeadEffType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + CLASS_3_5629EB978387B245__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5629EB978387B245_ONTASKBEGIN_OFFSET))(this);
	}
};
