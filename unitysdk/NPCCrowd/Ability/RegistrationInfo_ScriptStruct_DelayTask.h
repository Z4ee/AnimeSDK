#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x109F6B20)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x109F69A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DelayTask_TypeDefinitionIndex = 85631;

	class RegistrationInfo_ScriptStruct_DelayTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelayTask_TypeDefinitionIndex)->GetStaticField(0x38290);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelayTask_TypeDefinitionIndex)->GetStaticField(0x38298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
