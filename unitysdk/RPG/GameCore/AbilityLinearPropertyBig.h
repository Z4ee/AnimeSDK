#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_ABILITYLINEARPROPERTYBIG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x88040)
#define RPG_GAMECORE_ABILITYLINEARPROPERTYBIG__CTOR_OFFSET UNITYSDK_OFFSET(0x88010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityLinearPropertyBig_TypeDefinitionIndex = 43498;

	struct alignas(8) AbilityLinearPropertyBig
	{
		::RPG::GameCore::BigFixPoint Base; // 0x10
		::RPG::GameCore::FixPoint AddedRatio; // 0x20
		::RPG::GameCore::FixPoint Delta; // 0x28
		::RPG::GameCore::FixPoint Convert; // 0x30
		::RPG::GameCore::FixPoint ExtraRatio1; // 0x38
		::RPG::GameCore::FixPoint ExtraRatio2; // 0x40
		::RPG::GameCore::FixPoint ExtraRatio3; // 0x48
		::RPG::GameCore::FixPoint ExtraRatio4; // 0x50
		::RPG::GameCore::FixPoint ExtraRatio5; // 0x58

		::System::Void _ctor(::RPG::GameCore::BigFixPoint fBase, ::RPG::GameCore::FixPoint addedRatio, ::RPG::GameCore::FixPoint delta, ::RPG::GameCore::FixPoint convert)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINEARPROPERTYBIG__CTOR_OFFSET))(this, fBase, addedRatio, delta, convert);
		}

		::RPG::GameCore::BigFixPoint get_Value()
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINEARPROPERTYBIG_GET_VALUE_OFFSET))(this);
		}
	};
}
