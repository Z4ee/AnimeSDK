#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CYCLESCOREREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1884B110)
#define RPG_GAMECORE_CYCLESCOREREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1884B250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CycleScoreRewardRow_TypeDefinitionIndex = 12389;

	class CycleScoreRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Reward; // 0x10
		::System::UInt32 ScoreRank; // 0x14
		::System::UInt32 Score; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLESCOREREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CycleScoreRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CycleScoreRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLESCOREREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
