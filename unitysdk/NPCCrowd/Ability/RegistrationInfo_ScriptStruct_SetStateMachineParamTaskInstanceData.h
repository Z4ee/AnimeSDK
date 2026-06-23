#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_SETSTATEMACHINEPARAMTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xEBCA860)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_SETSTATEMACHINEPARAMTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBCA720)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_SetStateMachineParamTaskInstanceData_TypeDefinitionIndex = 49083;

	class RegistrationInfo_ScriptStruct_SetStateMachineParamTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SetStateMachineParamTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3AA90);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SetStateMachineParamTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3AA98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_SETSTATEMACHINEPARAMTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_SETSTATEMACHINEPARAMTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
