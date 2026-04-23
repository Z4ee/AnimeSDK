#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITGAMEREFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DD1F0)
#define RPG_GAMECORE_GRIDFIGHTTRAITGAMEREFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DD3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitGameRefConfigRow_TypeDefinitionIndex = 12965;

	class GridFightTraitGameRefConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 BasicScore; // 0x10
		::System::UInt32 Season; // 0x14
		::System::UInt32 TraitID; // 0x18
		::System::UInt32 BonusScore; // 0x1C
		::System::UInt32 PenaltyScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITGAMEREFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitGameRefConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitGameRefConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITGAMEREFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
