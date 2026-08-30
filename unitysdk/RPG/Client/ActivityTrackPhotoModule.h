#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_21C7581DFE99F091_136;
class Class_1_D17272E82AE804C2_1151;
namespace RPG::Client { class ActivityTrackPhotoStageData; }
namespace RPG::Client { class ActivityTrackPhotoStageInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6A7030)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GETSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xC6A7130)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_CURSTAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC6A76B0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_CURSTAGETRANSNO_OFFSET UNITYSDK_OFFSET(0xC6A8D80)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC6A8DA0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_STAGEDATADICT_OFFSET UNITYSDK_OFFSET(0xC6A8D60)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_HASNEWSTAGEUNLOCK_OFFSET UNITYSDK_OFFSET(0xC6A7BC0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC6A6BB0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_LEAVESTAGE_OFFSET UNITYSDK_OFFSET(0xC6A73D0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_QUITSTAGE_OFFSET UNITYSDK_OFFSET(0xC6A7470)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_RECORDSTAGESEENUNLOCK_OFFSET UNITYSDK_OFFSET(0xC6A7840)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_RESTARTSTAGE_OFFSET UNITYSDK_OFFSET(0xC6A7730)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_CURSTAGETRANSNO_OFFSET UNITYSDK_OFFSET(0xC6A8D90)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC6A8DB0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_STAGEDATADICT_OFFSET UNITYSDK_OFFSET(0xC6A8D70)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_STARTSTAGE_OFFSET UNITYSDK_OFFSET(0xC6A71C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xC6A7DB0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_TRYSETAUTOSHOWSTAGEID_OFFSET UNITYSDK_OFFSET(0xC6A82C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6A60F0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC6A8DC0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xC6A8460)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__HASANYFORBIDAUTOSHOWSUBMISSIONDOING_OFFSET UNITYSDK_OFFSET(0xC6A80C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__INITCONST_OFFSET UNITYSDK_OFFSET(0xC6A6F60)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__INITSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xC6A6CA0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDGETTRACKPHOTOACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC6A6320)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDSETTLETRACKPHOTOSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xC6A6A30)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDSTARTTRACKPHOTOSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xC6A69C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SENDINITPACKET_OFFSET UNITYSDK_OFFSET(0xC6A8320)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGEDATACHANGE_OFFSET UNITYSDK_OFFSET(0xC6A8B40)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xC6A6390)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGESETTLERESULT_OFFSET UNITYSDK_OFFSET(0xC6A6AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTrackPhotoModule_TypeDefinitionIndex = 62087;

	class ActivityTrackPhotoModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _DependantSubMissionIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>* _StageDataDict_k__BackingField; // 0x18
		::System::UInt32 _CurStageTransNo_k__BackingField; // 0x20
		::System::UInt32 _RewardID_k__BackingField; // 0x24
		::System::Nullable_1<::System::UInt32> _AutoShowStageID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetTrackPhotoActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDGETTRACKPHOTOACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdStartTrackPhotoStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDSTARTTRACKPHOTOSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSettleTrackPhotoStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDSETTLETRACKPHOTOSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityTrackPhotoStageData* GetStageData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityTrackPhotoStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GETSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Void StartStage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_STARTSTAGE_OFFSET))(this, a1);
		}

		::System::Void LeaveStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_LEAVESTAGE_OFFSET))(this);
		}

		::System::Void QuitStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_QUITSTAGE_OFFSET))(this);
		}

		::System::Void RestartStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_RESTARTSTAGE_OFFSET))(this);
		}

		::System::Void RecordStageSeenUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_RECORDSTAGESEENUNLOCK_OFFSET))(this);
		}

		::System::Boolean HasNewStageUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_HASNEWSTAGEUNLOCK_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void TrySetAutoShowStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_TRYSETAUTOSHOWSTAGEID_OFFSET))(this, a1);
		}

		::System::Void _SendInitPacket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SENDINITPACKET_OFFSET))(this);
		}

		::System::Void _InitStageData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__INITSTAGEDATA_OFFSET))(this);
		}

		::System::Void _InitConst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__INITCONST_OFFSET))(this);
		}

		::System::Void _SyncStageData(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_1151*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_1151*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Void _SyncStageSettleResult(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_136*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_136*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGESETTLERESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SyncStageDataChange(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGEDATACHANGE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Boolean _HasAnyForbidAutoShowSubMissionDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__HASANYFORBIDAUTOSHOWSUBMISSIONDOING_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>* get_StageDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_STAGEDATADICT_OFFSET))(this);
		}

		::System::Void set_StageDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_STAGEDATADICT_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityTrackPhotoStageInstance* get_CurStageInstance()
		{
			return ((::RPG::Client::ActivityTrackPhotoStageInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_CURSTAGEINSTANCE_OFFSET))(this);
		}

		::System::UInt32 get_CurStageTransNo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_CURSTAGETRANSNO_OFFSET))(this);
		}

		::System::Void set_CurStageTransNo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_CURSTAGETRANSNO_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_REWARDID_OFFSET))(this, a1);
		}
	};
}
