#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyIneritType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections { class BitArray; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_ADDINHERITPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x38F08B0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_ADDINHERITPROPERTY_OFFSET UNITYSDK_OFFSET(0x38F08A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_GETPROPERTYINERITTYPE_OFFSET UNITYSDK_OFFSET(0x38F0810)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_HASINHERITPROPERTY_OFFSET UNITYSDK_OFFSET(0x38F0820)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_INCLUDEINHERITPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x38F0890)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_REMOVEINHERITPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x38F08D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_REMOVEINHERITPROPERTY_OFFSET UNITYSDK_OFFSET(0x38F08C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension_AbilityPropertyInitInfo_TypeDefinitionIndex = 57925;

	struct alignas(8) EntityManagerExtension_AbilityPropertyInitInfo
	{
		::RPG::GameCore::TurnBasedAbilityComponent* Ability; // 0x10
		::RPG::GameCore::TurnBasedAbilityComponent* InheritAbility; // 0x18
		::Il2CppArray<::System::Collections::BitArray*>* InheritPropertyMasks; // 0x20

		::RPG::GameCore::AbilityPropertyIneritType GetPropertyIneritType(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::RPG::GameCore::AbilityPropertyIneritType(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_GETPROPERTYINERITTYPE_OFFSET))(this, a1);
		}

		::System::Boolean HasInheritProperty(::RPG::GameCore::AbilityPropertyIneritType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_HASINHERITPROPERTY_OFFSET))(this, a1);
		}

		/*
		::System::Void IncludeInheritPropertyValue(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_INCLUDEINHERITPROPERTYVALUE_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void AddInheritProperty(::RPG::GameCore::AbilityPropertyIneritType a1, ::Il2CppArray<::RPG::GameCore::AbilityProperty>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_ADDINHERITPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void AddInheritProperty_1(::RPG::GameCore::AbilityPropertyIneritType a1, ::RPG::GameCore::AbilityProperty a2, ::RPG::GameCore::AbilityProperty a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_ADDINHERITPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveInheritProperty(::RPG::GameCore::AbilityPropertyIneritType a1, ::Il2CppArray<::RPG::GameCore::AbilityProperty>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_REMOVEINHERITPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveInheritProperty_1(::RPG::GameCore::AbilityPropertyIneritType a1, ::RPG::GameCore::AbilityProperty a2, ::RPG::GameCore::AbilityProperty a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_REMOVEINHERITPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
