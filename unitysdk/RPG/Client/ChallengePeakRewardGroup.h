#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRewardState.h"
#include "unitysdk/RPG/GameCore/ChallengePeakRewardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakReward; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xCAAECE0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETRELATEDBOSSSPECIALREWARDDATABYTYPEVALUE_OFFSET UNITYSDK_OFFSET(0xCAB3380)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDBOSSSTARREWARDDATA_OFFSET UNITYSDK_OFFSET(0xCAB3840)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDNORMALPASSREWARDDATA_OFFSET UNITYSDK_OFFSET(0xCAB3570)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDNORMALSTARREWARDDATA_OFFSET UNITYSDK_OFFSET(0xCAB37F0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASPASSREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xCAA98F0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xCAA96A0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASSTARREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xCAA9810)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0xCAB2AA0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_PEAKGROUPID_OFFSET UNITYSDK_OFFSET(0xCAB2AC0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_SET_ID_OFFSET UNITYSDK_OFFSET(0xCAB2AB0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_TAKEMONSTERANDBOSSSTARREWARD_OFFSET UNITYSDK_OFFSET(0xCAB2700)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_TAKEMONSTERPASSREWARD_OFFSET UNITYSDK_OFFSET(0xCAB23D0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xCAB2C70)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__GETSORTEDREWARDDATABYTYPE_OFFSET UNITYSDK_OFFSET(0xCAB35C0)
#define RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__HASREWARDCANTAKEOFTYPE_OFFSET UNITYSDK_OFFSET(0xCAB2AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakRewardGroup_TypeDefinitionIndex = 63251;

	class ChallengePeakRewardGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ChallengePeakRewardState, ::System::Int32>* _ProgressTypeOrder; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengePeakRewardType, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*>* _RewardsDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* _Rewards; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _PeakGroupID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PeakGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_PEAKGROUPID_OFFSET))(this);
		}

		::System::Boolean get_HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean get_HasStarRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASSTARREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean get_HasPassRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GET_HASPASSREWARDCANTAKE_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakRewardGroup* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* a3)
		{
			return ((::RPG::Client::ChallengePeakRewardGroup*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* GetSortedNormalPassRewardData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDNORMALPASSREWARDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* GetSortedNormalStarRewardData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDNORMALSTARREWARDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* GetSortedBossStarRewardData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETSORTEDBOSSSTARREWARDDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakReward* GetRelatedBossSpecialRewardDataByTypeValue(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengePeakReward*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_GETRELATEDBOSSSPECIALREWARDDATABYTYPEVALUE_OFFSET))(this, a1);
		}

		::System::Void TakeMonsterPassReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_TAKEMONSTERPASSREWARD_OFFSET))(this);
		}

		::System::Void TakeMonsterAndBossStarReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP_TAKEMONSTERANDBOSSSTARREWARD_OFFSET))(this);
		}

		::System::Boolean _HasRewardCanTakeOfType(::RPG::GameCore::ChallengePeakRewardType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChallengePeakRewardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__HASREWARDCANTAKEOFTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>* _GetSortedRewardDataByType(::RPG::GameCore::ChallengePeakRewardType a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakReward*>*(*)(::PVOID, ::RPG::GameCore::ChallengePeakRewardType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARDGROUP__GETSORTEDREWARDDATABYTYPE_OFFSET))(this, a1, a2);
		}
	};
}
