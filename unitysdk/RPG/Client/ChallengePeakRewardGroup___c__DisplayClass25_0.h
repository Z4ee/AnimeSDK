#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakReward; }
namespace RPG::Client { class ChallengePeakRewardGroup; }

#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD65160)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP___C__DISPLAYCLASS25_0___GETSORTEDREWARDDATABYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1AD65170)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakRewardGroup___c__DisplayClass25_0_TypeDefinitionIndex = 63252;

	class ChallengePeakRewardGroup___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeakRewardGroup* __4__this; // 0x10
		::System::Boolean isIgnoreProgress; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __GetSortedRewardDataByType_b__0(::RPG::Client::ChallengePeakReward* a1, ::RPG::Client::ChallengePeakReward* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengePeakReward*, ::RPG::Client::ChallengePeakReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP___C__DISPLAYCLASS25_0___GETSORTEDREWARDDATABYTYPE_B__0_OFFSET))(this, a1, a2);
		}
	};
}
