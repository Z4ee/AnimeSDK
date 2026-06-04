#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_2BE37F50413FF023;
class Class_1_FE65FB558D9B9E65;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeBossSingleNodeInfo; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MonsterGuideData; }
namespace RPG::GameCore { class ChallengeBossMazeExtraConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSDATA_EVERENTERED_OFFSET UNITYSDK_OFFSET(0xB4F19F0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0xB4F0D00)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCHALLENGEBOSSSINGLENODEINFO_OFFSET UNITYSDK_OFFSET(0xB4F0BF0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCOVERBOSSMONSTERID_OFFSET UNITYSDK_OFFSET(0xB4F0860)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCURRENTTEAMMAXSCORE_OFFSET UNITYSDK_OFFSET(0xB4F1A80)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETDESCRIPTIONPARAMS_OFFSET UNITYSDK_OFFSET(0xB4F0AB0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xB4F0A10)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xB4F0B40)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xB4F0C70)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0xB4F1530)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0xB4F0280)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0xB4F0230)
#define RPG_CLIENT_CHALLENGEBOSSDATA_HASEVERREACHEDEND_OFFSET UNITYSDK_OFFSET(0xB4F19A0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB4F1B10)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB4F14D0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0xB4F0290)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0xB4F1120)
#define RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESCORE_OFFSET UNITYSDK_OFFSET(0xB4F1690)
#define RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESINGLENODEINFO_OFFSET UNITYSDK_OFFSET(0xB4F1780)
#define RPG_CLIENT_CHALLENGEBOSSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F02A0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0xB4F1F00)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETDESCRIPTIONPARAMS_OFFSET UNITYSDK_OFFSET(0xB4F1DA0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xB4F1C60)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB4F22A0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB4F2200)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0xB4F2160)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossData_TypeDefinitionIndex = 59025;

	class ChallengeBossData : public ::RPG::Client::ChallengeData
	{
	public:
		// static const ::System::Int32 NodeNum = 0x2; // 0x0
		// static const ::System::Int32 _MonsterGuideMaxCount = 0x3; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideData*>* _MonsterGuides; // 0x68
		::RPG::GameCore::ChallengeBossMazeExtraConfigRow* _BossExtraInfoRow_k__BackingField; // 0x70
		::Il2CppArray<::RPG::Client::ChallengeBossSingleNodeInfo*>* _NodeInfos; // 0x78
		::System::Boolean EverReachEnd; // 0x80

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_NodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GET_NODECOUNT_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeBossMazeExtraConfigRow* get_BossExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeBossMazeExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GET_BOSSEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_BossExtraInfoRow(::RPG::GameCore::ChallengeBossMazeExtraConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeBossMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SET_BOSSEXTRAINFOROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETDESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetDescriptionParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETDESCRIPTIONPARAMS_OFFSET))(this);
		}

		::System::UInt32 GetCoverBossMonsterID(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETCOVERBOSSMONSTERID_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* GetMonsterData(::System::Int32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterGuideData* GetMonsterGuideData(::System::Int32 a1)
		{
			return ((::RPG::Client::MonsterGuideData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERGUIDEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeBossSingleNodeInfo* GetChallengeBossSingleNodeInfo(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengeBossSingleNodeInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETCHALLENGEBOSSSINGLENODEINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void SyncArchiveExtInfo(::Class_1_FE65FB558D9B9E65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE65FB558D9B9E65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SYNCARCHIVEEXTINFO_OFFSET))(this, a1);
		}

		::System::Void SaveExtInfoWhenEnterChallenge(::Class_1_2BE37F50413FF023* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BE37F50413FF023*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GetUpgradeAvailableAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETUPGRADEAVAILABLEAVATAR_OFFSET))(this, a1);
		}

		::System::Void UpdateScore(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESCORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateSingleNodeInfo(::System::Int32 a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESINGLENODEINFO_OFFSET))(this, a1, a2, a3, a4);
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

		::RPG::Client::TextID __iFixBaseProxy_GetDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETDESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __iFixBaseProxy_GetDescriptionParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETDESCRIPTIONPARAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* __iFixBaseProxy_GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_SyncArchiveExtInfo(::Class_1_FE65FB558D9B9E65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE65FB558D9B9E65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SYNCARCHIVEEXTINFO_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SaveExtInfoWhenEnterChallenge(::Class_1_2BE37F50413FF023* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BE37F50413FF023*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}
	};
}
