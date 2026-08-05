#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEFLOATTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EC67500)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEFLOATTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC67060)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DebugLogValueFloatTask_TypeDefinitionIndex = 70097;

	class RegistrationInfo_ScriptStruct_DebugLogValueFloatTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x3B180);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_LogOnEnter()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x3B188);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x3B190);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x3B198);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_LogOnExit()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x3B1A0);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_LogOnTick()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x3B1A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEFLOATTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEFLOATTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
