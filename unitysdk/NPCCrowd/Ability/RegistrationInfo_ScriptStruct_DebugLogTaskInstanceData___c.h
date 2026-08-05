#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASKINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10641520)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASKINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10641560)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASKINSTANCEDATA___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x10641570)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DebugLogTaskInstanceData___c_TypeDefinitionIndex = 40571;

	class RegistrationInfo_ScriptStruct_DebugLogTaskInstanceData___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_DebugLogTaskInstanceData___c** StaticGet___9()
		{
			return (::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_DebugLogTaskInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogTaskInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x494B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASKINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASKINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASKINSTANCEDATA___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
