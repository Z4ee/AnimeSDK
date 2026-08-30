#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }

#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS15_0__CHECKRANKREWARDCANBEDESTROY_B__0_OFFSET UNITYSDK_OFFSET(0x1A039970)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A039960)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightWeeklyScore___c__DisplayClass15_0_TypeDefinitionIndex = 65586;

	class GridFightWeeklyScore___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 rank; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckRankRewardCanBeDestroy_b__0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS15_0__CHECKRANKREWARDCANBEDESTROY_B__0_OFFSET))(this, a1);
		}
	};
}
