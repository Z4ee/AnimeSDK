#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBC9CC0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC9D00)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xEBC9D10)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CarQueueUpdateEnvironmentTask___c_TypeDefinitionIndex = 47154;

	class RegistrationInfo_ScriptStruct_CarQueueUpdateEnvironmentTask___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_CarQueueUpdateEnvironmentTask___c** StaticGet___9()
		{
			return (::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_CarQueueUpdateEnvironmentTask___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CarQueueUpdateEnvironmentTask___c_TypeDefinitionIndex)->GetStaticField(0x3A9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
