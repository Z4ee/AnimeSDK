#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCENDGAMEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D0B4B0)
#define RPG_GAMECORE_ROGUEDLCENDGAMEREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D0B5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCEndGameRewardRow_TypeDefinitionIndex = 14004;

	class RogueDLCEndGameRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 Sort; // 0x14
		::System::UInt32 EndGameRewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENDGAMEREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCEndGameRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCEndGameRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENDGAMEREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
