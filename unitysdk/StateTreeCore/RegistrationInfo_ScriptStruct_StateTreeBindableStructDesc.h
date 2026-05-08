#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C3B9FF0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3B9940)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex = 28369;

	class RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x21450);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x21458);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_DataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x21460);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_Struct()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x21468);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x21470);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x21478);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_DataSource_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x21480);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_DataSource()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x21488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
