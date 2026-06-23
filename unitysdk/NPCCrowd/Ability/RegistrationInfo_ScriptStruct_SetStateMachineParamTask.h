#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_SETSTATEMACHINEPARAMTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x106FB620)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_SETSTATEMACHINEPARAMTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x106FB4B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_SetStateMachineParamTask_TypeDefinitionIndex = 67860;

	class RegistrationInfo_ScriptStruct_SetStateMachineParamTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SetStateMachineParamTask_TypeDefinitionIndex)->GetStaticField(0x41A90);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SetStateMachineParamTask_TypeDefinitionIndex)->GetStaticField(0x41A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_SETSTATEMACHINEPARAMTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_SETSTATEMACHINEPARAMTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
