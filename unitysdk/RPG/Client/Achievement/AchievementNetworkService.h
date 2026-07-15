#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"

namespace Proto { class TakeQuestRewardScRsp; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQ_OFFSET UNITYSDK_OFFSET(0x174750D0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_START_OFFSET UNITYSDK_OFFSET(0x17475040)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_STOP_OFFSET UNITYSDK_OFFSET(0x17475080)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x17475300)

namespace RPG::Client::Achievement
{
	inline static constexpr unsigned int AchievementNetworkService_TypeDefinitionIndex = 76693;

	class AchievementNetworkService : public ::Class_1_5E4ED920015DC82D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_STOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::Proto::TakeQuestRewardScRsp*>* SendTakeAchievementRewardCsReq(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Proto::TakeQuestRewardScRsp*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQ_OFFSET))(this, a1);
		}
	};
}
