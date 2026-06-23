#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYACCESS_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E593940)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYACCESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E593450)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyAccess_TypeDefinitionIndex = 31039;

	class RegistrationInfo_ScriptStruct_StateTreePropertyAccess : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyAccess_TypeDefinitionIndex)->GetStaticField(0x24D60);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourceIndirection()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyAccess_TypeDefinitionIndex)->GetStaticField(0x24D68);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyAccess_TypeDefinitionIndex)->GetStaticField(0x24D70);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourceDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyAccess_TypeDefinitionIndex)->GetStaticField(0x24D78);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_SourceStructType()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyAccess_TypeDefinitionIndex)->GetStaticField(0x24D80);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyAccess_TypeDefinitionIndex)->GetStaticField(0x24D88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYACCESS__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYACCESS_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
