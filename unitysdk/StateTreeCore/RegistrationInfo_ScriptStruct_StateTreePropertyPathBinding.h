#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA559E0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA55510)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding_TypeDefinitionIndex = 31635;

	class RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding_TypeDefinitionIndex)->GetStaticField(0x26DA0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_TargetPropertyPath()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding_TypeDefinitionIndex)->GetStaticField(0x26DA8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding_TypeDefinitionIndex)->GetStaticField(0x26DB0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding_TypeDefinitionIndex)->GetStaticField(0x26DB8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourcePropertyPath()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding_TypeDefinitionIndex)->GetStaticField(0x26DC0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourceDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding_TypeDefinitionIndex)->GetStaticField(0x26DC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
