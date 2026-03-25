#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98E93F0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS16_0__GETREWARDDISPLAYDATABYRANKS_B__0_OFFSET UNITYSDK_OFFSET(0x98E97F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightWeeklyScore___c__DisplayClass16_0_TypeDefinitionIndex = 53196;

	class GridFightWeeklyScore___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* ranks; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRewardDisplayDataByRanks_b__0(::RPG::GameCore::GridFightScoreRewardConfigRow* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS16_0__GETREWARDDISPLAYDATABYRANKS_B__0_OFFSET))(this, x);
		}
	};
}
