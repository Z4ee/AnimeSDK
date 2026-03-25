#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValueRangeCallback; }

#define RPG_GAMECORE_ABILITYPROPERTYRANGEGROUP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E94F60)
#define RPG_GAMECORE_ABILITYPROPERTYRANGEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16E95090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyRangeGroup_TypeDefinitionIndex = 16724;

	class AbilityPropertyRangeGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AbilityProperty Property; // 0x10
		::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* Ranges; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYRANGEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AbilityPropertyRangeGroup*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbilityPropertyRangeGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYRANGEGROUP_FROMBINARY_OFFSET))(array, val);
		}
	};
}
