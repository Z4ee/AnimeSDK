#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEFLOATTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E82AB50)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEFLOATTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82A6B0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_UpdateValueFloatTask_TypeDefinitionIndex = 71603;

	class RegistrationInfo_ScriptStruct_UpdateValueFloatTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_UpdateOnExit()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x479D0);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_UpdateOnEnter()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x479D8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x479E0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x479E8);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x479F0);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_UpdateOnTick()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x479F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEFLOATTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEFLOATTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
