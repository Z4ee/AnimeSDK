#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CB952C0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB94D50)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex = 58465;

	class RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x47970);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_Condition()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x47978);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_FalseValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x47980);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x47988);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x47990);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_TrueValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x47998);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_ResultValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x479A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
