#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BC41750)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC412B0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask_TypeDefinitionIndex = 89070;

	class RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_LogOnExit()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask_TypeDefinitionIndex)->GetStaticField(0x41220);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask_TypeDefinitionIndex)->GetStaticField(0x41228);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask_TypeDefinitionIndex)->GetStaticField(0x41230);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_LogOnEnter()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask_TypeDefinitionIndex)->GetStaticField(0x41238);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_LogOnTick()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask_TypeDefinitionIndex)->GetStaticField(0x41240);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask_TypeDefinitionIndex)->GetStaticField(0x41248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
