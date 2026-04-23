#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERRETURNRELICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C35090)
#define RPG_GAMECORE_PLAYERRETURNRELICROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C35250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnRelicRow_TypeDefinitionIndex = 13736;

	class PlayerReturnRelicRow : public ::System::Object
	{
	public:
		::RPG::GameCore::CombatPowerRelicRarityType RelicRarity; // 0x10
		::System::Boolean IsRelicMatchMainAffix; // 0x14
		::System::UInt32 WorldLevel; // 0x18
		::System::UInt32 RelicLevel; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNRELICROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerReturnRelicRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnRelicRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNRELICROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
