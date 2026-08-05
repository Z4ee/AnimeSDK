#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYCOPYBATCH_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED76930)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYCOPYBATCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED764A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyCopyBatch_TypeDefinitionIndex = 31640;

	class RegistrationInfo_ScriptStruct_StateTreePropertyCopyBatch : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_TargetStruct()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopyBatch_TypeDefinitionIndex)->GetStaticField(0x26990);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_BindingsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopyBatch_TypeDefinitionIndex)->GetStaticField(0x26998);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_BindingsEnd()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopyBatch_TypeDefinitionIndex)->GetStaticField(0x269A0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopyBatch_TypeDefinitionIndex)->GetStaticField(0x269A8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopyBatch_TypeDefinitionIndex)->GetStaticField(0x269B0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyCopyBatch_TypeDefinitionIndex)->GetStaticField(0x269B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYCOPYBATCH__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYCOPYBATCH_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
