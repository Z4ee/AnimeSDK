#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"

class Class_1_79B49C00C46243B4;
namespace RPG::Client::Achievement { class AchievementTakeRewardResultViewModel; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_OFFSET UNITYSDK_OFFSET(0x1ABB60D0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQ_OFFSET UNITYSDK_OFFSET(0x1ABB5EA0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_START_OFFSET UNITYSDK_OFFSET(0x1ABB5E10)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_STOP_OFFSET UNITYSDK_OFFSET(0x1ABB5E50)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB6240)

namespace RPG::Client::Achievement
{
	inline static constexpr unsigned int AchievementNetworkService_TypeDefinitionIndex = 80732;

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

		::RPG::Client::Promises::IPromise_1<::Class_1_79B49C00C46243B4*>* SendTakeAchievementRewardCsReq(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_79B49C00C46243B4*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>* SendTakeAchievementRewardCsReqAndBuildResult(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_OFFSET))(this, a1);
		}
	};
}
