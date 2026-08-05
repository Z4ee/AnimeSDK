#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11931580)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119315C0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x119315D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_PathFollowBlockedConditionInstanceData___c_TypeDefinitionIndex = 71409;

	class RegistrationInfo_ScriptStruct_PathFollowBlockedConditionInstanceData___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_PathFollowBlockedConditionInstanceData___c** StaticGet___9()
		{
			return (::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_PathFollowBlockedConditionInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PathFollowBlockedConditionInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x45600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
