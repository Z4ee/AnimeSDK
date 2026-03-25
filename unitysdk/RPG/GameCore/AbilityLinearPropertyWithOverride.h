#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE_GET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0x88090)
#define RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE_GET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x880A0)
#define RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x880F0)
#define RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x88060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityLinearPropertyWithOverride_TypeDefinitionIndex = 43499;

	struct alignas(8) AbilityLinearPropertyWithOverride
	{
		::RPG::GameCore::FixPoint Base; // 0x10
		::RPG::GameCore::FixPoint AddedRatio; // 0x18
		::RPG::GameCore::FixPoint Delta; // 0x20
		::RPG::GameCore::FixPoint Convert; // 0x28
		::RPG::GameCore::FixPoint OverrideValue; // 0x30
		::RPG::GameCore::FixPoint ExtraRatio1; // 0x38
		::RPG::GameCore::FixPoint ExtraRatio2; // 0x40
		::RPG::GameCore::FixPoint ExtraRatio3; // 0x48
		::RPG::GameCore::FixPoint ExtraRatio4; // 0x50
		::RPG::GameCore::FixPoint ExtraRatio5; // 0x58

		::System::Void _ctor(::RPG::GameCore::FixPoint fBase, ::RPG::GameCore::FixPoint addedRatio, ::RPG::GameCore::FixPoint delta, ::RPG::GameCore::FixPoint convert, ::RPG::GameCore::FixPoint overrideValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE__CTOR_OFFSET))(this, fBase, addedRatio, delta, convert, overrideValue);
		}

		::RPG::GameCore::FixPoint get_ExtraRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE_GET_EXTRARATIO_OFFSET))(this);
		}

		::System::Boolean get_IsOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE_GET_ISOVERRIDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Value()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE_GET_VALUE_OFFSET))(this);
		}
	};
}
