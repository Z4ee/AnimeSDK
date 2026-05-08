#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C3B9930)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3B82A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex = 28444;

	class RegistrationInfo_ScriptStruct_CompactStateTreeState : public ::System::Object
	{
	public:
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_InstanceDataNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21210);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_TransitionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21218);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21220);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_LinkedState()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21228);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21230);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21238);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_EnterConditionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21240);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_HasTransitionTasks()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21248);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Type_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21250);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ParameterBindingsBatch()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21258);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21260);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_EnterConditionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21268);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_TasksBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21270);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_TasksNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21278);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parent()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21280);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_TransitionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21288);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_SelectionBehavior_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21290);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_Enabled()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x21298);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ChildrenEnd()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x212A0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ParameterTemplateIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x212A8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_SelectionBehavior()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x212B0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ChildrenBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x212B8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ParameterDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x212C0);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Type()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x212C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
