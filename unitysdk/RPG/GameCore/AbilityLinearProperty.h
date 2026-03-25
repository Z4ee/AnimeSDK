#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_ABILITYLINEARPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x87F10)
#define RPG_GAMECORE_ABILITYLINEARPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x87EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityLinearProperty_TypeDefinitionIndex = 43497;

	struct alignas(8) AbilityLinearProperty
	{
		::RPG::GameCore::FixPoint Base; // 0x10
		::RPG::GameCore::FixPoint AddedRatio; // 0x18
		::RPG::GameCore::FixPoint Delta; // 0x20
		::RPG::GameCore::FixPoint Convert; // 0x28
		::RPG::GameCore::FixPoint ExtraRatio1; // 0x30
		::RPG::GameCore::FixPoint ExtraRatio2; // 0x38
		::RPG::GameCore::FixPoint ExtraRatio3; // 0x40
		::RPG::GameCore::FixPoint ExtraRatio4; // 0x48
		::RPG::GameCore::FixPoint ExtraRatio5; // 0x50

		::System::Void _ctor(::RPG::GameCore::FixPoint fBase, ::RPG::GameCore::FixPoint addedRatio, ::RPG::GameCore::FixPoint delta, ::RPG::GameCore::FixPoint convert)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINEARPROPERTY__CTOR_OFFSET))(this, fBase, addedRatio, delta, convert);
		}

		::RPG::GameCore::FixPoint get_Value()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINEARPROPERTY_GET_VALUE_OFFSET))(this);
		}
	};
}
