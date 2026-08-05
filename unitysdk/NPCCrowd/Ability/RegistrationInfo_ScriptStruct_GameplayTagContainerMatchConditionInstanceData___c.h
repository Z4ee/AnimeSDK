#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10297F30)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10297F70)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x10297F80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_GameplayTagContainerMatchConditionInstanceData___c_TypeDefinitionIndex = 42198;

	class RegistrationInfo_ScriptStruct_GameplayTagContainerMatchConditionInstanceData___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_GameplayTagContainerMatchConditionInstanceData___c** StaticGet___9()
		{
			return (::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_GameplayTagContainerMatchConditionInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GameplayTagContainerMatchConditionInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x339A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
