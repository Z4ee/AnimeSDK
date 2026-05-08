#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C4D6A00)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4D6160)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex = 28403;

	class RegistrationInfo_ScriptStruct_StateTreeTaskBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_TaskEnabled()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F30);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F38);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldCallTickOnlyOnEvents()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F40);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F48);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldStateChangeOnReselect()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F50);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldCallTick()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F58);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldCopyBoundPropertiesOnTick()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F60);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F68);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldCopyBoundPropertiesOnExitState()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F70);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldAffectTransitions()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x20F78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
