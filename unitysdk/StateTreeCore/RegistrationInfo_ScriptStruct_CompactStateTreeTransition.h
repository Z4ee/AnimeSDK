#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C412C80)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C411EF0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex = 28442;

	class RegistrationInfo_ScriptStruct_CompactStateTreeTransition : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_State()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x212D0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x212D8);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_ConditionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x212E0);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Trigger()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x212E8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Fallback()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x212F0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Delay()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x212F8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ConditionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x21300);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_EventTag()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x21308);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Priority()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x21310);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x21318);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Trigger_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x21320);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x21328);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Priority_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x21330);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Fallback_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x21338);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_TransitionEnabled()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x21340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
