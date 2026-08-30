#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE_GET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0x15BB20)
#define RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE_GET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x15BB30)
#define RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15BC00)
#define RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityLinearPropertyWithOverride_TypeDefinitionIndex = 54631;

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

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLINEARPROPERTYWITHOVERRIDE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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
