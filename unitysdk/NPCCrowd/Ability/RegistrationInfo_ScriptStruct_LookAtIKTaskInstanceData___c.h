#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASKINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBCA480)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASKINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCA4C0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASKINSTANCEDATA___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xEBCA4D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_LookAtIKTaskInstanceData___c_TypeDefinitionIndex = 56390;

	class RegistrationInfo_ScriptStruct_LookAtIKTaskInstanceData___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_LookAtIKTaskInstanceData___c** StaticGet___9()
		{
			return (::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_LookAtIKTaskInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_LookAtIKTaskInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x3AA60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASKINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASKINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASKINSTANCEDATA___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
