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

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC2FFB0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2F830)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex = 31638;

	class RegistrationInfo_ScriptStruct_StateTreePropertyIndirection : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Type()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x26490);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x26498);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_InstanceStruct()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x264A0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_Offset()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x264A8);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x264B0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x264B8);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Type_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x264C0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ArrayIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x264C8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NextIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection_TypeDefinitionIndex)->GetStaticField(0x264D0);
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
