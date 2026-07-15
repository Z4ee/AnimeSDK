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

#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_CANEDITSONG_OFFSET UNITYSDK_OFFSET(0x19315E70)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19314EA0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_FIREMUSICRHYTHMEVENT_OFFSET UNITYSDK_OFFSET(0x19316000)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLFINISHMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x19316710)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLPHASES_OFFSET UNITYSDK_OFFSET(0x19314EE0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLSONGS_OFFSET UNITYSDK_OFFSET(0x193156E0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLTAKEMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x193164F0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLUNLOCKSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x19316070)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLUNLOCKTRACKNUM_OFFSET UNITYSDK_OFFSET(0x19315CB0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETGROUPFROMMI_OFFSET UNITYSDK_OFFSET(0x19315510)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETGROUP_OFFSET UNITYSDK_OFFSET(0x19315460)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETLEFTROUND_OFFSET UNITYSDK_OFFSET(0x19316BC0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETLEVEL_OFFSET UNITYSDK_OFFSET(0x19315120)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETMINLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0x19316EF0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETPHASE_OFFSET UNITYSDK_OFFSET(0x193153D0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETPRESETROW_OFFSET UNITYSDK_OFFSET(0x19315AD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETSONG_OFFSET UNITYSDK_OFFSET(0x19315650)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETTRACKROW_OFFSET UNITYSDK_OFFSET(0x19315B40)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETTRACK_OFFSET UNITYSDK_OFFSET(0x193155C0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTLEVELID_OFFSET UNITYSDK_OFFSET(0x19317D00)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x19316DD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTSONGID_OFFSET UNITYSDK_OFFSET(0x19317F40)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_CURRENTSONG_OFFSET UNITYSDK_OFFSET(0x19317E80)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_HASTRYMAXDIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x19317FA0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x19317D40)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISMAXDIFFICULTYLEVELUNLOCK_OFFSET UNITYSDK_OFFSET(0x19317F80)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x19318000)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_LIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0x19317E40)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MAXSONGBARNUM_OFFSET UNITYSDK_OFFSET(0x19317FE0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MAXSONGGRIDNUM_OFFSET UNITYSDK_OFFSET(0x19317FC0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MUSICRHYTHMPHASES_OFFSET UNITYSDK_OFFSET(0x19317CC0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_QUICK_ENTRANCE_UNLOCK_SUBMISSION_ID_OFFSET UNITYSDK_OFFSET(0x19317680)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_SHOWHIDENSONGMISSIONID_OFFSET UNITYSDK_OFFSET(0x193171B0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_SHOWNALLFINISHANIM_OFFSET UNITYSDK_OFFSET(0x19318020)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_STAGECOMPOSITIONFSVKEY_OFFSET UNITYSDK_OFFSET(0x19317D90)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_UNLOCKSONGMISSIONID_OFFSET UNITYSDK_OFFSET(0x19315F40)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_HIDEDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0x193146B0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x19314BF0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x19314860)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISFINISHALLNORMALLEVEL_OFFSET UNITYSDK_OFFSET(0x193144D0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISNEWSONG_OFFSET UNITYSDK_OFFSET(0x19317350)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISPHASEFINISH_OFFSET UNITYSDK_OFFSET(0x19315BB0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISQUICKENTRANCEUNLOCK_OFFSET UNITYSDK_OFFSET(0x193175A0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSHOWLEVELREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x193142F0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSHOWLIGHTCONEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x19314480)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSHOWQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x19314390)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSONGHIDE_OFFSET UNITYSDK_OFFSET(0x19315A00)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSONGUNLOCK_OFFSET UNITYSDK_OFFSET(0x193170B0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ONLEVELSTARNUMCHANGED_OFFSET UNITYSDK_OFFSET(0x193151B0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_REPORTMUSICCOMPOSITIONDATA_OFFSET UNITYSDK_OFFSET(0x193172A0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SENDMUSICRHYTHMFINISHLEVELCSREQ_OFFSET UNITYSDK_OFFSET(0x19312CE0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SENDMUSICRHYTHMSTARTLEVELCSREQ_OFFSET UNITYSDK_OFFSET(0x19312C00)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SETNEWSONGHASSEEN_OFFSET UNITYSDK_OFFSET(0x19317470)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_HASTRYMAXDIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x19317FB0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_ISMAXDIFFICULTYLEVELUNLOCK_OFFSET UNITYSDK_OFFSET(0x19317F90)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_ISMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x19318010)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_MAXSONGBARNUM_OFFSET UNITYSDK_OFFSET(0x19317FF0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_MAXSONGGRIDNUM_OFFSET UNITYSDK_OFFSET(0x19317FD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_SHOWNALLFINISHANIM_OFFSET UNITYSDK_OFFSET(0x19318080)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UNLOCKTRACK_OFFSET UNITYSDK_OFFSET(0x193139D0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UPDATELEVELFULLCOMBO_OFFSET UNITYSDK_OFFSET(0x19313BF0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UPDATELEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0x19313B10)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x19312780)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x193180F0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__GETDEPENDANTMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x19317AD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x19317C30)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0x19317760)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__INITMUSICRHYTHMDATA_OFFSET UNITYSDK_OFFSET(0x19314CD0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMDATASCRSP_OFFSET UNITYSDK_OFFSET(0x19312DE0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMFINISHLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x19313DA0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMMAXDIFFICULTYLEVELSUNLOCKNOTIFY_OFFSET UNITYSDK_OFFSET(0x19314140)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMSAVESONGCONFIGDATASCRSP_OFFSET UNITYSDK_OFFSET(0x19313E30)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMSTARTLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x19313D10)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMUNLOCKSONGSFXSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x193141A0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMUNLOCKTRACKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x19313F20)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__REQUESTMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x19317890)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATECURRENTLEVELID_OFFSET UNITYSDK_OFFSET(0x19315250)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATEHASTRYMAXDIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x193152B0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATELIGHTCONETRACKNUM_OFFSET UNITYSDK_OFFSET(0x19315C50)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___REQUESTMISSIONDATA_B__49_0_OFFSET UNITYSDK_OFFSET(0x19318180)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMusicRhythmModule_TypeDefinitionIndex = 59058;

	class ActivityMusicRhythmModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 HIDEN_SONG_ID = 0x4; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* _MusicRhythmPhases; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* _MusicRhythmMI2Group; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* _MusicRhythmTracks; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* _MusicRhythmLevelID2Phase; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmSong*>* _MusicRhythmSongs; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedSongIDList; // 0x38
		::RPG::Client::CommonActivityLightConeRewardData* _MusicRhythmLightConeReward; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* _MusicRhythmLevels; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* _MusicRhythmGroups; // 0x50
		::System::Int32 _MaxSongBarNum_k__BackingField; // 0x58
		::System::UInt32 _CurrentSongID; // 0x5C
		::System::Int32 _MaxSongGridNum_k__BackingField; // 0x60
		::System::UInt32 OfferType; // 0x64
		::System::UInt32 _CurrentLevelID; // 0x68
		::System::Single MusicTime; // 0x6C
		::System::Boolean _IsMaxDifficultyLevelUnlock_k__BackingField; // 0x70
		::System::Boolean _HasTryMaxDifficultyLevel_k__BackingField; // 0x71
		::System::Boolean _IsMissionDataReady_k__BackingField; // 0x72
		::System::UInt32 ActivityRewardID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendMusicRhythmStartLevelCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SENDMUSICRHYTHMSTARTLEVELCSREQ_OFFSET))(this, a1);
		}

		::System::Void SendMusicRhythmFinishLevelCsReq(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SENDMUSICRHYTHMFINISHLEVELCSREQ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnMusicRhythmDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMusicRhythmStartLevelScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMSTARTLEVELSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMusicRhythmFinishLevelScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMFINISHLEVELSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMusicRhythmSaveSongConfigDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMSAVESONGCONFIGDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMusicRhythmUnlockTrackScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMUNLOCKTRACKSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMusicRhythmMaxDifficultyLevelsUnlockNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMMAXDIFFICULTYLEVELSUNLOCKNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMusicRhythmUnlockSongSfxScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__ONMUSICRHYTHMUNLOCKSONGSFXSCNOTIFY_OFFSET))(this, a1, a2);
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

		::System::Void UpdateLevelStarNum(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UPDATELEVELSTARNUM_OFFSET))(this, a1, a2);
		}

		::System::Void OnLevelStarNumChanged(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ONLEVELSTARNUMCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateLevelFullCombo(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UPDATELEVELFULLCOMBO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MusicRhythmPhase* GetPhase(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicRhythmPhase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETPHASE_OFFSET))(this, a1);
		}

		::RPG::Client::MusicRhythmGroup* GetGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicRhythmGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::MusicRhythmGroup* GetGroupFromMI(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicRhythmGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETGROUPFROMMI_OFFSET))(this, a1);
		}

		::RPG::Client::MusicRhythmLevel* GetLevel(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicRhythmLevel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::MusicRhythmTrack* GetTrack(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicRhythmTrack*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETTRACK_OFFSET))(this, a1);
		}

		::RPG::Client::MusicRhythmSong* GetSong(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicRhythmSong*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETSONG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmSong*>* GetAllSongs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmSong*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLSONGS_OFFSET))(this);
		}

		::RPG::GameCore::MusicRhythmPresetSongRow* GetPresetRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MusicRhythmPresetSongRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETPRESETROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::MusicRhythmTrackRow* GetTrackRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MusicRhythmTrackRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETTRACKROW_OFFSET))(this, a1);
		}

		::System::Boolean IsPhaseFinish(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISPHASEFINISH_OFFSET))(this, a1);
		}

		::System::Void UnlockTrack(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_UNLOCKTRACK_OFFSET))(this, a1);
		}

		::System::UInt32 GetAllUnlockTrackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GETALLUNLOCKTRACKNUM_OFFSET))(this);
		}

		::System::Boolean CanEditSong()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_CANEDITSONG_OFFSET))(this);
		}

		::System::Void FireMusicRhythmEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_FIREMUSICRHYTHMEVENT_OFFSET))(this, a1);
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

		::System::Boolean IsSongUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSONGUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsSongHide(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISSONGHIDE_OFFSET))(this, a1);
		}

		::System::Void ReportMusicCompositionData(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_REPORTMUSICCOMPOSITIONDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsNewSong(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_ISNEWSONG_OFFSET))(this, a1);
		}

		::System::Void SetNewSongHasSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SETNEWSONGHASSEEN_OFFSET))(this, a1);
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

		::System::Void _UpdateCurrentLevelID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATECURRENTLEVELID_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateHasTryMaxDifficultyLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE__UPDATEHASTRYMAXDIFFICULTYLEVEL_OFFSET))(this, a1);
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

		::System::Void set_IsMaxDifficultyLevelUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_ISMAXDIFFICULTYLEVELUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTryMaxDifficultyLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_HASTRYMAXDIFFICULTYLEVEL_OFFSET))(this);
		}

		::System::Void set_HasTryMaxDifficultyLevel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_HASTRYMAXDIFFICULTYLEVEL_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxSongGridNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MAXSONGGRIDNUM_OFFSET))(this);
		}

		::System::Void set_MaxSongGridNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_MAXSONGGRIDNUM_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxSongBarNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_MAXSONGBARNUM_OFFSET))(this);
		}

		::System::Void set_MaxSongBarNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_MAXSONGBARNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMissionDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_ISMISSIONDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsMissionDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_ISMISSIONDATAREADY_OFFSET))(this, a1);
		}

		::System::Boolean get_ShownAllFinishAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_GET_SHOWNALLFINISHANIM_OFFSET))(this);
		}

		::System::Void set_ShownAllFinishAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE_SET_SHOWNALLFINISHANIM_OFFSET))(this, a1);
		}

		::System::Void __RequestMissionData_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___REQUESTMISSIONDATA_B__49_0_OFFSET))(this);
		}
	};
}
