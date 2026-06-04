#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LevelDifficulty.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_1_7E9AC8675DA072FB_1;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTACTIVITYMODULE_GETENDLESSMAXWAVEBYGROUPID_OFFSET UNITYSDK_OFFSET(0xB9C11C0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GETFIGHTACTIVITYGROUPINFO_OFFSET UNITYSDK_OFFSET(0xB9C1090)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GET_REWARDREDDOTGROUPS_OFFSET UNITYSDK_OFFSET(0xB9C0430)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xB9C0AA0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB9C0C30)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_SENDTAKEREWARDCSREQ_OFFSET UNITYSDK_OFFSET(0xB9C0DC0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0xB9C1220)
#define RPG_CLIENT_FIGHTACTIVITYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB9C1370)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB9C1700)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB9C14D0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ADDTAKENDIFFICULTYLEVELREWARD_OFFSET UNITYSDK_OFFSET(0xB9C2320)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__CHANGEFIGHTACTIVITYGROUPS_OFFSET UNITYSDK_OFFSET(0xB9C1C30)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB9C3720)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ISENDLESSREWARDRECEIVEDBYWAVE_OFFSET UNITYSDK_OFFSET(0xB9C2DC0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDFIGHTACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB9C33F0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDGETFIGHTACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB9C2F90)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDTAKEFIGHTACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB9C34F0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__ONSUBMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0xB9C2750)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0xB9C2420)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCFIGHTACTIVITYGROUPS_OFFSET UNITYSDK_OFFSET(0xB9C1860)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCITEMREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xB9C30A0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE__TRYSHOWENDLESSREWARDTIPS_OFFSET UNITYSDK_OFFSET(0xB9C27B0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB9C37D0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB9C38B0)
#define RPG_CLIENT_FIGHTACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB9C3850)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityModule_TypeDefinitionIndex = 59965;

	class FightActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FoodRemainTurn; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7E9AC8675DA072FB_1*>* _FightActivityGroups; // 0x18
		::RPG::GameCore::LevelDifficulty _AutoShowDifficultyLevel; // 0x20
		::System::Int32 _AutoShowGroupID; // 0x24
		::RPG::Client::TextID BattleTitle; // 0x28
		::System::UInt32 BattleGroupID; // 0x38
		::System::Boolean _HasCacheWorldLevel; // 0x3C
		::System::Boolean NewRecord; // 0x3D
		::System::Boolean _AutoShowIsFromActivityPanel; // 0x3E
		::System::UInt32 _WorldLevel; // 0x40
		::System::UInt32 BattleLevel; // 0x44
		::RPG::Client::TextID BattleTips; // 0x48
		::System::Int32 UsedAttackFood; // 0x58
		::System::Int32 UsedDefendFood; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB_1*>* get_RewardRedDotGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GET_REWARDREDDOTGROUPS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::Void SendTakeRewardCsReq(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_SENDTAKEREWARDCSREQ_OFFSET))(this, a1, a2);
		}

		::Class_1_7E9AC8675DA072FB_1* GetFightActivityGroupInfo(::System::UInt32 a1)
		{
			return ((::Class_1_7E9AC8675DA072FB_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GETFIGHTACTIVITYGROUPINFO_OFFSET))(this, a1);
		}

		::System::UInt32 GetEndlessMaxWaveByGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_GETENDLESSMAXWAVEBYGROUPID_OFFSET))(this, a1);
		}

		::System::Void SetAutoShowOnExitBattle(::System::UInt32 a1, ::RPG::GameCore::LevelDifficulty a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelDifficulty, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, a1, a2, a3);
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

		::System::Void _SyncFightActivityGroups(::System::Collections::Generic::IEnumerable_1<::Class_1_7E9AC8675DA072FB_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_7E9AC8675DA072FB_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCFIGHTACTIVITYGROUPS_OFFSET))(this, a1);
		}

		::System::Void _ChangeFightActivityGroups(::System::Collections::Generic::IEnumerable_1<::Class_1_7E9AC8675DA072FB_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_7E9AC8675DA072FB_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__CHANGEFIGHTACTIVITYGROUPS_OFFSET))(this, a1);
		}

		::System::Void _AddTakenDifficultyLevelReward(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ADDTAKENDIFFICULTYLEVELREWARD_OFFSET))(this, a1, a2);
		}

		::System::Void _SendInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SENDINITREQUEST_OFFSET))(this);
		}

		::System::Void _OnSubMissionDataReady(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONSUBMISSIONDATAREADY_OFFSET))(this, a1);
		}

		::System::Void _TryShowEndlessRewardTips(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__TRYSHOWENDLESSREWARDTIPS_OFFSET))(this, a1);
		}

		::System::Void _OnCmdGetFightActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDGETFIGHTACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdFightActivityDataChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDFIGHTACTIVITYDATACHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncItemRemainCount(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__SYNCITEMREMAINCOUNT_OFFSET))(this, a1);
		}

		::System::Void _OnCmdTakeFightActivityRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ONCMDTAKEFIGHTACTIVITYREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsEndlessRewardReceivedByWave(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYMODULE__ISENDLESSREWARDRECEIVEDBYWAVE_OFFSET))(this, a1);
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
