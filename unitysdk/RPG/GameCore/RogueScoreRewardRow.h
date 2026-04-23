#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUESCOREREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D67C80)
#define RPG_GAMECORE_ROGUESCOREREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D68360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueScoreRewardRow_TypeDefinitionIndex = 14142;

	class RogueScoreRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardPoolID; // 0x10
		::System::UInt32 Reward; // 0x14
		::System::UInt32 ScoreRow; // 0x18
		::System::UInt32 Score; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueScoreRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueScoreRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
