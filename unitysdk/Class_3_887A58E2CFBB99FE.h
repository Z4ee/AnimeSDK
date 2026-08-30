#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TargetMuteModifierEventSource; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_887A58E2CFBB99FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19FB1930)
#define CLASS_3_887A58E2CFBB99FE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB1900)

inline static constexpr unsigned int Class_3_887A58E2CFBB99FE_TypeDefinitionIndex = 55383;

class Class_3_887A58E2CFBB99FE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TargetMuteModifierEventSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TargetMuteModifierEventSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TargetMuteModifierEventSource*))((::PBYTE)hIl2Cpp + CLASS_3_887A58E2CFBB99FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_887A58E2CFBB99FE_ONTASKBEGIN_OFFSET))(this);
	}
};
