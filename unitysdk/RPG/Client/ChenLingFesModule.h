#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_E7C28CD045687EE8;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ChenLingFesStageData; }
namespace RPG::Client { class ChenLingFesStageInstance; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGFESMODULE_CONSUMEDEFAULTISENDLESS_OFFSET UNITYSDK_OFFSET(0xB638940)
#define RPG_CLIENT_CHENLINGFESMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB637280)
#define RPG_CLIENT_CHENLINGFESMODULE_ENTERSTAGE_OFFSET UNITYSDK_OFFSET(0xB637950)
#define RPG_CLIENT_CHENLINGFESMODULE_GETRELATEDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xB638800)
#define RPG_CLIENT_CHENLINGFESMODULE_GETSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xB635A30)
#define RPG_CLIENT_CHENLINGFESMODULE_GETTIMELIMITREWARDID_OFFSET UNITYSDK_OFFSET(0xB6387A0)
#define RPG_CLIENT_CHENLINGFESMODULE_GET_DEFAULTISENDLESS_OFFSET UNITYSDK_OFFSET(0xB638920)
#define RPG_CLIENT_CHENLINGFESMODULE_GET_LASTSTAGESETTLERESULT_OFFSET UNITYSDK_OFFSET(0xB638900)
#define RPG_CLIENT_CHENLINGFESMODULE_GET_STAGEDATADICT_OFFSET UNITYSDK_OFFSET(0xB6388C0)
#define RPG_CLIENT_CHENLINGFESMODULE_GET_STAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB6388E0)
#define RPG_CLIENT_CHENLINGFESMODULE_HASNEWSTAGEUNLOCK_OFFSET UNITYSDK_OFFSET(0xB637820)
#define RPG_CLIENT_CHENLINGFESMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB636BE0)
#define RPG_CLIENT_CHENLINGFESMODULE_LEAVESTAGE_OFFSET UNITYSDK_OFFSET(0xB637CE0)
#define RPG_CLIENT_CHENLINGFESMODULE_QUITSTAGE_OFFSET UNITYSDK_OFFSET(0xB637BF0)
#define RPG_CLIENT_CHENLINGFESMODULE_RECORDDEFAULTISENDLESS_OFFSET UNITYSDK_OFFSET(0xB636770)
#define RPG_CLIENT_CHENLINGFESMODULE_RECORDSTAGESEENUNLOCK_1_OFFSET UNITYSDK_OFFSET(0xB637750)
#define RPG_CLIENT_CHENLINGFESMODULE_RECORDSTAGESEENUNLOCK_OFFSET UNITYSDK_OFFSET(0xB637350)
#define RPG_CLIENT_CHENLINGFESMODULE_RESUMESTAGE_OFFSET UNITYSDK_OFFSET(0xB637DD0)
#define RPG_CLIENT_CHENLINGFESMODULE_SET_DEFAULTISENDLESS_OFFSET UNITYSDK_OFFSET(0xB638930)
#define RPG_CLIENT_CHENLINGFESMODULE_SET_LASTSTAGESETTLERESULT_OFFSET UNITYSDK_OFFSET(0xB638910)
#define RPG_CLIENT_CHENLINGFESMODULE_SET_STAGEDATADICT_OFFSET UNITYSDK_OFFSET(0xB6388D0)
#define RPG_CLIENT_CHENLINGFESMODULE_SET_STAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB6388F0)
#define RPG_CLIENT_CHENLINGFESMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB634E40)
#define RPG_CLIENT_CHENLINGFESMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB638A20)
#define RPG_CLIENT_CHENLINGFESMODULE__CLEARSTAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB6359E0)
#define RPG_CLIENT_CHENLINGFESMODULE__COLLECTUNLOCKSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xB638490)
#define RPG_CLIENT_CHENLINGFESMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB638990)
#define RPG_CLIENT_CHENLINGFESMODULE__DOSENDINITPACKET_OFFSET UNITYSDK_OFFSET(0xB638320)
#define RPG_CLIENT_CHENLINGFESMODULE__ENSURESTAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB6357D0)
#define RPG_CLIENT_CHENLINGFESMODULE__INITSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xB636D70)
#define RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESBUSINESSDAYENDSCRSP_OFFSET UNITYSDK_OFFSET(0xB6367C0)
#define RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESLEVELENDSCRSP_OFFSET UNITYSDK_OFFSET(0xB636390)
#define RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESLEVELLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0xB635F70)
#define RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESLEVELRESUMESCRSP_OFFSET UNITYSDK_OFFSET(0xB6360F0)
#define RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESLEVELSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0xB635BF0)
#define RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESRAIDKICKEDNOTIFY_OFFSET UNITYSDK_OFFSET(0xB636A20)
#define RPG_CLIENT_CHENLINGFESMODULE__ONGETCHENLINGFESDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB6352E0)
#define RPG_CLIENT_CHENLINGFESMODULE__SENDINITPACKET_OFFSET UNITYSDK_OFFSET(0xB637FC0)
#define RPG_CLIENT_CHENLINGFESMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB638B30)
#define RPG_CLIENT_CHENLINGFESMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB638AB0)
#define RPG_CLIENT_CHENLINGFESMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB638A50)
#define RPG_CLIENT_CHENLINGFESMODULE___SENDINITPACKET_B__19_0_OFFSET UNITYSDK_OFFSET(0xB638A40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingFesModule_TypeDefinitionIndex = 57463;

