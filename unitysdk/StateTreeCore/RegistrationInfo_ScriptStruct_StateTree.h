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

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DBBF340)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBBDD70)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex = 30914;

	class RegistrationInfo_ScriptStruct_StateTree : public ::System::Object
	{
	public:
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_Schema()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24DE0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksNum()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24DE8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_DefaultInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24DF0);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ExternalDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24DF8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_States()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E00);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyBindings()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E08);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Transitions_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E10);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_States_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E18);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumContextData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E20);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumGlobalInstanceData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E28);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parameters()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E30);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ExternalDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E38);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SharedInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E40);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ContextDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E48);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E50);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E58);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Nodes()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E60);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E68);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E70);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E78);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ContextDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E80);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_HasGlobalTransitionTasks()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E88);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_Transitions()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x24E90);
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
