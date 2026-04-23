#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_45BB92167AED63A0_27;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ClockParkInstance; }
namespace RPG::Client { class ClockParkScriptData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKENDLESSSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9ACD140)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKRAIDUNLOCK_OFFSET UNITYSDK_OFFSET(0x9ACDAC0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTFINISH_OFFSET UNITYSDK_OFFSET(0x9ACCD80)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCKFALSEENDING_OFFSET UNITYSDK_OFFSET(0x9ACCAF0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9ACC6E0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTFINISH_OFFSET UNITYSDK_OFFSET(0x9ACD770)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9ACD200)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0x9ACAA90)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9ACB2B0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETALLCLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x9ACB680)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETCLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x9ACB3F0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETENDLESSSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x9ACB6C0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETHANUSHOOTINGSTAGEID_OFFSET UNITYSDK_OFFSET(0x9ACB700)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETPLAYINGCLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x9ACB630)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETREACHEDTRUEENDINGSCRIPTCOUNT_OFFSET UNITYSDK_OFFSET(0x9ACB4F0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETTOTALENDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x9ACB590)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_CLOCKPARKINSTANCE_OFFSET UNITYSDK_OFFSET(0x9ACA6C0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_CLOCKPARKUNLOCKTALENTS_OFFSET UNITYSDK_OFFSET(0x9ACE0B0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_HISTORYHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x9ACE020)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_NEEDSHOWSCRIPTOPENING_OFFSET UNITYSDK_OFFSET(0x9ACE040)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_PLAYINGSCRIPTID_OFFSET UNITYSDK_OFFSET(0x9ACDFE0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9ACE000)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_TALENTTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9ACE110)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_UNLOCKTALENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9ACE0C0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_HASAVAILABLELIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0x9ACC090)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_HASAVAILABLERESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x9ACBD60)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9ACAAF0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9ACC390)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISCLOCKPARKTALENTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9ACB490)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISLIGHTCONEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9ACC210)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9ACB320)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETCLOCKPARKBGM_OFFSET UNITYSDK_OFFSET(0x9ACBA60)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETENDLESSSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9ACD1A0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETRAIDUNLOCK_OFFSET UNITYSDK_OFFSET(0x9ACDCF0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTFINISH_OFFSET UNITYSDK_OFFSET(0x9ACCF90)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCKFALSEENDING_OFFSET UNITYSDK_OFFSET(0x9ACCC40)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9ACC940)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTFINISH_OFFSET UNITYSDK_OFFSET(0x9ACD980)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9ACD4A0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_HISTORYHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x9ACE030)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PLAYINGSCRIPTID_OFFSET UNITYSDK_OFFSET(0x9ACDFF0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9ACE010)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9AC9F00)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9ACE180)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__GETORCREATECLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x9ACA270)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0x9ACDED0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__INITPREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9ACAC60)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKFINISHSCRIPTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9ACA860)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9ACA0C0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETONGOINGSCRIPTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9ACA630)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKHANDLEWAITOPERATIONSCRSP_OFFSET UNITYSDK_OFFSET(0x9ACA7A0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKQUITSCRIPTSCRSP_OFFSET UNITYSDK_OFFSET(0x9ACA5E0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKSTARTSCRIPTSCRSP_OFFSET UNITYSDK_OFFSET(0x9ACA4D0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKUNLOCKTALENTSCRSP_OFFSET UNITYSDK_OFFSET(0x9ACA440)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__SYNCSCRIPTINFOLIST_OFFSET UNITYSDK_OFFSET(0x9ACA1C0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9ACE350)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9ACE2C0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9ACE260)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityClockParkModule_TypeDefinitionIndex = 56685;

	class ActivityClockParkModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkScriptData*>* _ClockParkScriptDatas; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _PrepareSubMissionList; // 0x18
		::System::String* _CurrentScriptBGMState; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClockParkUnlockTalents; // 0x28
		::RPG::Client::ClockParkInstance* _ClockParkInstance; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _PrepareMainMissionList; // 0x38
		::RPG::Client::ClockParkScriptData* _EndlessClockParkScriptData; // 0x40
		::System::Boolean UseSimplifiedDisplay; // 0x48
		::System::UInt32 _PlayingScriptID_k__BackingField; // 0x4C
		::System::UInt32 _HistoryHighestEndlessScore_k__BackingField; // 0x50
		::System::UInt32 LIMITED_REWARD_ID; // 0x54
		::System::UInt32 _Progress_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnClockParkGetInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncScriptInfoList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_27*>* scriptInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_27*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__SYNCSCRIPTINFOLIST_OFFSET))(this, scriptInfoList);
		}

		::System::Void _OnClockParkUnlockTalentScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKUNLOCKTALENTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnClockParkStartScriptScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKSTARTSCRIPTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnClockParkQuitScriptScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKQUITSCRIPTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnClockParkGetOngoingScriptInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETONGOINGSCRIPTINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnClockParkHandleWaitOperationScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKHANDLEWAITOPERATIONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnClockParkFinishScriptScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKFINISHSCRIPTSCNOTIFY_OFFSET))(this, cmd, ntfObject);
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

		::RPG::Client::ClockParkScriptData* GetClockParkScriptData(::System::UInt32 id)
		{
			return ((::RPG::Client::ClockParkScriptData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETCLOCKPARKSCRIPTDATA_OFFSET))(this, id);
		}

		::System::Boolean IsClockParkTalentUnlock(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISCLOCKPARKTALENTUNLOCK_OFFSET))(this, id);
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

		::System::Void SetClockParkBGM(::System::Boolean isPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETCLOCKPARKBGM_OFFSET))(this, isPlay);
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

		::System::Boolean CheckScriptUnlock(::System::UInt32 scriptID, ::System::Boolean isSeen)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCK_OFFSET))(this, scriptID, isSeen);
		}

		::System::Void SetScriptUnlock(::System::UInt32 scriptID, ::System::Boolean isSeen)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCK_OFFSET))(this, scriptID, isSeen);
		}

		::System::Boolean CheckScriptUnlockFalseEnding(::System::UInt32 scriptID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCKFALSEENDING_OFFSET))(this, scriptID);
		}

		::System::Void SetScriptUnlockFalseEnding(::System::UInt32 scriptID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCKFALSEENDING_OFFSET))(this, scriptID);
		}

		::System::Boolean CheckScriptFinish(::System::UInt32 scriptID, ::System::Boolean isTrueEnding)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTFINISH_OFFSET))(this, scriptID, isTrueEnding);
		}

		::System::Void SetScriptFinish(::System::UInt32 scriptID, ::System::Boolean isTrueEnding)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTFINISH_OFFSET))(this, scriptID, isTrueEnding);
		}

		::System::Boolean CheckEndlessScriptUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKENDLESSSCRIPTUNLOCK_OFFSET))(this);
		}

		::System::Void SetEndlessScriptUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETENDLESSSCRIPTUNLOCK_OFFSET))(this);
		}

		::System::Boolean CheckStreetEventUnlock(::System::UInt32 streetEventID, ::System::Boolean isSeen)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTUNLOCK_OFFSET))(this, streetEventID, isSeen);
		}

		::System::Void SetStreetEventUnlock(::System::UInt32 streetEventID, ::System::Boolean isSeen)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTUNLOCK_OFFSET))(this, streetEventID, isSeen);
		}

		::System::Boolean CheckStreetEventFinish(::System::UInt32 streetEventID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTFINISH_OFFSET))(this, streetEventID);
		}

		::System::Void SetStreetEventFinish(::System::UInt32 streetEventID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTFINISH_OFFSET))(this, streetEventID);
		}

		::System::Boolean CheckRaidUnlock(::System::UInt32 raidID, ::System::Boolean isSeen)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKRAIDUNLOCK_OFFSET))(this, raidID, isSeen);
		}

		::System::Void SetRaidUnlock(::System::UInt32 raidID, ::System::Boolean isSeen)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETRAIDUNLOCK_OFFSET))(this, raidID, isSeen);
		}

		::RPG::Client::ClockParkScriptData* _GetOrCreateClockParkScriptData(::System::UInt32 id)
		{
			return ((::RPG::Client::ClockParkScriptData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__GETORCREATECLOCKPARKSCRIPTDATA_OFFSET))(this, id);
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

		::System::Void set_PlayingScriptID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PLAYINGSCRIPTID_OFFSET))(this, value);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_HistoryHighestEndlessScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_HISTORYHIGHESTENDLESSSCORE_OFFSET))(this);
		}

		::System::Void set_HistoryHighestEndlessScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_HISTORYHIGHESTENDLESSSCORE_OFFSET))(this, value);
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

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
