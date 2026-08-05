#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ArrayPropertyParams; }
namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED76490)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED74EC0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex = 31519;

	class RegistrationInfo_ScriptStruct_StateTree : public ::System::Object
	{
	public:
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26560);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Transitions_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26568);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ExternalDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26570);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_States()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26578);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_States_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26580);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parameters()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26588);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ExternalDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26590);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_DefaultInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26598);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265A0);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_HasGlobalTransitionTasks()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265A8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ContextDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265B0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265B8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ContextDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265C0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksNum()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265C8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SharedInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265D0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumContextData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265D8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265E0);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_Schema()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265E8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265F0);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_Transitions()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x265F8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyBindings()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26600);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Nodes()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26608);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumGlobalInstanceData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x26610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
