#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A686500)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A686140)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData_TypeDefinitionIndex = 74858;

	class RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x340B0);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_Actor()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x340B8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x340C0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_TargetPosition()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x340C8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x340D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
