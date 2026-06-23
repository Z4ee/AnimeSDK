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

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E6F2950)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F22A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex = 31023;

	class RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x251D0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x251D8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_DataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x251E0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x251E8);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_DataSource_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x251F0);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x251F8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_DataSource()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x25200);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_Struct()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x25208);
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
