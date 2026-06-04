#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_52.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_8;
namespace Proto { class ItemList; }
namespace RPG::GameCore { class RaidConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xCADAC50)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_OFFSET UNITYSDK_OFFSET(0xCADA6D0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCADC4E0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_FORCEUPDATEPROGRESSANDSTATUS_OFFSET UNITYSDK_OFFSET(0xCADC8C0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB640)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB660)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ISTARGETFINISHEDBEFORE_OFFSET UNITYSDK_OFFSET(0xCADB680)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCADB510)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB620)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB600)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB5E0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_INITPROGRESSANDSTATUS_OFFSET UNITYSDK_OFFSET(0xCADB6A0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEINBATTLESTATUS_OFFSET UNITYSDK_OFFSET(0xCADE050)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEPROGRESSHINT_OFFSET UNITYSDK_OFFSET(0xCADC140)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGESTATUS_OFFSET UNITYSDK_OFFSET(0xCADBAA0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xCADDE00)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONCLIENTRAIDTARGETVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xCADCAB0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xCADD280)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONINBATTLEPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0xCADDF40)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONLEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0xCADDE50)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMAINMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xCADD680)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMISSIONSYNCED_OFFSET UNITYSDK_OFFSET(0xCADDA90)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xCADCED0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONSETCLIENTRAIDTARGETCOUNTSCRSP_OFFSET UNITYSDK_OFFSET(0xCADCE10)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB650)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB670)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ISTARGETFINISHEDBEFORE_OFFSET UNITYSDK_OFFSET(0xCADB690)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ROW_OFFSET UNITYSDK_OFFSET(0xCADB590)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB630)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB610)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETSTATUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCADB5F0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_TRYTRACKFIRSTSTARTMISSION_OFFSET UNITYSDK_OFFSET(0xCADDB40)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_UPDATESTATUSONGETRAIDINFORSP_OFFSET UNITYSDK_OFFSET(0xCADC6C0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITEREWARDLIST_OFFSET UNITYSDK_OFFSET(0xCADC560)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSHOTPROGRESS_OFFSET UNITYSDK_OFFSET(0xCADC650)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSTATUS_OFFSET UNITYSDK_OFFSET(0xCADC5B0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCADACB0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xCADA750)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeInstance_TypeDefinitionIndex = 62430;

	class TreasureChallengeInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _IsTargetFinishedBefore_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TargetProgressSnapShot_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _InBattleTargetProgressSnapShot_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* _InBattleTargetStatusSnapShot_k__BackingField; // 0x28
		::RPG::GameCore::RaidConfigRow* _Row; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* PreBattleAchievedTarget; // 0x38
		::Proto::ItemList* CachedRewardList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* _TargetStatusSnapShot_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>* _TargetProgressHintStepSnapShot_k__BackingField; // 0x50
		::System::UInt32 CurrentRaidLevel; // 0x58
		::Enum_3_DB663931210BBC27_52 RaidStatus; // 0x5C
		::System::UInt64 FinishTime; // 0x60
		::System::Boolean TeamHintEnqueued; // 0x68
		::System::Boolean HasUnshownRewards; // 0x69
		::System::UInt32 CurrentRaidID; // 0x6C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Class_1_BB4B99DE4C2501EC_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE__CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::TreasureChallengeInstance* Create(::System::UInt32 a1, ::System::UInt32 a2, ::Enum_3_DB663931210BBC27_52 a3)
		{
			return ((::RPG::Client::TreasureChallengeInstance*(*)(::System::UInt32, ::System::UInt32, ::Enum_3_DB663931210BBC27_52))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TreasureChallengeInstance* Create_1(::Class_1_BB4B99DE4C2501EC_8* a1)
		{
			return ((::RPG::Client::TreasureChallengeInstance*(*)(::Class_1_BB4B99DE4C2501EC_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_CREATE_1_OFFSET))(a1);
		}

		::RPG::GameCore::RaidConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RaidConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* get_TargetStatusSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETSTATUSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TargetStatusSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETSTATUSSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_TargetProgressSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TargetProgressSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>* get_TargetProgressHintStepSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TargetProgressHintStepSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_TARGETPROGRESSHINTSTEPSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_InBattleTargetProgressSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_InBattleTargetProgressSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETPROGRESSSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* get_InBattleTargetStatusSnapShot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_InBattleTargetStatusSnapShot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_INBATTLETARGETSTATUSSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* get_IsTargetFinishedBefore()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_GET_ISTARGETFINISHEDBEFORE_OFFSET))(this);
		}

		::System::Void set_IsTargetFinishedBefore(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_SET_ISTARGETFINISHEDBEFORE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void WriteRewardList(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITEREWARDLIST_OFFSET))(this, a1);
		}

		::System::Void WriteSnapStatus(::System::UInt32 a1, ::RPG::Client::TreasureChallengeTargetStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void WriteSnapShotProgress(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_WRITESNAPSHOTPROGRESS_OFFSET))(this, a1, a2);
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

		::System::Void OnClientRaidTargetValueChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONCLIENTRAIDTARGETVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnSetClientRaidTargetCountScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONSETCLIENTRAIDTARGETCOUNTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnRaidInfoNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONRAIDINFONOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnterBattle(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONENTERBATTLE_OFFSET))(this, a1);
		}

		::System::Void OnMainMissionFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMAINMISSIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void OnMissionSynced(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONMISSIONSYNCED_OFFSET))(this, a1);
		}

		::System::Void TryTrackFirstStartMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_TRYTRACKFIRSTSTARTMISSION_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void OnLeaveBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONLEAVEBATTLE_OFFSET))(this);
		}

		::System::Void OnInBattleProgressChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_ONINBATTLEPROGRESSCHANGED_OFFSET))(this, a1);
		}

		::System::Void JudgeStatus(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGESTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void JudgeProgressHint(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEPROGRESSHINT_OFFSET))(this, a1, a2);
		}

		::System::Void JudgeInBattleStatus(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE_JUDGEINBATTLESTATUS_OFFSET))(this, a1);
		}
	};
}
