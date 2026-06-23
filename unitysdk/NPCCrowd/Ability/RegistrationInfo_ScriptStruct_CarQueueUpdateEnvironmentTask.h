#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD5C3570)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5C3400)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CarQueueUpdateEnvironmentTask_TypeDefinitionIndex = 47153;

	class RegistrationInfo_ScriptStruct_CarQueueUpdateEnvironmentTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CarQueueUpdateEnvironmentTask_TypeDefinitionIndex)->GetStaticField(0x4CF20);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CarQueueUpdateEnvironmentTask_TypeDefinitionIndex)->GetStaticField(0x4CF28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUEUPDATEENVIRONMENTTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
