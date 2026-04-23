#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTRARITYWEIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D1550)
#define RPG_GAMECORE_GRIDFIGHTRARITYWEIGHTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D1770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRarityWeightConfigRow_TypeDefinitionIndex = 12865;

	class GridFightRarityWeightConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Rarity4Weight; // 0x10
		::System::UInt32 Rarity5Weight; // 0x14
		::System::UInt32 Rarity2Weight; // 0x18
		::System::UInt32 Rarity1Weight; // 0x1C
		::System::UInt32 Rarity3Weight; // 0x20
		::System::UInt32 PlayerLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRARITYWEIGHTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRarityWeightConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRarityWeightConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRARITYWEIGHTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
