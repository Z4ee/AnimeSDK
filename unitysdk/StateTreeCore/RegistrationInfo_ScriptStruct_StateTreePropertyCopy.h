#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class Int32PropertyParams; }
namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYCOPY_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E6F39A0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYCOPY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F30C0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex = 31037;

	class RegistrationInfo_ScriptStruct_StateTreePropertyCopy : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourceIndirection()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x25680);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_TargetIndirection()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x25688);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x25690);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_SourceStructType()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x25698);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourceDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x256A0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x256A8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Type()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x256B0);
		}
		static ::UnrealTypes::Int32PropertyParams** StaticGet_Property_CopySize()
		{
			return (::UnrealTypes::Int32PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x256B8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x256C0);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Type_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopy_TypeDefinitionIndex)->GetStaticField(0x256C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYCOPY__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYCOPY_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
