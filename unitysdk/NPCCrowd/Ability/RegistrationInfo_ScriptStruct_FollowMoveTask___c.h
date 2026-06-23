#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C2A000)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8C2A040)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x8C2A050)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FollowMoveTask___c_TypeDefinitionIndex = 39691;

	class RegistrationInfo_ScriptStruct_FollowMoveTask___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_FollowMoveTask___c** StaticGet___9()
		{
			return (::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_FollowMoveTask___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FollowMoveTask___c_TypeDefinitionIndex)->GetStaticField(0x317E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
