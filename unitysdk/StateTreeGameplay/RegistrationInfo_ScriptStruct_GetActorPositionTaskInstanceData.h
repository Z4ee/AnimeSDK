#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E506B10)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E506750)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData_TypeDefinitionIndex = 77422;

	class RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_Actor()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B3F0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B3F8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B400);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B408);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Position()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
