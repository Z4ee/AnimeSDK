#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18C5B280)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C5ADF0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareValueFloatCondition_TypeDefinitionIndex = 83387;

	class RegistrationInfo_ScriptStruct_CompareValueFloatCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_Invert()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatCondition_TypeDefinitionIndex)->GetStaticField(0x3B210);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatCondition_TypeDefinitionIndex)->GetStaticField(0x3B218);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Operator()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatCondition_TypeDefinitionIndex)->GetStaticField(0x3B220);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatCondition_TypeDefinitionIndex)->GetStaticField(0x3B228);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatCondition_TypeDefinitionIndex)->GetStaticField(0x3B230);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Operator_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatCondition_TypeDefinitionIndex)->GetStaticField(0x3B238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
