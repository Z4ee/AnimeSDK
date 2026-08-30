#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicMode.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3936A0)
#define RPG_GAMECORE_RELICCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3947F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicConfigRow_TypeDefinitionIndex = 14466;

	class RelicConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 MaxLevel; // 0x10
		::System::UInt32 ExpType; // 0x14
		::System::UInt32 CoinCost; // 0x18
		::System::UInt32 SetID; // 0x1C
		::System::UInt32 ExpProvide; // 0x20
		::RPG::GameCore::CombatPowerRelicRarityType Rarity; // 0x24
		::System::UInt32 MainAffixGroup; // 0x28
		::System::UInt32 SubAffixGroup; // 0x2C
		::RPG::GameCore::RelicType Type; // 0x30
		::RPG::GameCore::RelicMode Mode; // 0x34
		::System::UInt32 ID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
