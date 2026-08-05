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

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FAA2D40)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA16A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex = 31718;

	class RegistrationInfo_ScriptStruct_CompactStateTreeState : public ::System::Object
	{
	public:
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_SelectionBehavior_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26710);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_LinkedState()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26718);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_EnterConditionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26720);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_EnterConditionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26728);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_InstanceDataNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26730);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ParameterBindingsBatch()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26738);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_TasksBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26740);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ParameterDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26748);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Type_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26750);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_HasTransitionTasks()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26758);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_Enabled()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26760);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ParameterTemplateIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26768);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_SelectionBehavior()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26770);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ChildrenEnd()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26778);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26780);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Type()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26788);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26790);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x26798);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ChildrenBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x267A0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_TransitionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x267A8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x267B0);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_TransitionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x267B8);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_TasksNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x267C0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parent()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x267C8);
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
