#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FAA3990)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA3410)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex = 31711;

	class RegistrationInfo_ScriptStruct_StateTreeDataHandle : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Source()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x26510);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_StateHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x26518);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x26520);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Source_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x26528);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x26530);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_Index()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x26538);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x26540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
