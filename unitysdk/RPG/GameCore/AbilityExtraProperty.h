#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_ABILITYEXTRAPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15BAA0)
#define RPG_GAMECORE_ABILITYEXTRAPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityExtraProperty_TypeDefinitionIndex = 54629;

	struct alignas(8) AbilityExtraProperty
	{
		::RPG::GameCore::FixPoint ExtraRatio1; // 0x10
		::RPG::GameCore::FixPoint ExtraRatio2; // 0x18
		::RPG::GameCore::FixPoint ExtraRatio3; // 0x20
		::RPG::GameCore::FixPoint ExtraRatio4; // 0x28
		::RPG::GameCore::FixPoint ExtraRatio5; // 0x30

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYEXTRAPROPERTY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::FixPoint get_Value()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYEXTRAPROPERTY_GET_VALUE_OFFSET))(this);
		}
	};
}
