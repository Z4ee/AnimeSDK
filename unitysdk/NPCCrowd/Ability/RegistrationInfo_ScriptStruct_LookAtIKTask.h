#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD5C4090)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5C3F20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_LookAtIKTask_TypeDefinitionIndex = 64757;

	class RegistrationInfo_ScriptStruct_LookAtIKTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_LookAtIKTask_TypeDefinitionIndex)->GetStaticField(0x4B320);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_LookAtIKTask_TypeDefinitionIndex)->GetStaticField(0x4B328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
