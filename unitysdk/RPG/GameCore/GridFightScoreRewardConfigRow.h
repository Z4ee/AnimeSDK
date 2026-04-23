#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSCOREREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D5540)
#define RPG_GAMECORE_GRIDFIGHTSCOREREWARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D56F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightScoreRewardConfigRow_TypeDefinitionIndex = 12704;

	class GridFightScoreRewardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Reward; // 0x10
		::System::UInt32 ScoreRow; // 0x14
		::System::UInt32 Score; // 0x18
		::System::UInt32 ScoreRank; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSCOREREWARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightScoreRewardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightScoreRewardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSCOREREWARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
