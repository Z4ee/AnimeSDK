#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class Int8PropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB52F40)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB528D0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex = 31525;

	class RegistrationInfo_ScriptStruct_StateTreeConditionBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_EvaluationMode_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x26B00);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Operand_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x26B08);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_EvaluationMode()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x26B10);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x26B18);
		}
		static ::UnrealTypes::Int8PropertyParams** StaticGet_Property_DeltaIndent()
		{
			return (::UnrealTypes::Int8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x26B20);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Operand()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x26B28);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x26B30);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x26B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
