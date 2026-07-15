#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEvolveBuildFeature; }

#define CLASS_3_076D2108D3035E39_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B54F40)
#define CLASS_3_076D2108D3035E39__CTOR_OFFSET UNITYSDK_OFFSET(0x16B54F10)

inline static constexpr unsigned int Class_3_076D2108D3035E39_TypeDefinitionIndex = 56154;

class Class_3_076D2108D3035E39 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerEvolveBuildFeature*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEvolveBuildFeature* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEvolveBuildFeature*))((::PBYTE)hIl2Cpp + CLASS_3_076D2108D3035E39__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_076D2108D3035E39_ONTASKBEGIN_OFFSET))(this);
	}
};
