#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D33DA50)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D33D690)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_SendGraphEventTaskInstanceData_TypeDefinitionIndex = 85828;

	class RegistrationInfo_ScriptStruct_SendGraphEventTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_EventTag()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SendGraphEventTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B470);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SendGraphEventTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B478);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SendGraphEventTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B480);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SendGraphEventTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B488);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_Actor()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SendGraphEventTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4B490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
