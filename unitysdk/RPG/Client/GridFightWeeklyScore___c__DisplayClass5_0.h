#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }

#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB9FD0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS5_0__GETREWARDBYSCORERANK_B__0_OFFSET UNITYSDK_OFFSET(0x18FBB7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightWeeklyScore___c__DisplayClass5_0_TypeDefinitionIndex = 62603;

	class GridFightWeeklyScore___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 scoreRank; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRewardByScoreRank_b__0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS5_0__GETREWARDBYSCORERANK_B__0_OFFSET))(this, a1);
		}
	};
}
