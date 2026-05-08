#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class UInt16PropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C538D10)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C538590)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex = 28378;

	class RegistrationInfo_ScriptStruct_StateTreePropertyIndirection : public ::System::Object
	{
	public:
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_Offset()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x20FD0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x20FD8);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Type_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x20FE0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x20FE8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ArrayIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x20FF0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x20FF8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Type()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x21000);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NextIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x21008);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_InstanceStruct()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x21010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
