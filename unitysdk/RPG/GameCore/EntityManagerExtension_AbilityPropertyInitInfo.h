#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyIneritType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections { class BitArray; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_ADDINHERITPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x88340)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_ADDINHERITPROPERTY_OFFSET UNITYSDK_OFFSET(0x88330)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_GETPROPERTYINERITTYPE_OFFSET UNITYSDK_OFFSET(0x88290)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_HASINHERITPROPERTY_OFFSET UNITYSDK_OFFSET(0x882A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_INCLUDEINHERITPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x88320)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_REMOVEINHERITPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x88360)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_REMOVEINHERITPROPERTY_OFFSET UNITYSDK_OFFSET(0x88350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension_AbilityPropertyInitInfo_TypeDefinitionIndex = 46580;

	struct alignas(8) EntityManagerExtension_AbilityPropertyInitInfo
	{
		::RPG::GameCore::TurnBasedAbilityComponent* Ability; // 0x10
		::RPG::GameCore::TurnBasedAbilityComponent* InheritAbility; // 0x18
		::Il2CppArray<::System::Collections::BitArray*>* InheritPropertyMasks; // 0x20

		::RPG::GameCore::AbilityPropertyIneritType GetPropertyIneritType(::RPG::GameCore::AbilityProperty property)
		{
			return ((::RPG::GameCore::AbilityPropertyIneritType(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_GETPROPERTYINERITTYPE_OFFSET))(this, property);
		}

		::System::Boolean HasInheritProperty(::RPG::GameCore::AbilityPropertyIneritType inheritType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_HASINHERITPROPERTY_OFFSET))(this, inheritType);
		}

		/*
		::System::Void IncludeInheritPropertyValue(::RPG::GameCore::AbilityProperty property, ::RPG::GameCore::FixPoint& fInitValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_INCLUDEINHERITPROPERTYVALUE_OFFSET))(this, property, fInitValue);
		}
		*/

		::System::Void AddInheritProperty(::RPG::GameCore::AbilityPropertyIneritType inheritType, ::Il2CppArray<::RPG::GameCore::AbilityProperty>* propertyList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_ADDINHERITPROPERTY_OFFSET))(this, inheritType, propertyList);
		}

		::System::Void AddInheritProperty_1(::RPG::GameCore::AbilityPropertyIneritType inheritType, ::RPG::GameCore::AbilityProperty propertyFrom, ::RPG::GameCore::AbilityProperty propertyTo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_ADDINHERITPROPERTY_1_OFFSET))(this, inheritType, propertyFrom, propertyTo);
		}

		::System::Void RemoveInheritProperty(::RPG::GameCore::AbilityPropertyIneritType inheritType, ::Il2CppArray<::RPG::GameCore::AbilityProperty>* propertyList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_REMOVEINHERITPROPERTY_OFFSET))(this, inheritType, propertyList);
		}

		::System::Void RemoveInheritProperty_1(::RPG::GameCore::AbilityPropertyIneritType inheritType, ::RPG::GameCore::AbilityProperty propertyFrom, ::RPG::GameCore::AbilityProperty propertyTo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityPropertyIneritType, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION_ABILITYPROPERTYINITINFO_REMOVEINHERITPROPERTY_1_OFFSET))(this, inheritType, propertyFrom, propertyTo);
		}
	};
}
