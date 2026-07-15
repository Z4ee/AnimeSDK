#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeFriendRecommendLineupData; }
namespace RPG::Client { class ChallengeStatisticRecommendLineupData; }

#define RPG_CLIENT_CHALLENGERECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x191F8740)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x191F89E0)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_GET_FRIENDRECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x191F8640)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_GET_STATISTICRECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x191F8660)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_ISCHALLENGERECOMMENDFEATUREOPEN_OFFSET UNITYSDK_OFFSET(0x191F8800)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_RESETDATA_OFFSET UNITYSDK_OFFSET(0x191F88E0)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_SET_FRIENDRECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x191F8650)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA_SET_STATISTICRECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x191F8670)
#define RPG_CLIENT_CHALLENGERECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191F8680)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeRecommendData_TypeDefinitionIndex = 60345;

	class ChallengeRecommendData : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeFriendRecommendLineupData* _FriendRecommendLineupData_k__BackingField; // 0x10
		::RPG::Client::ChallengeStatisticRecommendLineupData* _StatisticRecommendLineupData_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeFriendRecommendLineupData* get_FriendRecommendLineupData()
		{
			return ((::RPG::Client::ChallengeFriendRecommendLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_GET_FRIENDRECOMMENDLINEUPDATA_OFFSET))(this);
		}

		::System::Void set_FriendRecommendLineupData(::RPG::Client::ChallengeFriendRecommendLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeFriendRecommendLineupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_SET_FRIENDRECOMMENDLINEUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeStatisticRecommendLineupData* get_StatisticRecommendLineupData()
		{
			return ((::RPG::Client::ChallengeStatisticRecommendLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_GET_STATISTICRECOMMENDLINEUPDATA_OFFSET))(this);
		}

		::System::Void set_StatisticRecommendLineupData(::RPG::Client::ChallengeStatisticRecommendLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeStatisticRecommendLineupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_SET_STATISTICRECOMMENDLINEUPDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengeRecommendData* Create(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::RPG::Client::ChallengeRecommendData*(*)(::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsChallengeRecommendFeatureOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_ISCHALLENGERECOMMENDFEATUREOPEN_OFFSET))();
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_RESETDATA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGERECOMMENDDATA_DISPOSE_OFFSET))(this);
		}
	};
}
