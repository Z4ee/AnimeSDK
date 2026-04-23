#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D22C00)
#define RPG_GAMECORE_ROGUEMAGICSCOREROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D22DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScoreRow_TypeDefinitionIndex = 14079;

	class RogueMagicScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 LayerNum; // 0x10
		::System::UInt32 WorldLevel; // 0x14
		::System::UInt32 WeeklyScore; // 0x18
		::System::UInt32 RoomNum; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCOREROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicScoreRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicScoreRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCOREROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
