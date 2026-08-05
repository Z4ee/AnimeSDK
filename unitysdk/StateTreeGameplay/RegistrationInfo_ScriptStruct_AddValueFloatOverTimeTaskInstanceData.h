#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EC66AC0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC66450)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex = 86286;

	class RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_MinValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x49770);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_BaseValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x49778);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x49780);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x49788);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_AddValuePerSecond()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x49790);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_MaxValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x49798);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x497A0);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_ResultValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x497A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
