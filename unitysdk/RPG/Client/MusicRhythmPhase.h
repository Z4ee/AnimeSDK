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

#define RPG_CLIENT_MUSICRHYTHMPHASE_CREATE_OFFSET UNITYSDK_OFFSET(0xAB1B5C0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETALLGROUPS_OFFSET UNITYSDK_OFFSET(0xAB1B860)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETALLTAKEMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xAB1C030)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETALLTRACKS_OFFSET UNITYSDK_OFFSET(0xAB1B6A0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETALLUNLOCKSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xAB1BE20)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETFIRSTSHOWGROUP_OFFSET UNITYSDK_OFFSET(0xAB1BA20)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GETSORTEDALLTAKEMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xAB1C240)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ALLSTARTNUM_OFFSET UNITYSDK_OFFSET(0xAB1CD20)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ALLTRACKNUM_OFFSET UNITYSDK_OFFSET(0xAB1CFC0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_FINISHMISSIONID_OFFSET UNITYSDK_OFFSET(0xAB1C5E0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_HASSHOWUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xAB1D170)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ID_OFFSET UNITYSDK_OFFSET(0xAB1C450)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xAB1C8F0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xAB1CAA0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_LIVENAME_OFFSET UNITYSDK_OFFSET(0xAB1C650)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_MUSICRHYTHMGROUPS_OFFSET UNITYSDK_OFFSET(0xAB1C7B0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_MUSICRHYTHMSONG_OFFSET UNITYSDK_OFFSET(0xAB1C7D0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_MUSICRHYTHMTRACKS_OFFSET UNITYSDK_OFFSET(0xAB1C7C0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_NOWSTARNUM_OFFSET UNITYSDK_OFFSET(0xAB1CE70)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_POSTIMGPATH_OFFSET UNITYSDK_OFFSET(0xAB1C6D0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_ROW_OFFSET UNITYSDK_OFFSET(0xAB1C580)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_SHOWNUNLOCKDIALOG_OFFSET UNITYSDK_OFFSET(0xAB1C470)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xAB13460)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_SONGID_OFFSET UNITYSDK_OFFSET(0xAB1C740)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_SONGNAME_OFFSET UNITYSDK_OFFSET(0xAB1C7E0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_GET_UNLOCKTRACKNUM_OFFSET UNITYSDK_OFFSET(0xAB1D010)
#define RPG_CLIENT_MUSICRHYTHMPHASE_ISFINALMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xAB1CB00)
#define RPG_CLIENT_MUSICRHYTHMPHASE_SETSHOWNUNLOCKDIALOG_OFFSET UNITYSDK_OFFSET(0xAB1BCB0)
#define RPG_CLIENT_MUSICRHYTHMPHASE_SET_HASSHOWUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xAB1D270)
#define RPG_CLIENT_MUSICRHYTHMPHASE_SET_ID_OFFSET UNITYSDK_OFFSET(0xAB1C460)
#define RPG_CLIENT_MUSICRHYTHMPHASE_SET_SHOWNUNLOCKDIALOG_OFFSET UNITYSDK_OFFSET(0xAB1BD00)
#define RPG_CLIENT_MUSICRHYTHMPHASE_UPDATEPASTPHASE_OFFSET UNITYSDK_OFFSET(0xAB1B650)
#define RPG_CLIENT_MUSICRHYTHMPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1B640)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmPhase_TypeDefinitionIndex = 57024;

	class MusicRhythmPhase : public ::System::Object
	{
	public:
		::RPG::Client::MusicRhythmPhase* _PastPhase; // 0x10
		::RPG::Client::MusicRhythmSong* _MusicRhythmSong; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* _MusicRhythmTracks; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* _MusicRhythmGroups; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmPhase* Create(::System::UInt32 phaseID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* groups, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* tracks, ::RPG::Client::MusicRhythmSong* song)
		{
			return ((::RPG::Client::MusicRhythmPhase*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*, ::RPG::Client::MusicRhythmSong*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_CREATE_OFFSET))(phaseID, groups, tracks, song);
		}

		::System::Void UpdatePastPhase(::RPG::Client::MusicRhythmPhase* phase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_UPDATEPASTPHASE_OFFSET))(this, phase);
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

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_ShownUnlockDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_GET_SHOWNUNLOCKDIALOG_OFFSET))(this);
		}

		::System::Void set_ShownUnlockDialog(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_SET_SHOWNUNLOCKDIALOG_OFFSET))(this, value);
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

		::System::Void set_HasShowUnlockAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_SET_HASSHOWUNLOCKANIM_OFFSET))(this, value);
		}

		::System::Boolean IsFinalMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE_ISFINALMISSIONFINISH_OFFSET))(this);
		}
	};
}
