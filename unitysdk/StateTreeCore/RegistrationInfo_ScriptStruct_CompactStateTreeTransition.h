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

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E740D20)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73FF90)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex = 31097;

	class RegistrationInfo_ScriptStruct_CompactStateTreeTransition : public ::System::Object
	{
	public:
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Priority_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25050);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_ConditionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25058);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_EventTag()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25060);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_TransitionEnabled()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25068);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Priority()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25070);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ConditionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25078);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Delay()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25080);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Trigger_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25088);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25090);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Trigger()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x25098);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_State()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x250A0);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Fallback_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x250A8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Fallback()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x250B0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x250B8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x250C0);
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
