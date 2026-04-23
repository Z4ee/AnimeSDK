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

#define RPG_CLIENT_CHALLENGEPEAKREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0x9F54CA0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GETMEDALCOREICONPATH_OFFSET UNITYSDK_OFFSET(0x9F57830)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GETMEDALMIDDLEBACKGROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x9F57A10)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GETRANK_OFFSET UNITYSDK_OFFSET(0x9F577D0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_HEADFRAMEPATH_OFFSET UNITYSDK_OFFSET(0x9F57380)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F57230)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_ISSTAR_OFFSET UNITYSDK_OFFSET(0x9F57300)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_PEAKGROUPID_OFFSET UNITYSDK_OFFSET(0x9F57250)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_RELATEDBOSSSPECIALREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9F57360)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9F572A0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x9F57260)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9F574E0)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_GET_TYPEVALUE_OFFSET UNITYSDK_OFFSET(0x9F57280)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_SET_RELATEDBOSSSPECIALREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9F57370)
#define RPG_CLIENT_CHALLENGEPEAKREWARD_TAKE_OFFSET UNITYSDK_OFFSET(0x9F57C70)
#define RPG_CLIENT_CHALLENGEPEAKREWARD__CHECKREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x9F57560)
#define RPG_CLIENT_CHALLENGEPEAKREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9F577B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakReward_TypeDefinitionIndex = 58196;

	class ChallengePeakReward : public ::System::Object
	{
	public:
		::RPG::GameCore::ChallengePeakRewardRow* _Meta; // 0x10
		::RPG::Client::ChallengePeakReward* _RelatedBossSpecialRewardData_k__BackingField; // 0x18
		::RPG::Client::ChallengePeakReward_IServerAgent* _ServerAgent; // 0x20
		::RPG::GameCore::ChallengePeakRewardORRow* _OverrideMeta; // 0x28
		::System::UInt32 _PeakGroupID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 peakGroupID, ::RPG::GameCore::ChallengePeakRewardRow* meta, ::RPG::GameCore::ChallengePeakRewardORRow* overrideMeta, ::RPG::Client::ChallengePeakReward_IServerAgent* serverAgent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengePeakRewardRow*, ::RPG::GameCore::ChallengePeakRewardORRow*, ::RPG::Client::ChallengePeakReward_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD__CTOR_OFFSET))(this, peakGroupID, meta, overrideMeta, serverAgent);
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

		::System::Void set_RelatedBossSpecialRewardData(::RPG::Client::ChallengePeakReward* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_SET_RELATEDBOSSSPECIALREWARDDATA_OFFSET))(this, value);
		}

		::System::String* get_HeadFramePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_HEADFRAMEPATH_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakRewardState get_State()
		{
			return ((::RPG::Client::ChallengePeakRewardState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_GET_STATE_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakReward* Create(::System::UInt32 peakGroupID, ::RPG::GameCore::ChallengePeakRewardRow* meta, ::RPG::Client::ChallengePeakReward_IServerAgent* serverAgent)
		{
			return ((::RPG::Client::ChallengePeakReward*(*)(::System::UInt32, ::RPG::GameCore::ChallengePeakRewardRow*, ::RPG::Client::ChallengePeakReward_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKREWARD_CREATE_OFFSET))(peakGroupID, meta, serverAgent);
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
