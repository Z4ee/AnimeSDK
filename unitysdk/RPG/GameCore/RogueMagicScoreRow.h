#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3EF780)
#define RPG_GAMECORE_ROGUEMAGICSCOREROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EF930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScoreRow_TypeDefinitionIndex = 14711;

	class RogueMagicScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 RoomNum; // 0x10
		::System::UInt32 WorldLevel; // 0x14
		::System::UInt32 LayerNum; // 0x18
		::System::UInt32 WeeklyScore; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCOREROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicScoreRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicScoreRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCOREROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
