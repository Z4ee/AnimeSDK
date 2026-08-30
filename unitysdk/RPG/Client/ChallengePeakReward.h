#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/RPG/Client/ChallengePeakRewardState.h"
#include "unitysdk/RPG/GameCore/ChallengePeakRewardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakReward_IServerAgent; }
namespace RPG::GameCore { class ChallengePeakRewardORRow; }
namespace RPG::GameCore { class ChallengePeakRewardRow; }
namespace System { class String; }

#define RPG_CLIENT_CHALLENGEPEAKREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD604C0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GETMEDALCOREICONPATH_OFFSET UNITYSDK_OFFSET(0x1AD637D0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GETMEDALMIDDLEBACKGROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1AD63940)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GETRANK_OFFSET UNITYSDK_OFFSET(0x1AD63700)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_HEADFRAMEPATH_OFFSET UNITYSDK_OFFSET(0x1AD63140)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AD62F40)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_ISSTAR_OFFSET UNITYSDK_OFFSET(0x1AD630A0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_PEAKGROUPID_OFFSET UNITYSDK_OFFSET(0x1AD62F90)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_RELATEDBOSSSPECIALREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1AD63120)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1AD63040)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1AD62FA0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1AD632F0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_TYPEVALUE_OFFSET UNITYSDK_OFFSET(0x1AD62FF0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_SET_RELATEDBOSSSPECIALREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1AD63130)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_TAKE_OFFSET UNITYSDK_OFFSET(0x1AD63AB0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD__CHECKREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1AD633B0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD636E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakReward_TypeDefinitionIndex = 63249;

	class ChallengePeakReward : public ::System::Object
	{
	public:
		::RPG::GameCore::ChallengePeakRewardORRow* _OverrideMeta; // 0x10
		::RPG::GameCore::ChallengePeakRewardRow* _Meta; // 0x18
		::RPG::Client::ChallengePeakReward_IServerAgent* _ServerAgent; // 0x20
		::RPG::Client::ChallengePeakReward* _RelatedBossSpecialRewardData_k__BackingField; // 0x28
		::System::UInt32 _PeakGroupID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChallengePeakRewardRow* a2, ::RPG::GameCore::ChallengePeakRewardORRow* a3, ::RPG::Client::ChallengePeakReward_IServerAgent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengePeakRewardRow*, ::RPG::GameCore::ChallengePeakRewardORRow*, ::RPG::Client::ChallengePeakReward_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_PeakGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_PEAKGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::ChallengePeakRewardType get_RewardType()
		{
			return ((::RPG::GameCore::ChallengePeakRewardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_REWARDTYPE_OFFSET))(this);
		}

		::System::UInt32 get_TypeValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_TYPEVALUE_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_REWARDID_OFFSET))(this);
		}

		::System::Boolean get_IsStar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_ISSTAR_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakReward* get_RelatedBossSpecialRewardData()
		{
			return ((::RPG::Client::ChallengePeakReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_RELATEDBOSSSPECIALREWARDDATA_OFFSET))(this);
		}

		::System::Void set_RelatedBossSpecialRewardData(::RPG::Client::ChallengePeakReward* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_SET_RELATEDBOSSSPECIALREWARDDATA_OFFSET))(this, a1);
		}

		::System::String* get_HeadFramePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_HEADFRAMEPATH_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakRewardState get_State()
		{
			return ((::RPG::Client::ChallengePeakRewardState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_STATE_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakReward* Create(::System::UInt32 a1, ::RPG::GameCore::ChallengePeakRewardRow* a2, ::RPG::Client::ChallengePeakReward_IServerAgent* a3)
		{
			return ((::RPG::Client::ChallengePeakReward*(*)(::System::UInt32, ::RPG::GameCore::ChallengePeakRewardRow*, ::RPG::Client::ChallengePeakReward_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::ChallengePeakRank GetRank()
		{
			return ((::RPG::Client::ChallengePeakRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GETRANK_OFFSET))(this);
		}

		::System::String* GetMedalCoreIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GETMEDALCOREICONPATH_OFFSET))(this);
		}

		::System::String* GetMedalMiddleBackgroundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GETMEDALMIDDLEBACKGROUNDICONPATH_OFFSET))(this);
		}

		::System::Void Take()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_TAKE_OFFSET))(this);
		}

		::System::Boolean _CheckRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD__CHECKREWARDCANTAKE_OFFSET))(this);
		}
	};
}
