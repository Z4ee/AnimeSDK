#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_51.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_11;
namespace Proto { class ItemList; }
namespace RPG::GameCore { class RaidConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB37E8E0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_OFFSET UNITYSDK_OFFSET(0xB37E3D0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB380070)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_FORCEUPDATEPROGRESSANDSTATUS_OFFSET UNITYSDK_OFFSET(0xB3804B0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F1F0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F210)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ISTARGETFINISHEDBEFORE_OFFSET UNITYSDK_OFFSET(0xB37F230)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB37F0C0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F1D0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F1B0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F190)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_INITPROGRESSANDSTATUS_OFFSET UNITYSDK_OFFSET(0xB37F250)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEINBATTLESTATUS_OFFSET UNITYSDK_OFFSET(0xB381AF0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEPROGRESSHINT_OFFSET UNITYSDK_OFFSET(0xB37FD30)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGESTATUS_OFFSET UNITYSDK_OFFSET(0xB37F7A0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB381890)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONCLIENTRAIDTARGETVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xB3806E0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xB380D80)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONINBATTLEPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0xB3819F0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONLEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0xB3818E0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMAINMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xB381120)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMISSIONSYNCED_OFFSET UNITYSDK_OFFSET(0xB381550)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xB380A00)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONSETCLIENTRAIDTARGETCOUNTSCRSP_OFFSET UNITYSDK_OFFSET(0xB380940)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F200)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F220)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ISTARGETFINISHEDBEFORE_OFFSET UNITYSDK_OFFSET(0xB37F240)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB37F140)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F1E0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F1C0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB37F1A0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_TRYTRACKFIRSTSTARTMISSION_OFFSET UNITYSDK_OFFSET(0xB381600)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_UPDATESTATUSONGETRAIDINFORSP_OFFSET UNITYSDK_OFFSET(0xB380250)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITEREWARDLIST_OFFSET UNITYSDK_OFFSET(0xB3800F0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSHOTPROGRESS_OFFSET UNITYSDK_OFFSET(0xB3801E0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSTATUS_OFFSET UNITYSDK_OFFSET(0xB380140)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB37E940)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB37E450)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeInstance_TypeDefinitionIndex = 61497;

	class TreasureChallengeInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _IsTargetFinishedBefore_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _InBattleTargetProgressSnapShot_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TargetProgressSnapShot_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* PreBattleAchievedTarget; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* _InBattleTargetStatusSnapShot_k__BackingField; // 0x30
		::RPG::GameCore::RaidConfigRow* _Row; // 0x38
		::Proto::ItemList* CachedRewardList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>* _TargetProgressHintStepSnapShot_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* _TargetStatusSnapShot_k__BackingField; // 0x50
		::System::UInt64 FinishTime; // 0x58
		::System::Boolean HasUnshownRewards; // 0x60
		::System::Boolean TeamHintEnqueued; // 0x61
		::System::UInt32 CurrentRaidLevel; // 0x64
		::System::UInt32 CurrentRaidID; // 0x68
		::Enum_3_DB663931210BBC27_51 RaidStatus; // 0x6C

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_OFFSET))(this, id, level);
		}

		::System::Void _ctor_1(::Class_1_BB4B99DE4C2501EC_11* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_1_OFFSET))(this, ntf);
		}

		static ::RPG::Client::TreasureChallengeInstance* Create(::System::UInt32 raidID, ::System::UInt32 level, ::Enum_3_DB663931210BBC27_51 status)
		{
			return ((::RPG::Client::TreasureChallengeInstance*(*)(::System::UInt32, ::System::UInt32, ::Enum_3_DB663931210BBC27_51))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_OFFSET))(raidID, level, status);
		}

		static ::RPG::Client::TreasureChallengeInstance* Create_1(::Class_1_BB4B99DE4C2501EC_11* ntf)
		{
			return ((::RPG::Client::TreasureChallengeInstance*(*)(::Class_1_BB4B99DE4C2501EC_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_1_OFFSET))(ntf);
		}

		::RPG::GameCore::RaidConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RaidConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* get_TargetStatusSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETSTATUSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TargetStatusSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETSTATUSSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_TargetProgressSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TargetProgressSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>* get_TargetProgressHintStepSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TargetProgressHintStepSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_InBattleTargetProgressSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_InBattleTargetProgressSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* get_InBattleTargetStatusSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_InBattleTargetStatusSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* get_IsTargetFinishedBefore()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ISTARGETFINISHEDBEFORE_OFFSET))(this);
		}

		::System::Void set_IsTargetFinishedBefore(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ISTARGETFINISHEDBEFORE_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void WriteRewardList(::Proto::ItemList* rewards)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITEREWARDLIST_OFFSET))(this, rewards);
		}

		::System::Void WriteSnapStatus(::System::UInt32 targetID, ::RPG::Client::TreasureChallengeTargetStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSTATUS_OFFSET))(this, targetID, status);
		}

		::System::Void WriteSnapShotProgress(::System::UInt32 targetID, ::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSHOTPROGRESS_OFFSET))(this, targetID, progress);
		}

		::System::Void UpdateStatusOnGetRaidInfoRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_UPDATESTATUSONGETRAIDINFORSP_OFFSET))(this);
		}

		::System::Void ForceUpdateProgressAndStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_FORCEUPDATEPROGRESSANDSTATUS_OFFSET))(this);
		}

		::System::Void InitProgressAndStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_INITPROGRESSANDSTATUS_OFFSET))(this);
		}

		::System::Void OnClientRaidTargetValueChanged(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONCLIENTRAIDTARGETVALUECHANGED_OFFSET))(this, obj);
		}

		::System::Void OnSetClientRaidTargetCountScRsp(::System::UInt16 cmdID, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONSETCLIENTRAIDTARGETCOUNTSCRSP_OFFSET))(this, cmdID, obj);
		}

		::System::Void OnRaidInfoNotify(::System::UInt16 cmdID, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONRAIDINFONOTIFY_OFFSET))(this, cmdID, obj);
		}

		::System::Void OnEnterBattle(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONENTERBATTLE_OFFSET))(this, obj);
		}

		::System::Void OnMainMissionFinished(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMAINMISSIONFINISHED_OFFSET))(this, obj);
		}

		::System::Void OnMissionSynced(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMISSIONSYNCED_OFFSET))(this, obj);
		}

		::System::Void TryTrackFirstStartMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_TRYTRACKFIRSTSTARTMISSION_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseEntered(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONADVENTUREPHASEENTERED_OFFSET))(this, o);
		}

		::System::Void OnLeaveBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONLEAVEBATTLE_OFFSET))(this);
		}

		::System::Void OnInBattleProgressChanged(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONINBATTLEPROGRESSCHANGED_OFFSET))(this, obj);
		}

		::System::Void JudgeStatus(::System::UInt32 targetID, ::System::Boolean silent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGESTATUS_OFFSET))(this, targetID, silent);
		}

		::System::Void JudgeProgressHint(::System::UInt32 targetID, ::System::Boolean silent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEPROGRESSHINT_OFFSET))(this, targetID, silent);
		}

		::System::Void JudgeInBattleStatus(::System::UInt32 targetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEINBATTLESTATUS_OFFSET))(this, targetID);
		}
	};
}
