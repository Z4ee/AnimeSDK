#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_45BB92167AED63A0_33;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ClockParkInstance; }
namespace RPG::Client { class ClockParkScriptData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKENDLESSSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4DBEB0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKRAIDUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4DC740)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTFINISH_OFFSET UNITYSDK_OFFSET(0xC4DBAF0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCKFALSEENDING_OFFSET UNITYSDK_OFFSET(0xC4DB860)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4DB450)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTFINISH_OFFSET UNITYSDK_OFFSET(0xC4DC440)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4DBF70)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0xC4D9800)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4D9F40)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETALLCLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0xC4DA370)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETCLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0xC4DA0A0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETENDLESSSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0xC4DA3B0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETHANUSHOOTINGSTAGEID_OFFSET UNITYSDK_OFFSET(0xC4DA3F0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETPLAYINGCLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0xC4DA320)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETREACHEDTRUEENDINGSCRIPTCOUNT_OFFSET UNITYSDK_OFFSET(0xC4DA1C0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETTOTALENDINGCOUNT_OFFSET UNITYSDK_OFFSET(0xC4DA270)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_CLOCKPARKINSTANCE_OFFSET UNITYSDK_OFFSET(0xC4D9440)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_CLOCKPARKUNLOCKTALENTS_OFFSET UNITYSDK_OFFSET(0xC4DCD20)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_HISTORYHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0xC4DCCA0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_NEEDSHOWSCRIPTOPENING_OFFSET UNITYSDK_OFFSET(0xC4DCCC0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_PLAYINGSCRIPTID_OFFSET UNITYSDK_OFFSET(0xC4DCC60)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC4DCC80)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_TALENTTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xC4DCDB0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_UNLOCKTALENTCOUNT_OFFSET UNITYSDK_OFFSET(0xC4DCD60)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_HASAVAILABLELIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0xC4DAD70)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_HASAVAILABLERESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xC4DAA60)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC4D9860)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC4DB110)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISCLOCKPARKTALENTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4DA160)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISLIGHTCONEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC4DAF40)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC4D9FD0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETCLOCKPARKBGM_OFFSET UNITYSDK_OFFSET(0xC4DA760)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETENDLESSSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4DBF10)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETRAIDUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4DC970)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTFINISH_OFFSET UNITYSDK_OFFSET(0xC4DBD00)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCKFALSEENDING_OFFSET UNITYSDK_OFFSET(0xC4DB9B0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4DB6B0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTFINISH_OFFSET UNITYSDK_OFFSET(0xC4DC600)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4DC1C0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_HISTORYHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0xC4DCCB0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PLAYINGSCRIPTID_OFFSET UNITYSDK_OFFSET(0xC4DCC70)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC4DCC90)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC4D8910)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC4DCE20)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__GETORCREATECLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0xC4D8F90)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0xC4DCB50)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__INITPREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC4D9970)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKFINISHSCRIPTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC4D95D0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC4D8D90)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETONGOINGSCRIPTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC4D93B0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKHANDLEWAITOPERATIONSCRSP_OFFSET UNITYSDK_OFFSET(0xC4D9510)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKQUITSCRIPTSCRSP_OFFSET UNITYSDK_OFFSET(0xC4D9360)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKSTARTSCRIPTSCRSP_OFFSET UNITYSDK_OFFSET(0xC4D9250)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKUNLOCKTALENTSCRSP_OFFSET UNITYSDK_OFFSET(0xC4D91C0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__SYNCSCRIPTINFOLIST_OFFSET UNITYSDK_OFFSET(0xC4D8E90)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityClockParkModule_TypeDefinitionIndex = 61562;

	class ActivityClockParkModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PrepareMainMissionList; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClockParkUnlockTalents; // 0x18
		::System::String* _CurrentScriptBGMState; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkScriptData*>* _ClockParkScriptDatas; // 0x28
		::RPG::Client::ClockParkScriptData* _EndlessClockParkScriptData; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _PrepareSubMissionList; // 0x38
		::RPG::Client::ClockParkInstance* _ClockParkInstance; // 0x40
		::System::UInt32 _HistoryHighestEndlessScore_k__BackingField; // 0x48
		::System::UInt32 LIMITED_REWARD_ID; // 0x4C
		::System::Boolean UseSimplifiedDisplay; // 0x50
		::System::UInt32 _PlayingScriptID_k__BackingField; // 0x54
		::System::UInt32 _Progress_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnClockParkGetInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncScriptInfoList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_33*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_33*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__SYNCSCRIPTINFOLIST_OFFSET))(this, a1);
		}

		::System::Void _OnClockParkUnlockTalentScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKUNLOCKTALENTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClockParkStartScriptScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKSTARTSCRIPTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClockParkQuitScriptScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKQUITSCRIPTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClockParkGetOngoingScriptInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETONGOINGSCRIPTINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClockParkHandleWaitOperationScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKHANDLEWAITOPERATIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClockParkFinishScriptScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKFINISHSCRIPTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void RequestRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::ClockParkScriptData* GetClockParkScriptData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ClockParkScriptData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETCLOCKPARKSCRIPTDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsClockParkTalentUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISCLOCKPARKTALENTUNLOCK_OFFSET))(this, a1);
		}

		::System::Int32 GetReachedTrueEndingScriptCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETREACHEDTRUEENDINGSCRIPTCOUNT_OFFSET))(this);
		}

		::System::Int32 GetTotalEndingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETTOTALENDINGCOUNT_OFFSET))(this);
		}

		::RPG::Client::ClockParkScriptData* GetPlayingClockParkScriptData()
		{
			return ((::RPG::Client::ClockParkScriptData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETPLAYINGCLOCKPARKSCRIPTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkScriptData*>* GetAllClockParkScriptData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkScriptData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETALLCLOCKPARKSCRIPTDATA_OFFSET))(this);
		}

		::RPG::Client::ClockParkScriptData* GetEndlessScriptData()
		{
			return ((::RPG::Client::ClockParkScriptData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETENDLESSSCRIPTDATA_OFFSET))(this);
		}

		::System::Void ClearInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CLEARINSTANCE_OFFSET))(this);
		}

		::System::Int32 GetHanuShootingStageID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETHANUSHOOTINGSTAGEID_OFFSET))(this);
		}

		::System::Void SetClockParkBGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETCLOCKPARKBGM_OFFSET))(this, a1);
		}

		::System::Boolean HasAvailableResidentReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_HASAVAILABLERESIDENTREWARD_OFFSET))(this);
		}

		::System::Boolean HasAvailableLightConeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_HASAVAILABLELIGHTCONEREWARD_OFFSET))(this);
		}

		::System::Boolean IsLightConeRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISLIGHTCONEREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean IsAllRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISALLREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean CheckScriptUnlock(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void SetScriptUnlock(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckScriptUnlockFalseEnding(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCKFALSEENDING_OFFSET))(this, a1);
		}

		::System::Void SetScriptUnlockFalseEnding(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCKFALSEENDING_OFFSET))(this, a1);
		}

		::System::Boolean CheckScriptFinish(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void SetScriptFinish(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTFINISH_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckEndlessScriptUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKENDLESSSCRIPTUNLOCK_OFFSET))(this);
		}

		::System::Void SetEndlessScriptUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETENDLESSSCRIPTUNLOCK_OFFSET))(this);
		}

		::System::Boolean CheckStreetEventUnlock(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTUNLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void SetStreetEventUnlock(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTUNLOCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckStreetEventFinish(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTFINISH_OFFSET))(this, a1);
		}

		::System::Void SetStreetEventFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTFINISH_OFFSET))(this, a1);
		}

		::System::Boolean CheckRaidUnlock(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKRAIDUNLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void SetRaidUnlock(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETRAIDUNLOCK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ClockParkScriptData* _GetOrCreateClockParkScriptData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ClockParkScriptData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__GETORCREATECLOCKPARKSCRIPTDATA_OFFSET))(this, a1);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__INITDATA_OFFSET))(this);
		}

		::System::Void _InitPrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__INITPREPAREDATA_OFFSET))(this);
		}

		::System::UInt32 get_PlayingScriptID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_PLAYINGSCRIPTID_OFFSET))(this);
		}

		::System::Void set_PlayingScriptID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PLAYINGSCRIPTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HistoryHighestEndlessScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_HISTORYHIGHESTENDLESSSCORE_OFFSET))(this);
		}

		::System::Void set_HistoryHighestEndlessScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_HISTORYHIGHESTENDLESSSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedShowScriptOpening()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_NEEDSHOWSCRIPTOPENING_OFFSET))(this);
		}

		::RPG::Client::ClockParkInstance* get_ClockParkInstance()
		{
			return ((::RPG::Client::ClockParkInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_CLOCKPARKINSTANCE_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_ClockParkUnlockTalents()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_CLOCKPARKUNLOCKTALENTS_OFFSET))(this);
		}

		::System::Int32 get_UnlockTalentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_UNLOCKTALENTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TalentTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_TALENTTOTALCOUNT_OFFSET))(this);
		}
	};
}
