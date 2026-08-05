#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA54560)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA53FC0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex = 31596;

	class RegistrationInfo_ScriptStruct_StateTreeNodeBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x26650);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_InstanceTemplateIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x26658);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x26660);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_InstanceDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x26668);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x26670);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_BindingsBatch()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x26678);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x26680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
