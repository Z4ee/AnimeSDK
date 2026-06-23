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

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATADESC_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E78AC30)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATADESC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78A580)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc_TypeDefinitionIndex = 30965;

	class RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc_TypeDefinitionIndex)->GetStaticField(0x250F0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc_TypeDefinitionIndex)->GetStaticField(0x250F8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc_TypeDefinitionIndex)->GetStaticField(0x25100);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_Struct()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc_TypeDefinitionIndex)->GetStaticField(0x25108);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Handle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc_TypeDefinitionIndex)->GetStaticField(0x25110);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Requirement()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc_TypeDefinitionIndex)->GetStaticField(0x25118);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Requirement_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc_TypeDefinitionIndex)->GetStaticField(0x25120);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataDesc_TypeDefinitionIndex)->GetStaticField(0x25128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATADESC__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATADESC_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
