#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class CommonActivityLightConeRewardData; }
namespace RPG::Client { class MusicRhythmGroup; }
namespace RPG::Client { class MusicRhythmLevel; }
namespace RPG::Client { class MusicRhythmPhase; }
namespace RPG::Client { class MusicRhythmSong; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace RPG::GameCore { class MusicRhythmPresetSongRow; }
namespace RPG::GameCore { class MusicRhythmTrackRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_CANEDITSONG_OFFSET UNITYSDK_OFFSET(0x8F86FD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F85F50)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_FIREMUSICRHYTHMEVENT_OFFSET UNITYSDK_OFFSET(0x8F87180)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLFINISHMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8F87680)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLPHASES_OFFSET UNITYSDK_OFFSET(0x8F85F90)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLSONGS_OFFSET UNITYSDK_OFFSET(0x8F86870)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLTAKEMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8F874D0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLUNLOCKSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8F871F0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLUNLOCKTRACKNUM_OFFSET UNITYSDK_OFFSET(0x8F86E70)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETGROUPFROMMI_OFFSET UNITYSDK_OFFSET(0x8F86610)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETGROUP_OFFSET UNITYSDK_OFFSET(0x8F86530)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETLEFTROUND_OFFSET UNITYSDK_OFFSET(0x8F879B0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETLEVEL_OFFSET UNITYSDK_OFFSET(0x8F86120)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETMINLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0x8F87D40)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETPHASE_OFFSET UNITYSDK_OFFSET(0x8F86470)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETPRESETROW_OFFSET UNITYSDK_OFFSET(0x8F86C60)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETSONG_OFFSET UNITYSDK_OFFSET(0x8F867B0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETTRACKROW_OFFSET UNITYSDK_OFFSET(0x8F86CD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETTRACK_OFFSET UNITYSDK_OFFSET(0x8F866F0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTLEVELID_OFFSET UNITYSDK_OFFSET(0x8F88AA0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x8F87B40)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTSONGID_OFFSET UNITYSDK_OFFSET(0x8F88C80)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTSONG_OFFSET UNITYSDK_OFFSET(0x8F88B90)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_HASTRYMAXDIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x8F88CB0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x8F88AB0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISMAXDIFFICULTYLEVELUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F88C90)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x8F88D10)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_LIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0x8F88B80)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MAXSONGBARNUM_OFFSET UNITYSDK_OFFSET(0x8F88CF0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MAXSONGGRIDNUM_OFFSET UNITYSDK_OFFSET(0x8F88CD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MUSICRHYTHMPHASES_OFFSET UNITYSDK_OFFSET(0x8F88A90)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_QUICK_ENTRANCE_UNLOCK_SUBMISSION_ID_OFFSET UNITYSDK_OFFSET(0x8F88480)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_SHOWHIDENSONGMISSIONID_OFFSET UNITYSDK_OFFSET(0x8F87FD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_SHOWNALLFINISHANIM_OFFSET UNITYSDK_OFFSET(0x8F88D30)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_STAGECOMPOSITIONFSVKEY_OFFSET UNITYSDK_OFFSET(0x8F88AD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_UNLOCKSONGMISSIONID_OFFSET UNITYSDK_OFFSET(0x8F870D0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_HIDEDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0x8F85990)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8F85C80)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x8F85B40)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISFINISHALLNORMALLEVEL_OFFSET UNITYSDK_OFFSET(0x8F857D0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISNEWSONG_OFFSET UNITYSDK_OFFSET(0x8F88170)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISPHASEFINISH_OFFSET UNITYSDK_OFFSET(0x8F86D40)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISQUICKENTRANCEUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F883C0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSHOWLEVELREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x8F85650)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSHOWLIGHTCONEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x8F85780)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSHOWQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x8F856F0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSONGHIDE_OFFSET UNITYSDK_OFFSET(0x8F86B30)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSONGUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F87E90)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ONLEVELSTARNUMCHANGED_OFFSET UNITYSDK_OFFSET(0x8F861E0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_REPORTMUSICCOMPOSITIONDATA_OFFSET UNITYSDK_OFFSET(0x8F880C0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SENDMUSICRHYTHMFINISHLEVELCSREQ_OFFSET UNITYSDK_OFFSET(0x8F84140)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SENDMUSICRHYTHMSTARTLEVELCSREQ_OFFSET UNITYSDK_OFFSET(0x8F84060)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SETNEWSONGHASSEEN_OFFSET UNITYSDK_OFFSET(0x8F88290)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_HASTRYMAXDIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x8F88CC0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_ISMAXDIFFICULTYLEVELUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F88CA0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_ISMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x8F88D20)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_MAXSONGBARNUM_OFFSET UNITYSDK_OFFSET(0x8F88D00)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_MAXSONGGRIDNUM_OFFSET UNITYSDK_OFFSET(0x8F88CE0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_SHOWNALLFINISHANIM_OFFSET UNITYSDK_OFFSET(0x8F88D90)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UNLOCKTRACK_OFFSET UNITYSDK_OFFSET(0x8F84C70)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UPDATELEVELFULLCOMBO_OFFSET UNITYSDK_OFFSET(0x8F84F10)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UPDATELEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0x8F84DF0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F83EA0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F88E00)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__GETDEPENDANTMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8F88910)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8F88A20)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0x8F88560)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__INITMUSICRHYTHMDATA_OFFSET UNITYSDK_OFFSET(0x8F85D80)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8F84240)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMFINISHLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x8F85100)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMMAXDIFFICULTYLEVELSUNLOCKNOTIFY_OFFSET UNITYSDK_OFFSET(0x8F85450)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMSAVESONGCONFIGDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8F85190)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMSTARTLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x8F85070)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMUNLOCKSONGSFXSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8F854B0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMUNLOCKTRACKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8F85280)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__REQUESTMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x8F88690)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATECURRENTLEVELID_OFFSET UNITYSDK_OFFSET(0x8F86280)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATEHASTRYMAXDIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x8F862E0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATELIGHTCONETRACKNUM_OFFSET UNITYSDK_OFFSET(0x8F86E10)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F88F80)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8F88EF0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F88E90)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___REQUESTMISSIONDATA_B__49_0_OFFSET UNITYSDK_OFFSET(0x8F88E80)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMusicRhythmModule_TypeDefinitionIndex = 50158;

	class ActivityMusicRhythmModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 HIDEN_SONG_ID = 0x4; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* _MusicRhythmMI2Group; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedSongIDList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* _MusicRhythmPhases; // 0x20
		::RPG::Client::CommonActivityLightConeRewardData* _MusicRhythmLightConeReward; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* _MusicRhythmTracks; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmSong*>* _MusicRhythmSongs; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* _MusicRhythmLevels; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* _MusicRhythmGroups; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* _MusicRhythmLevelID2Phase; // 0x50
		::System::Boolean _IsMaxDifficultyLevelUnlock_k__BackingField; // 0x58
		::System::Boolean _IsMissionDataReady_k__BackingField; // 0x59
		::System::Boolean _HasTryMaxDifficultyLevel_k__BackingField; // 0x5A
		::System::Int32 _MaxSongBarNum_k__BackingField; // 0x5C
		::System::UInt32 _CurrentSongID; // 0x60
		::System::Int32 _MaxSongGridNum_k__BackingField; // 0x64
		::System::UInt32 OfferType; // 0x68
		::System::UInt32 ActivityRewardID; // 0x6C
		::System::UInt32 _CurrentLevelID; // 0x70
		::System::Single MusicTime; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendMusicRhythmStartLevelCsReq(::System::UInt32 levelId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SENDMUSICRHYTHMSTARTLEVELCSREQ_OFFSET))(this, levelId);
		}

		::System::Void SendMusicRhythmFinishLevelCsReq(::System::UInt32 score, ::System::UInt32 star, ::System::Boolean fullCombo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SENDMUSICRHYTHMFINISHLEVELCSREQ_OFFSET))(this, score, star, fullCombo);
		}

		::System::Void _OnMusicRhythmDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMusicRhythmStartLevelScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMSTARTLEVELSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMusicRhythmFinishLevelScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMFINISHLEVELSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMusicRhythmSaveSongConfigDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMSAVESONGCONFIGDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMusicRhythmUnlockTrackScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMUNLOCKTRACKSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMusicRhythmMaxDifficultyLevelsUnlockNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMMAXDIFFICULTYLEVELSUNLOCKNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMusicRhythmUnlockSongSfxScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMUNLOCKSONGSFXSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean IsShowLevelRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSHOWLEVELREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowQuestRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSHOWQUESTREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowLightConeRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSHOWLIGHTCONEREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsFinishAllNormalLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISFINISHALLNORMALLEVEL_OFFSET))(this);
		}

		::System::Boolean HideDailyGotoRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_HIDEDAILYGOTOREDDOT_OFFSET))(this);
		}

		::System::Boolean IsAllRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISALLREWARDTAKEN_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmPhase*>* GetAllPhases()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmPhase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLPHASES_OFFSET))(this);
		}

		::System::Void UpdateLevelStarNum(::System::UInt32 levelID, ::System::UInt32 starNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UPDATELEVELSTARNUM_OFFSET))(this, levelID, starNum);
		}

		::System::Void OnLevelStarNumChanged(::System::UInt32 levelID, ::System::UInt32 starNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ONLEVELSTARNUMCHANGED_OFFSET))(this, levelID, starNum);
		}

		::System::Void UpdateLevelFullCombo(::System::UInt32 levelID, ::System::Boolean isFullCombo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UPDATELEVELFULLCOMBO_OFFSET))(this, levelID, isFullCombo);
		}

		::RPG::Client::MusicRhythmPhase* GetPhase(::System::UInt32 phaseID)
		{
			return ((::RPG::Client::MusicRhythmPhase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETPHASE_OFFSET))(this, phaseID);
		}

		::RPG::Client::MusicRhythmGroup* GetGroup(::System::UInt32 groupID)
		{
			return ((::RPG::Client::MusicRhythmGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETGROUP_OFFSET))(this, groupID);
		}

		::RPG::Client::MusicRhythmGroup* GetGroupFromMI(::System::UInt32 mappingInfoID)
		{
			return ((::RPG::Client::MusicRhythmGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETGROUPFROMMI_OFFSET))(this, mappingInfoID);
		}

		::RPG::Client::MusicRhythmLevel* GetLevel(::System::UInt32 levelID)
		{
			return ((::RPG::Client::MusicRhythmLevel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETLEVEL_OFFSET))(this, levelID);
		}

		::RPG::Client::MusicRhythmTrack* GetTrack(::System::UInt32 trackID)
		{
			return ((::RPG::Client::MusicRhythmTrack*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETTRACK_OFFSET))(this, trackID);
		}

		::RPG::Client::MusicRhythmSong* GetSong(::System::UInt32 songID)
		{
			return ((::RPG::Client::MusicRhythmSong*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETSONG_OFFSET))(this, songID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmSong*>* GetAllSongs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmSong*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLSONGS_OFFSET))(this);
		}

		::RPG::GameCore::MusicRhythmPresetSongRow* GetPresetRow(::System::UInt32 presetID)
		{
			return ((::RPG::GameCore::MusicRhythmPresetSongRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETPRESETROW_OFFSET))(this, presetID);
		}

		::RPG::GameCore::MusicRhythmTrackRow* GetTrackRow(::System::UInt32 trackID)
		{
			return ((::RPG::GameCore::MusicRhythmTrackRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETTRACKROW_OFFSET))(this, trackID);
		}

		::System::Boolean IsPhaseFinish(::System::UInt32 phaseID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISPHASEFINISH_OFFSET))(this, phaseID);
		}

		::System::Void UnlockTrack(::System::UInt32 trackID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UNLOCKTRACK_OFFSET))(this, trackID);
		}

		::System::UInt32 GetAllUnlockTrackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLUNLOCKTRACKNUM_OFFSET))(this);
		}

		::System::Boolean CanEditSong()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_CANEDITSONG_OFFSET))(this);
		}

		::System::Void FireMusicRhythmEvent(::System::UInt32 levelId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_FIREMUSICRHYTHMEVENT_OFFSET))(this, levelId);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnlockSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLUNLOCKSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllTakeMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLTAKEMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllFinishMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLFINISHMISSIONIDS_OFFSET))(this);
		}

		::System::UInt32 GetLeftRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETLEFTROUND_OFFSET))(this);
		}

		::System::UInt32 GetMinLevelStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETMINLEVELSTARNUM_OFFSET))(this);
		}

		::System::Boolean IsSongUnlock(::System::UInt32 songID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSONGUNLOCK_OFFSET))(this, songID);
		}

		::System::Boolean IsSongHide(::System::UInt32 songID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSONGHIDE_OFFSET))(this, songID);
		}

		::System::Void ReportMusicCompositionData(::System::UInt32 musicID, ::System::UInt32 presetID, ::System::Boolean isSave, ::System::Int32 costTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_REPORTMUSICCOMPOSITIONDATA_OFFSET))(this, musicID, presetID, isSave, costTime);
		}

		::System::Boolean IsNewSong(::System::UInt32 songID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISNEWSONG_OFFSET))(this, songID);
		}

		::System::Void SetNewSongHasSeen(::System::UInt32 songID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SETNEWSONGHASSEEN_OFFSET))(this, songID);
		}

		::System::Boolean IsQuickEntranceUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISQUICKENTRANCEUNLOCK_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__INITDATA_OFFSET))(this);
		}

		::System::Void _InitMusicRhythmData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__INITMUSICRHYTHMDATA_OFFSET))(this);
		}

		::System::Void _RequestMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__REQUESTMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetDependantMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__GETDEPENDANTMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Void _UpdateLightConeTrackNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATELIGHTCONETRACKNUM_OFFSET))(this);
		}

		::System::Void _UpdateCurrentLevelID(::System::UInt32 levelID, ::System::UInt32 starNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATECURRENTLEVELID_OFFSET))(this, levelID, starNum);
		}

		::System::Void _UpdateHasTryMaxDifficultyLevel(::System::UInt32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATEHASTRYMAXDIFFICULTYLEVEL_OFFSET))(this, levelID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* get_MusicRhythmPhases()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MUSICRHYTHMPHASES_OFFSET))(this);
		}

		::RPG::Client::MusicRhythmPhase* get_CurrentPhase()
		{
			return ((::RPG::Client::MusicRhythmPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTPHASE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentLevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTLEVELID_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISFINISH_OFFSET))(this);
		}

		::System::UInt32 get_UnlockSongMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_UNLOCKSONGMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_ShowHidenSongMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_SHOWHIDENSONGMISSIONID_OFFSET))(this);
		}

		::System::String* get_StageCompositionFSVKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_STAGECOMPOSITIONFSVKEY_OFFSET))(this);
		}

		::System::UInt32 get_QUICK_ENTRANCE_UNLOCK_SUBMISSION_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_QUICK_ENTRANCE_UNLOCK_SUBMISSION_ID_OFFSET))(this);
		}

		::RPG::Client::CommonActivityLightConeRewardData* get_LightConeReward()
		{
			return ((::RPG::Client::CommonActivityLightConeRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_LIGHTCONEREWARD_OFFSET))(this);
		}

		::RPG::Client::MusicRhythmSong* get_CurrentSong()
		{
			return ((::RPG::Client::MusicRhythmSong*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTSONG_OFFSET))(this);
		}

		::System::UInt32 get_CurrentSongID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTSONGID_OFFSET))(this);
		}

		::System::Boolean get_IsMaxDifficultyLevelUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISMAXDIFFICULTYLEVELUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsMaxDifficultyLevelUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_ISMAXDIFFICULTYLEVELUNLOCK_OFFSET))(this, value);
		}

		::System::Boolean get_HasTryMaxDifficultyLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_HASTRYMAXDIFFICULTYLEVEL_OFFSET))(this);
		}

		::System::Void set_HasTryMaxDifficultyLevel(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_HASTRYMAXDIFFICULTYLEVEL_OFFSET))(this, value);
		}

		::System::Int32 get_MaxSongGridNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MAXSONGGRIDNUM_OFFSET))(this);
		}

		::System::Void set_MaxSongGridNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_MAXSONGGRIDNUM_OFFSET))(this, value);
		}

		::System::Int32 get_MaxSongBarNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MAXSONGBARNUM_OFFSET))(this);
		}

		::System::Void set_MaxSongBarNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_MAXSONGBARNUM_OFFSET))(this, value);
		}

		::System::Boolean get_IsMissionDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISMISSIONDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsMissionDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_ISMISSIONDATAREADY_OFFSET))(this, value);
		}

		::System::Boolean get_ShownAllFinishAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_SHOWNALLFINISHANIM_OFFSET))(this);
		}

		::System::Void set_ShownAllFinishAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_SHOWNALLFINISHANIM_OFFSET))(this, value);
		}

		::System::Void __RequestMissionData_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___REQUESTMISSIONDATA_B__49_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
