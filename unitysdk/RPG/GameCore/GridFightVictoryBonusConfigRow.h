#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTVICTORYBONUSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D07EAE0)
#define RPG_GAMECORE_GRIDFIGHTVICTORYBONUSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07EC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightVictoryBonusConfigRow_TypeDefinitionIndex = 12915;

	class GridFightVictoryBonusConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 VictoryCount; // 0x10
		::System::UInt32 ExtraGroupID; // 0x14
		::System::UInt32 GoldBonus; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTVICTORYBONUSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightVictoryBonusConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightVictoryBonusConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTVICTORYBONUSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
