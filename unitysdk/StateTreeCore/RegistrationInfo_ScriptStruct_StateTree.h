#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ArrayPropertyParams; }
namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B862430)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B860F80)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex = 28264;

	class RegistrationInfo_ScriptStruct_StateTree : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ExternalDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210A0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_States_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210A8);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210B0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Transitions_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210B8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumContextData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210C0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumGlobalInstanceData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210C8);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210D0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyBindings()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210D8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ExternalDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210E0);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_HasGlobalTransitionTasks()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210E8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ContextDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210F0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parameters()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x210F8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_Transitions()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21100);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21108);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Nodes()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21110);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_DefaultInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21118);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21120);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksNum()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21128);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ContextDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21130);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SharedInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21138);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21140);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_States()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x21148);
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