	class ChenLingFesModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_ACTIVITY_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesModule_TypeDefinitionIndex)->GetStaticField(0x8170);
		}
		static ::System::UInt32* StaticGet_ACTIVITY_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesModule_TypeDefinitionIndex)->GetStaticField(0x8174);
		}
		::Class_1_E7C28CD045687EE8* _LastStageSettleResult_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>* _StageDataDict_k__BackingField; // 0x18
		::RPG::Client::ChenLingFesStageInstance* _StageInstance_k__BackingField; // 0x20
		::RPG::Client::Promises::Promise* _ResumePromise; // 0x28
		::System::Nullable_1<::System::Boolean> _DefaultIsEndless_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__CCTOR_OFFSET))();
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetChenLingFesDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__ONGETCHENLINGFESDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChenLingFesLevelStartScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESLEVELSTARTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChenLingFesLevelLeaveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESLEVELLEAVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChenLingFesLevelResumeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESLEVELRESUMESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChenLingFesLevelEndScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESLEVELENDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChenLingFesBusinessDayEndScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESBUSINESSDAYENDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChenLingFesRaidKickedNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__ONCHENLINGFESRAIDKICKEDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFesStageData* GetStageData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingFesStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_GETSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Void RecordStageSeenUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_RECORDSTAGESEENUNLOCK_OFFSET))(this);
		}

		::System::Void RecordStageSeenUnlock_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_RECORDSTAGESEENUNLOCK_1_OFFSET))(this, a1);
		}

		::System::Boolean HasNewStageUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_HASNEWSTAGEUNLOCK_OFFSET))(this);
		}

		::System::Void EnterStage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_ENTERSTAGE_OFFSET))(this, a1);
		}

		::System::Void QuitStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_QUITSTAGE_OFFSET))(this);
		}

		::System::Void LeaveStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_LEAVESTAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ResumeStage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_RESUMESTAGE_OFFSET))(this);
		}

		::System::Void _SendInitPacket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__SENDINITPACKET_OFFSET))(this);
		}

		::System::Void _DoSendInitPacket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__DOSENDINITPACKET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _CollectUnlockSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__COLLECTUNLOCKSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Void _InitStageData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__INITSTAGEDATA_OFFSET))(this);
		}

		::RPG::Client::ChenLingFesStageInstance* _EnsureStageInstance(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingFesStageInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__ENSURESTAGEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _ClearStageInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE__CLEARSTAGEINSTANCE_OFFSET))(this);
		}

		::System::UInt32 GetTimeLimitRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_GETTIMELIMITREWARDID_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetRelatedActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_GETRELATEDACTIVITYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>* get_StageDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_GET_STAGEDATADICT_OFFSET))(this);
		}

		::System::Void set_StageDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_SET_STAGEDATADICT_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFesStageInstance* get_StageInstance()
		{
			return ((::RPG::Client::ChenLingFesStageInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_GET_STAGEINSTANCE_OFFSET))(this);
		}

		::System::Void set_StageInstance(::RPG::Client::ChenLingFesStageInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesStageInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_SET_STAGEINSTANCE_OFFSET))(this, a1);
		}

		::Class_1_E7C28CD045687EE8* get_LastStageSettleResult()
		{
			return ((::Class_1_E7C28CD045687EE8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_GET_LASTSTAGESETTLERESULT_OFFSET))(this);
		}

		::System::Void set_LastStageSettleResult(::Class_1_E7C28CD045687EE8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C28CD045687EE8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_SET_LASTSTAGESETTLERESULT_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> get_DefaultIsEndless()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_GET_DEFAULTISENDLESS_OFFSET))(this);
		}

		::System::Void set_DefaultIsEndless(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_SET_DEFAULTISENDLESS_OFFSET))(this, a1);
		}

		::System::Void RecordDefaultIsEndless(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_RECORDDEFAULTISENDLESS_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> ConsumeDefaultIsEndless()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE_CONSUMEDEFAULTISENDLESS_OFFSET))(this);
		}

		::System::Void __SendInitPacket_b__19_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE___SENDINITPACKET_B__19_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
