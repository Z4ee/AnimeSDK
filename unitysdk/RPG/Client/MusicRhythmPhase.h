#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmGroup; }
namespace RPG::Client { class MusicRhythmSong; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace RPG::GameCore { class MusicRhythmPhaseRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICRHYTHMPHASE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A305660)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETALLGROUPS_OFFSET UNITYSDK_OFFSET(0x1A305A30)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETALLTAKEMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1A306380)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETALLTRACKS_OFFSET UNITYSDK_OFFSET(0x1A305740)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETALLUNLOCKSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1A306140)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETFIRSTSHOWGROUP_OFFSET UNITYSDK_OFFSET(0x1A305CA0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETSORTEDALLTAKEMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1A3065C0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ALLSTARTNUM_OFFSET UNITYSDK_OFFSET(0x1A307120)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ALLTRACKNUM_OFFSET UNITYSDK_OFFSET(0x1A3074A0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_FINISHMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A306940)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_HASSHOWUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x1A3078C0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A3067B0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1A306D90)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A306FF0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_LIVENAME_OFFSET UNITYSDK_OFFSET(0x1A3069E0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_MUSICRHYTHMGROUPS_OFFSET UNITYSDK_OFFSET(0x1A306BE0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_MUSICRHYTHMSONG_OFFSET UNITYSDK_OFFSET(0x1A306C20)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_MUSICRHYTHMTRACKS_OFFSET UNITYSDK_OFFSET(0x1A3059F0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_NOWSTARNUM_OFFSET UNITYSDK_OFFSET(0x1A3072E0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_POSTIMGPATH_OFFSET UNITYSDK_OFFSET(0x1A306AA0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1A3068E0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_SHOWNUNLOCKDIALOG_OFFSET UNITYSDK_OFFSET(0x1A3067D0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1A3076B0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_SONGID_OFFSET UNITYSDK_OFFSET(0x1A306B40)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_SONGNAME_OFFSET UNITYSDK_OFFSET(0x1A306C60)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_UNLOCKTRACKNUM_OFFSET UNITYSDK_OFFSET(0x1A3074F0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_ISFINALMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1A307050)
#define RPG_CLIENT_MUSICRHYTHMPHASE_SETSHOWNUNLOCKDIALOG_OFFSET UNITYSDK_OFFSET(0x1A305FD0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_SET_HASSHOWUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x1A3079C0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A3067C0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_SET_SHOWNUNLOCKDIALOG_OFFSET UNITYSDK_OFFSET(0x1A306020)
#define RPG_CLIENT_MUSICRHYTHMPHASE_UPDATEPASTPHASE_OFFSET UNITYSDK_OFFSET(0x1A3056F0)
#define RPG_CLIENT_MUSICRHYTHMPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3056E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmPhase_TypeDefinitionIndex = 61912;

	class MusicRhythmPhase : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* _MusicRhythmGroups; // 0x10
		::RPG::Client::MusicRhythmSong* _MusicRhythmSong; // 0x18
		::RPG::Client::MusicRhythmPhase* _PastPhase; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* _MusicRhythmTracks; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmPhase* Create(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* a3, ::RPG::Client::MusicRhythmSong* a4)
		{
			return ((::RPG::Client::MusicRhythmPhase*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*, ::RPG::Client::MusicRhythmSong*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void UpdatePastPhase(::RPG::Client::MusicRhythmPhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_UPDATEPASTPHASE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>* GetAllTracks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GETALLTRACKS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmGroup*>* GetAllGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GETALLGROUPS_OFFSET))(this);
		}

		::RPG::Client::MusicRhythmGroup* GetFirstShowGroup()
		{
			return ((::RPG::Client::MusicRhythmGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GETFIRSTSHOWGROUP_OFFSET))(this);
		}

		::System::Void SetShownUnlockDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_SETSHOWNUNLOCKDIALOG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnlockSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GETALLUNLOCKSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllTakeMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GETALLTAKEMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSortedAllTakeMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GETSORTEDALLTAKEMISSIONIDS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_ShownUnlockDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_SHOWNUNLOCKDIALOG_OFFSET))(this);
		}

		::System::Void set_ShownUnlockDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_SET_SHOWNUNLOCKDIALOG_OFFSET))(this, a1);
		}

		::RPG::GameCore::MusicRhythmPhaseRow* get_Row()
		{
			return ((::RPG::GameCore::MusicRhythmPhaseRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_FinishMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_FINISHMISSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_LiveName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_LIVENAME_OFFSET))(this);
		}

		::System::String* get_PostImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_POSTIMGPATH_OFFSET))(this);
		}

		::System::UInt32 get_SongID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_SONGID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* get_MusicRhythmGroups()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_MUSICRHYTHMGROUPS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* get_MusicRhythmTracks()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_MUSICRHYTHMTRACKS_OFFSET))(this);
		}

		::RPG::Client::MusicRhythmSong* get_MusicRhythmSong()
		{
			return ((::RPG::Client::MusicRhythmSong*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_MUSICRHYTHMSONG_OFFSET))(this);
		}

		::RPG::Client::TextID get_SongName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_SONGNAME_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_AllStartNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_ALLSTARTNUM_OFFSET))(this);
		}

		::System::UInt32 get_NowStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_NOWSTARNUM_OFFSET))(this);
		}

		::System::UInt32 get_AllTrackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_ALLTRACKNUM_OFFSET))(this);
		}

		::System::UInt32 get_UnlockTrackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_UNLOCKTRACKNUM_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_HasShowUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_HASSHOWUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_HasShowUnlockAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_SET_HASSHOWUNLOCKANIM_OFFSET))(this, a1);
		}

		::System::Boolean IsFinalMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_ISFINALMISSIONFINISH_OFFSET))(this);
		}
	};
}
