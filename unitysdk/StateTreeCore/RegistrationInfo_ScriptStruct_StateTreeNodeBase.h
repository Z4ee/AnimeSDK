#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E67EE00)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67E860)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex = 30991;

	class RegistrationInfo_ScriptStruct_StateTreeNodeBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x24ED0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x24ED8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_BindingsBatch()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x24EE0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_InstanceDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x24EE8);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x24EF0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x24EF8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_InstanceTemplateIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x24F00);
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
