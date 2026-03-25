#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"

class Class_1_D11346F5905C32B7;
class Class_1_E3BF1E96389B67AF;
namespace RPG::Client { class ChallengeBossSingleNodeInfo; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MonsterGuideData; }
namespace RPG::GameCore { class ChallengeBossMazeExtraConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSDATA_EVERENTERED_OFFSET UNITYSDK_OFFSET(0x92BB790)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x92BABE0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCHALLENGEBOSSSINGLENODEINFO_OFFSET UNITYSDK_OFFSET(0x92BAA90)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCURRENTTEAMMAXSCORE_OFFSET UNITYSDK_OFFSET(0x92BB820)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x92BA7D0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x92BA930)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x92BB2A0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x92BB8F0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_HASEVERREACHEDEND_OFFSET UNITYSDK_OFFSET(0x92BB750)
#define RPG_CLIENT_CHALLENGEBOSSDATA_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x92BB8B0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92BB240)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x92BB900)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0x92BAFD0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESCORE_OFFSET UNITYSDK_OFFSET(0x92BB470)
#define RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESINGLENODEINFO_OFFSET UNITYSDK_OFFSET(0x92BB560)
#define RPG_CLIENT_CHALLENGEBOSSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92BA320)
#define RPG_CLIENT_CHALLENGEBOSSDATA__GETMONSTERID_OFFSET UNITYSDK_OFFSET(0x92BA5E0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x92BB910)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x92BBC80)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92BBBE0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0x92BBB40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossData_TypeDefinitionIndex = 51186;

	class ChallengeBossData : public ::RPG::Client::ChallengeData
	{
	public:
		// static const ::System::Int32 NodeNum = 0x2; // 0x0
		::Il2CppArray<::RPG::Client::ChallengeBossSingleNodeInfo*>* _NodeInfos; // 0x68
		::RPG::GameCore::ChallengeBossMazeExtraConfigRow* _BossExtraInfoRow_k__BackingField; // 0x70
		::System::Boolean EverReachEnd; // 0x78

		::System::Void _ctor(::System::UInt32 id, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA__CTOR_OFFSET))(this, id, groupType);
		}

		::RPG::Client::MonsterData* GetMonsterData(::System::Int32 stageNum)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERDATA_OFFSET))(this, stageNum);
		}

		::RPG::Client::MonsterGuideData* GetMonsterGuideData(::System::Int32 stageNum)
		{
			return ((::RPG::Client::MonsterGuideData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERGUIDEDATA_OFFSET))(this, stageNum);
		}

		::RPG::Client::ChallengeBossSingleNodeInfo* GetChallengeBossSingleNodeInfo(::System::Int32 stageNum)
		{
			return ((::RPG::Client::ChallengeBossSingleNodeInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETCHALLENGEBOSSSINGLENODEINFO_OFFSET))(this, stageNum);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 stageIndex, ::System::Int32 eventIndex)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, stageIndex, eventIndex);
		}

		::System::Void SyncArchiveExtInfo(::Class_1_E3BF1E96389B67AF* extInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E3BF1E96389B67AF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SYNCARCHIVEEXTINFO_OFFSET))(this, extInfo);
		}

		::System::Void SaveExtInfoWhenEnterChallenge(::Class_1_D11346F5905C32B7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D11346F5905C32B7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, rsp);
		}

		::RPG::Client::IAvatarInfoProvider* GetUpgradeAvailableAvatar(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETUPGRADEAVAILABLEAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void UpdateScore(::System::UInt32 score1, ::System::UInt32 score2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESCORE_OFFSET))(this, score1, score2);
		}

		::System::Void UpdateSingleNodeInfo(::System::Int32 stageIndex, ::System::Boolean isWin, ::System::UInt32 score, ::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESINGLENODEINFO_OFFSET))(this, stageIndex, isWin, score, buffID);
		}

		::System::Boolean HasEverReachedEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_HASEVERREACHEDEND_OFFSET))(this);
		}

		::System::Boolean EverEntered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_EVERENTERED_OFFSET))(this);
		}

		::System::UInt32 GetCurrentTeamMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETCURRENTTEAMMAXSCORE_OFFSET))(this);
		}

		::System::Boolean IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 _GetMonsterID(::System::Int32 stageNum)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA__GETMONSTERID_OFFSET))(this, stageNum);
		}

		::RPG::GameCore::ChallengeBossMazeExtraConfigRow* get_BossExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeBossMazeExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GET_BOSSEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_BossExtraInfoRow(::RPG::GameCore::ChallengeBossMazeExtraConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeBossMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SET_BOSSEXTRAINFOROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* __iFixBaseProxy_GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 P0, ::System::Int32 P1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SyncArchiveExtInfo(::Class_1_E3BF1E96389B67AF* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E3BF1E96389B67AF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SYNCARCHIVEEXTINFO_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SaveExtInfoWhenEnterChallenge(::Class_1_D11346F5905C32B7* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D11346F5905C32B7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}
	};
}
