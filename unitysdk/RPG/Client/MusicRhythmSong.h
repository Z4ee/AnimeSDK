#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmPreset; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace RPG::GameCore { class MusicRhythmSongRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICRHYTHMSONG_CONVERTSAVEDTRACKGRIDTOLIST_OFFSET UNITYSDK_OFFSET(0x18E96830)
#define RPG_CLIENT_MUSICRHYTHMSONG_CONVERTTRACKGRIDLISTTONUM_OFFSET UNITYSDK_OFFSET(0x18E96FC0)
#define RPG_CLIENT_MUSICRHYTHMSONG_COPYEDITTRACKGRIDLIST_OFFSET UNITYSDK_OFFSET(0x18E98AB0)
#define RPG_CLIENT_MUSICRHYTHMSONG_CREATE_OFFSET UNITYSDK_OFFSET(0x18E952B0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETALLPRESETS_OFFSET UNITYSDK_OFFSET(0x18E98710)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETBARBYGRID_OFFSET UNITYSDK_OFFSET(0x18E98F00)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETGRIDBYBAR_OFFSET UNITYSDK_OFFSET(0x18E99100)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETPROGRESSBYGRIDNUM_OFFSET UNITYSDK_OFFSET(0x18E98E90)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETSFXICONPATH_OFFSET UNITYSDK_OFFSET(0x18E97C60)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETTRACKGRIDCONFIG_OFFSET UNITYSDK_OFFSET(0x18E97930)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18E97F80)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_BARNUM_OFFSET UNITYSDK_OFFSET(0x18E98FB0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_BGMMENUSTATE_OFFSET UNITYSDK_OFFSET(0x18E99280)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_BGMSTAGESTATE_OFFSET UNITYSDK_OFFSET(0x18E99320)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_CURPRESETID_OFFSET UNITYSDK_OFFSET(0x18E997D0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_GRIDBARSLIST_OFFSET UNITYSDK_OFFSET(0x18E99060)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_GRIDNUM_OFFSET UNITYSDK_OFFSET(0x18E955C0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_GRIDTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x18E994A0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_ID_OFFSET UNITYSDK_OFFSET(0x18E99260)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_ISSFXUNLOCK_OFFSET UNITYSDK_OFFSET(0x18E99790)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x18E99680)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_MIXINGWAVEMATPATH_OFFSET UNITYSDK_OFFSET(0x18E993C0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETARRAY_OFFSET UNITYSDK_OFFSET(0x18E98920)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETENDGRID_OFFSET UNITYSDK_OFFSET(0x18E995E0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETINDEX_OFFSET UNITYSDK_OFFSET(0x18E997F0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETOBJECT_OFFSET UNITYSDK_OFFSET(0x18E991D0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETSTARTGRID_OFFSET UNITYSDK_OFFSET(0x18E99540)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_ROW_OFFSET UNITYSDK_OFFSET(0x18E95670)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SAVEDTRACKGRID_OFFSET UNITYSDK_OFFSET(0x18E99740)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SFXIDS_OFFSET UNITYSDK_OFFSET(0x18E956D0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SOLOTRACKINDEX_OFFSET UNITYSDK_OFFSET(0x18E99480)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SONGNAME_OFFSET UNITYSDK_OFFSET(0x18E941A0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x18E996E0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_TRACKIDS_OFFSET UNITYSDK_OFFSET(0x18E97EE0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_TRACKLIST_OFFSET UNITYSDK_OFFSET(0x18E99460)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_UNLOCKTYPEPARAM_OFFSET UNITYSDK_OFFSET(0x18E981B0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_UNLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x18E98110)
#define RPG_CLIENT_MUSICRHYTHMSONG_INITEDITTRACKGRIDFROMPRESET_OFFSET UNITYSDK_OFFSET(0x18E958D0)
#define RPG_CLIENT_MUSICRHYTHMSONG_INITSAVEDTRACKGRIDCONFIGS_OFFSET UNITYSDK_OFFSET(0x18E95850)
#define RPG_CLIENT_MUSICRHYTHMSONG_ISSFXON_OFFSET UNITYSDK_OFFSET(0x18E97CE0)
#define RPG_CLIENT_MUSICRHYTHMSONG_RECOVERTRACKGRIDCONFIG_OFFSET UNITYSDK_OFFSET(0x18E98250)
#define RPG_CLIENT_MUSICRHYTHMSONG_SAVESFXCONFIGSLOCAL_OFFSET UNITYSDK_OFFSET(0x18E97230)
#define RPG_CLIENT_MUSICRHYTHMSONG_SAVETRACKGRIDCONFIGSLOCAL_OFFSET UNITYSDK_OFFSET(0x18E96B60)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETCURPRESETID_OFFSET UNITYSDK_OFFSET(0x18E957C0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETSAVEDACTIVESFXLIST_OFFSET UNITYSDK_OFFSET(0x18E96410)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETSAVEDTRACKGRIDCONFIGS_OFFSET UNITYSDK_OFFSET(0x18E95EC0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETSFX_OFFSET UNITYSDK_OFFSET(0x18E97DB0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETSOLOTRACKID_OFFSET UNITYSDK_OFFSET(0x18E97E80)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETTRACKGRIDCONFIGS_OFFSET UNITYSDK_OFFSET(0x18E97380)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETTRACKGRIDSINGLE_OFFSET UNITYSDK_OFFSET(0x18E97850)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETUNLOCKSFX_OFFSET UNITYSDK_OFFSET(0x18E95810)
#define RPG_CLIENT_MUSICRHYTHMSONG_SET_CURPRESETID_OFFSET UNITYSDK_OFFSET(0x18E997E0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SET_ID_OFFSET UNITYSDK_OFFSET(0x18E99270)
#define RPG_CLIENT_MUSICRHYTHMSONG_SET_SOLOTRACKINDEX_OFFSET UNITYSDK_OFFSET(0x18E99490)
#define RPG_CLIENT_MUSICRHYTHMSONG_SET_TRACKLIST_OFFSET UNITYSDK_OFFSET(0x18E99470)
#define RPG_CLIENT_MUSICRHYTHMSONG_TRYSAVETRACKGRIDCONFIGS_OFFSET UNITYSDK_OFFSET(0x18E989C0)
#define RPG_CLIENT_MUSICRHYTHMSONG_UPDATETRACKLIST_OFFSET UNITYSDK_OFFSET(0x18E95770)
#define RPG_CLIENT_MUSICRHYTHMSONG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E95560)
#define RPG_CLIENT_MUSICRHYTHMSONG__ENSURESAVEDTRACKGRIDLIST_OFFSET UNITYSDK_OFFSET(0x18E967A0)
#define RPG_CLIENT_MUSICRHYTHMSONG__LOGCOMPOSITIONTRACKGRID_OFFSET UNITYSDK_OFFSET(0x18E97810)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmSong_TypeDefinitionIndex = 59080;

	class MusicRhythmSong : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _UnsavedTrackGridList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPreset*>* _MusicRhythmPresets; // 0x18
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Boolean>*>* _EditTrackGridList; // 0x20
		::Il2CppArray<::System::Boolean>* _EditActiveSFXList; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _SavedActiveSFXList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>* _TrackList_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _SavedTrackGridList; // 0x40
		::System::UInt32 _CurPresetID_k__BackingField; // 0x48
		::System::Int32 _BarNum; // 0x4C
		::System::Boolean _IsUnlockSFX; // 0x50
		::System::UInt32 _ID_k__BackingField; // 0x54
		::System::Int32 _SoloTrackIndex_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmSong* Create(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPreset*>*& a2)
		{
			return ((::RPG::Client::MusicRhythmSong*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPreset*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_CREATE_OFFSET))(a1, a2);
		}

		::System::Void UpdateTrackList(::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_UPDATETRACKLIST_OFFSET))(this, a1);
		}

		::System::Void SetCurPresetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETCURPRESETID_OFFSET))(this, a1);
		}

		::System::Void SetUnlockSfx()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETUNLOCKSFX_OFFSET))(this);
		}

		::System::Void InitSavedTrackGridConfigs(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_INITSAVEDTRACKGRIDCONFIGS_OFFSET))(this, a1, a2);
		}

		::System::Void SetSavedTrackGridConfigs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETSAVEDTRACKGRIDCONFIGS_OFFSET))(this, a1);
		}

		::System::Void SetSavedActiveSfxList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETSAVEDACTIVESFXLIST_OFFSET))(this, a1);
		}

		::System::Void SaveTrackGridConfigsLocal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SAVETRACKGRIDCONFIGSLOCAL_OFFSET))(this);
		}

		::System::Void SaveSFXConfigsLocal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SAVESFXCONFIGSLOCAL_OFFSET))(this);
		}

		::System::Void SetTrackGridConfigs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETTRACKGRIDCONFIGS_OFFSET))(this, a1);
		}

		::System::Void SetTrackGridSingle(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETTRACKGRIDSINGLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetTrackGridConfig(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETTRACKGRIDCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void ConvertSavedTrackGridToList(::System::UInt32 a1, ::Il2CppArray<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_CONVERTSAVEDTRACKGRIDTOLIST_OFFSET))(this, a1, a2);
		}

		::System::UInt32 ConvertTrackGridListToNum(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_CONVERTTRACKGRIDLISTTONUM_OFFSET))(this, a1);
		}

		::System::String* GetSFXIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETSFXICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean IsSFXOn(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_ISSFXON_OFFSET))(this, a1);
		}

		::System::Void SetSFX(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETSFX_OFFSET))(this, a1, a2);
		}

		::System::Void SetSoloTrackID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETSOLOTRACKID_OFFSET))(this, a1);
		}

		::System::Boolean GetUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void RecoverTrackGridConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_RECOVERTRACKGRIDCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmPreset*>* GetAllPresets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmPreset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETALLPRESETS_OFFSET))(this);
		}

		::System::Void TrySaveTrackGridConfigs(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_TRYSAVETRACKGRIDCONFIGS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* CopyEditTrackGridList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_COPYEDITTRACKGRIDLIST_OFFSET))(this);
		}

		::System::Single GetProgressByGridNum(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETPROGRESSBYGRIDNUM_OFFSET))(this, a1);
		}

		::System::Int32 GetBarByGrid(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETBARBYGRID_OFFSET))(this, a1);
		}

		::System::Int32 GetGridByBar(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETGRIDBYBAR_OFFSET))(this, a1);
		}

		::System::Void _LogCompositionTrackGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG__LOGCOMPOSITIONTRACKGRID_OFFSET))(this);
		}

		::System::Void _EnsureSavedTrackGridList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG__ENSURESAVEDTRACKGRIDLIST_OFFSET))(this);
		}

		::System::Void InitEditTrackGridFromPreset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_INITEDITTRACKGRIDFROMPRESET_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MusicRhythmSongRow* get_Row()
		{
			return ((::RPG::GameCore::MusicRhythmSongRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_SongName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_SONGNAME_OFFSET))(this);
		}

		::System::String* get_BGMMenuState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_BGMMENUSTATE_OFFSET))(this);
		}

		::System::String* get_BGMStageState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_BGMSTAGESTATE_OFFSET))(this);
		}

		::System::Int32 get_GridNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_GRIDNUM_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_GridBarsList()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_GRIDBARSLIST_OFFSET))(this);
		}

		::System::Int32 get_BarNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_BARNUM_OFFSET))(this);
		}

		::System::String* get_MixingWaveMatPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_MIXINGWAVEMATPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PresetArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETARRAY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TrackIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_TRACKIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SFXIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_SFXIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>* get_TrackList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_TRACKLIST_OFFSET))(this);
		}

		::System::Void set_TrackList(::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SET_TRACKLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_SoloTrackIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_SOLOTRACKINDEX_OFFSET))(this);
		}

		::System::Void set_SoloTrackIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SET_SOLOTRACKINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_UNLOCKTYPE_OFFSET))(this);
		}

		::System::UInt32 get_UnlockTypeParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_UNLOCKTYPEPARAM_OFFSET))(this);
		}

		::System::UInt32 get_GridTransitionTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_GRIDTRANSITIONTIME_OFFSET))(this);
		}

		::System::Int32 get_PresetStartGrid()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETSTARTGRID_OFFSET))(this);
		}

		::System::Int32 get_PresetEndGrid()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETENDGRID_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_SubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_SUBMISSIONID_OFFSET))(this);
		}

		::System::Boolean get_SavedTrackGrid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_SAVEDTRACKGRID_OFFSET))(this);
		}

		::System::Boolean get_IsSFXUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_ISSFXUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_CurPresetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_CURPRESETID_OFFSET))(this);
		}

		::System::Void set_CurPresetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SET_CURPRESETID_OFFSET))(this, a1);
		}

		::RPG::Client::MusicRhythmPreset* get_PresetObject()
		{
			return ((::RPG::Client::MusicRhythmPreset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETOBJECT_OFFSET))(this);
		}

		::System::UInt32 get_PresetIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETINDEX_OFFSET))(this);
		}
	};
}
