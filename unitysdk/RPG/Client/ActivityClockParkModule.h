#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_735612C94F558EAE_24;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ClockParkInstance; }
namespace RPG::Client { class ClockParkScriptData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKENDLESSSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFB7B0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKRAIDUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFC130)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTFINISH_OFFSET UNITYSDK_OFFSET(0x8EFB3F0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCKFALSEENDING_OFFSET UNITYSDK_OFFSET(0x8EFB160)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFAD50)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTFINISH_OFFSET UNITYSDK_OFFSET(0x8EFBDE0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CHECKSTREETEVENTUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFB870)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_CLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0x8EF9110)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EF9930)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETALLCLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x8EF9D00)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETCLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x8EF9A70)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETENDLESSSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x8EF9D40)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETHANUSHOOTINGSTAGEID_OFFSET UNITYSDK_OFFSET(0x8EF9D80)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETPLAYINGCLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x8EF9CB0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETREACHEDTRUEENDINGSCRIPTCOUNT_OFFSET UNITYSDK_OFFSET(0x8EF9B70)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GETTOTALENDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x8EF9C10)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_CLOCKPARKINSTANCE_OFFSET UNITYSDK_OFFSET(0x8EF8D50)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_CLOCKPARKUNLOCKTALENTS_OFFSET UNITYSDK_OFFSET(0x8EFC710)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_HISTORYHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x8EFC690)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_NEEDSHOWSCRIPTOPENING_OFFSET UNITYSDK_OFFSET(0x8EFC6B0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_PLAYINGSCRIPTID_OFFSET UNITYSDK_OFFSET(0x8EFC650)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x8EFC670)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_TALENTTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x8EFCC70)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_GET_UNLOCKTALENTCOUNT_OFFSET UNITYSDK_OFFSET(0x8EFCC20)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_HASAVAILABLELIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0x8EFA710)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_HASAVAILABLERESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x8EFA3E0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8EF9170)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x8EFAA10)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISCLOCKPARKTALENTUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EF9B10)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_ISLIGHTCONEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x8EFA890)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x8EF99A0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETCLOCKPARKBGM_OFFSET UNITYSDK_OFFSET(0x8EFA0E0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETENDLESSSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFB810)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETRAIDUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFC360)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTFINISH_OFFSET UNITYSDK_OFFSET(0x8EFB600)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCKFALSEENDING_OFFSET UNITYSDK_OFFSET(0x8EFB2B0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSCRIPTUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFAFB0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTFINISH_OFFSET UNITYSDK_OFFSET(0x8EFBFF0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SETSTREETEVENTUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFBB10)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_HISTORYHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x8EFC6A0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PLAYINGSCRIPTID_OFFSET UNITYSDK_OFFSET(0x8EFC660)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x8EFC680)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EF8580)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EFCCE0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__GETORCREATECLOCKPARKSCRIPTDATA_OFFSET UNITYSDK_OFFSET(0x8EF88F0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0x8EFC540)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__INITPREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8EF92E0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKFINISHSCRIPTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EF8EE0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8EF8740)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKGETONGOINGSCRIPTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8EF8CC0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKHANDLEWAITOPERATIONSCRSP_OFFSET UNITYSDK_OFFSET(0x8EF8E20)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKQUITSCRIPTSCRSP_OFFSET UNITYSDK_OFFSET(0x8EF8C70)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKSTARTSCRIPTSCRSP_OFFSET UNITYSDK_OFFSET(0x8EF8B60)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__ONCLOCKPARKUNLOCKTALENTSCRSP_OFFSET UNITYSDK_OFFSET(0x8EF8AD0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__SYNCSCRIPTINFOLIST_OFFSET UNITYSDK_OFFSET(0x8EF8840)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EFCEB0)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8EFCE20)
#define RPG_CLIENT_ACTIVITYCLOCKPARKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EFCDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityClockParkModule_TypeDefinitionIndex = 49863;

	class ActivityClockParkModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ClockParkScriptData* _EndlessClockParkScriptData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkScriptData*>* _ClockParkScriptDatas; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _PrepareMainMissionList; // 0x20
		::System::String* _CurrentScriptBGMState; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClockParkUnlockTalents; // 0x30
		::RPG::Client::ClockParkInstance* _ClockParkInstance; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _PrepareSubMissionList; // 0x40
		::System::UInt32 _Progress_k__BackingField; // 0x48
		::System::UInt32 _PlayingScriptID_k__BackingField; // 0x4C
		::System::Boolean UseSimplifiedDisplay; // 0x50
		::System::UInt32 LIMITED_REWARD_ID; // 0x54
		::System::UInt32 _HistoryHighestEndlessScore_k__BackingField; // 0x58

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

		::System::Void _SyncScriptInfoList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_735612C94F558EAE_24*>* scriptInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_735612C94F558EAE_24*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCLOCKPARKMODULE__SYNCSCRIPTINFOLIST_OFFSET))(this, scriptInfoList);
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
