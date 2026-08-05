#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBE1A10)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBE1170)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex = 31677;

	class RegistrationInfo_ScriptStruct_StateTreeTaskBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x263F0);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldCopyBoundPropertiesOnTick()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x263F8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x26400);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x26408);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_TaskEnabled()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x26410);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldCallTickOnlyOnEvents()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x26418);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldStateChangeOnReselect()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x26420);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldCallTick()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x26428);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldCopyBoundPropertiesOnExitState()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x26430);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_ShouldAffectTransitions()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x26438);
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
