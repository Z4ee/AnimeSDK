#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LevelDifficulty.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_1_99BD961747420BEB_18;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTACTIVITYMODULE_GETENDLESSMAXWAVEBYGROUPID_OFFSET UNITYSDK_OFFSET(0x96ADE10)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GETFIGHTACTIVITYGROUPINFO_OFFSET UNITYSDK_OFFSET(0x96ADCB0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GET_REWARDREDDOTGROUPS_OFFSET UNITYSDK_OFFSET(0x96AD0F0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x96AD6F0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x96AD880)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_SENDTAKEREWARDCSREQ_OFFSET UNITYSDK_OFFSET(0x96ADA00)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0x96ADE70)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x96ADFC0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x96AE240)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x96AE160)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDTAKENDIFFICULTYLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x96AEDE0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__CHANGEFIGHTACTIVITYGROUPS_OFFSET UNITYSDK_OFFSET(0x96AE740)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x96B0130)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ISENDLESSREWARDRECEIVEDBYWAVE_OFFSET UNITYSDK_OFFSET(0x96AF830)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDFIGHTACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x96AFE80)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDGETFIGHTACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x96AFA10)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDTAKEFIGHTACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x96AFF80)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONSUBMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x96AF170)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0x96AEE90)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCFIGHTACTIVITYGROUPS_OFFSET UNITYSDK_OFFSET(0x96AE360)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCITEMREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x96AFB20)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__TRYSHOWENDLESSREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x96AF1D0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x96B01E0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x96B02D0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x96B0270)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityModule_TypeDefinitionIndex = 52085;

	class FightActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FoodRemainTurn; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_99BD961747420BEB_18*>* _FightActivityGroups; // 0x18
		::System::Int32 UsedDefendFood; // 0x20
		::System::UInt32 BattleGroupID; // 0x24
		::RPG::Client::TextID BattleTips; // 0x28
		::RPG::Client::TextID BattleTitle; // 0x38
		::System::UInt32 BattleLevel; // 0x48
		::System::Int32 _AutoShowGroupID; // 0x4C
		::RPG::GameCore::LevelDifficulty _AutoShowDifficultyLevel; // 0x50
		::System::Boolean _HasCacheWorldLevel; // 0x54
		::System::Boolean _AutoShowIsFromActivityPanel; // 0x55
		::System::Boolean NewRecord; // 0x56
		::System::UInt32 _WorldLevel; // 0x58
		::System::Int32 UsedAttackFood; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_18*>* get_RewardRedDotGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_18*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GET_REWARDREDDOTGROUPS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::Void SendTakeRewardCsReq(::System::UInt32 groupID, ::System::UInt32 difficultyLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_SENDTAKEREWARDCSREQ_OFFSET))(this, groupID, difficultyLevel);
		}

		::Class_1_99BD961747420BEB_18* GetFightActivityGroupInfo(::System::UInt32 groupID)
		{
			return ((::Class_1_99BD961747420BEB_18*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GETFIGHTACTIVITYGROUPINFO_OFFSET))(this, groupID);
		}

		::System::UInt32 GetEndlessMaxWaveByGroupID(::System::UInt32 groupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GETENDLESSMAXWAVEBYGROUPID_OFFSET))(this, groupID);
		}

		::System::Void SetAutoShowOnExitBattle(::System::UInt32 defaultGroupID, ::RPG::GameCore::LevelDifficulty defaultDifficultyLevel, ::System::Boolean isFromActivityPanel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelDifficulty, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, defaultGroupID, defaultDifficultyLevel, isFromActivityPanel);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _SyncFightActivityGroups(::System::Collections::Generic::IEnumerable_1<::Class_1_99BD961747420BEB_18*>* groups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_99BD961747420BEB_18*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCFIGHTACTIVITYGROUPS_OFFSET))(this, groups);
		}

		::System::Void _ChangeFightActivityGroups(::System::Collections::Generic::IEnumerable_1<::Class_1_99BD961747420BEB_18*>* groups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_99BD961747420BEB_18*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__CHANGEFIGHTACTIVITYGROUPS_OFFSET))(this, groups);
		}

		::System::Void _AddTakenDifficultyLevelReward(::System::UInt32 groupID, ::System::UInt32 difficultyLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ADDTAKENDIFFICULTYLEVELREWARD_OFFSET))(this, groupID, difficultyLevel);
		}

		::System::Void _SendInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SENDINITREQUEST_OFFSET))(this);
		}

		::System::Void _OnSubMissionDataReady(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONSUBMISSIONDATAREADY_OFFSET))(this, arg);
		}

		::System::Void _TryShowEndlessRewardTips(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__TRYSHOWENDLESSREWARDTIPS_OFFSET))(this, arg);
		}

		::System::Void _OnCmdGetFightActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDGETFIGHTACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdFightActivityDataChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDFIGHTACTIVITYDATACHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncItemRemainCount(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>* iter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCITEMREMAINCOUNT_OFFSET))(this, iter);
		}

		::System::Void _OnCmdTakeFightActivityRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDTAKEFIGHTACTIVITYREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean _IsEndlessRewardReceivedByWave(::System::UInt32 rewardWaveIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ISENDLESSREWARDRECEIVEDBYWAVE_OFFSET))(this, rewardWaveIndex);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
