#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEQUIPRARITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A105D0)
#define RPG_GAMECORE_IDLELIVEEQUIPRARITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A10950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipRarityRow_TypeDefinitionIndex = 11200;

	class IdleLiveEquipRarityRow : public ::System::Object
	{
	public:
		::System::String* RarityBg; // 0x10
		::System::String* RarityIcon; // 0x18
		::System::String* OrbEffectPath; // 0x20
		::System::String* StateName; // 0x28
		::RPG::GameCore::FixPoint SpEquipRarityAddPower; // 0x30
		::RPG::GameCore::FixPoint SpEquipPowerFactor; // 0x38
		::RPG::GameCore::FixPoint EquipRarityAddPower; // 0x40
		::System::UInt32 Rarity; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPRARITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveEquipRarityRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEquipRarityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPRARITYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
