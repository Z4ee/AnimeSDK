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

#define RPG_CLIENT_MUSICRHYTHMSONG_CONVERTSAVEDTRACKGRIDTOLIST_OFFSET UNITYSDK_OFFSET(0x9DD79D0)
#define RPG_CLIENT_MUSICRHYTHMSONG_CONVERTTRACKGRIDLISTTONUM_OFFSET UNITYSDK_OFFSET(0x9DD7080)
#define RPG_CLIENT_MUSICRHYTHMSONG_COPYEDITTRACKGRIDLIST_OFFSET UNITYSDK_OFFSET(0x9DD9310)
#define RPG_CLIENT_MUSICRHYTHMSONG_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD5F50)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETALLPRESETS_OFFSET UNITYSDK_OFFSET(0x9DD8F50)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETBARBYGRID_OFFSET UNITYSDK_OFFSET(0x9DD9820)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETGRIDBYBAR_OFFSET UNITYSDK_OFFSET(0x9DD9C00)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETPROGRESSBYGRIDNUM_OFFSET UNITYSDK_OFFSET(0x9DD97B0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETSFXICONPATH_OFFSET UNITYSDK_OFFSET(0x9DD8060)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETTRACKGRIDCONFIG_OFFSET UNITYSDK_OFFSET(0x9DD7E10)
#define RPG_CLIENT_MUSICRHYTHMSONG_GETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9DD85B0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_BARNUM_OFFSET UNITYSDK_OFFSET(0x9DD9940)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_BGMMENUSTATE_OFFSET UNITYSDK_OFFSET(0x9DDA780)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_BGMSTAGESTATE_OFFSET UNITYSDK_OFFSET(0x9DDA7F0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_CURPRESETID_OFFSET UNITYSDK_OFFSET(0x9DDAD00)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_GRIDBARSLIST_OFFSET UNITYSDK_OFFSET(0x9DD9B90)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_GRIDNUM_OFFSET UNITYSDK_OFFSET(0x9DD9AE0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_GRIDTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x9DDA910)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DDA680)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_ISSFXUNLOCK_OFFSET UNITYSDK_OFFSET(0x9DDACF0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x9DDAAC0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_MIXINGWAVEMATPATH_OFFSET UNITYSDK_OFFSET(0x9DDA860)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETARRAY_OFFSET UNITYSDK_OFFSET(0x9DD91B0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETENDGRID_OFFSET UNITYSDK_OFFSET(0x9DDAA20)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETINDEX_OFFSET UNITYSDK_OFFSET(0x9DDAD20)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETOBJECT_OFFSET UNITYSDK_OFFSET(0x9DDA5C0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_PRESETSTARTGRID_OFFSET UNITYSDK_OFFSET(0x9DDA980)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DDA6A0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SAVEDTRACKGRID_OFFSET UNITYSDK_OFFSET(0x9DDACE0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SFXIDS_OFFSET UNITYSDK_OFFSET(0x9DD6B50)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SOLOTRACKINDEX_OFFSET UNITYSDK_OFFSET(0x9DDA8F0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SONGNAME_OFFSET UNITYSDK_OFFSET(0x9DDA700)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x9DDABD0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_TRACKIDS_OFFSET UNITYSDK_OFFSET(0x9DD8540)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_TRACKLIST_OFFSET UNITYSDK_OFFSET(0x9DDA8D0)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_UNLOCKTYPEPARAM_OFFSET UNITYSDK_OFFSET(0x9DD8A50)
#define RPG_CLIENT_MUSICRHYTHMSONG_GET_UNLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x9DD89E0)
#define RPG_CLIENT_MUSICRHYTHMSONG_INITEDITTRACKGRIDFROMPRESET_OFFSET UNITYSDK_OFFSET(0x9DD9E50)
#define RPG_CLIENT_MUSICRHYTHMSONG_INITSAVEDTRACKGRIDCONFIGS_OFFSET UNITYSDK_OFFSET(0x9DD6330)
#define RPG_CLIENT_MUSICRHYTHMSONG_ISSFXON_OFFSET UNITYSDK_OFFSET(0x9DD80E0)
#define RPG_CLIENT_MUSICRHYTHMSONG_RECOVERTRACKGRIDCONFIG_OFFSET UNITYSDK_OFFSET(0x9DD8AC0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SAVESFXCONFIGSLOCAL_OFFSET UNITYSDK_OFFSET(0x9DD72F0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SAVETRACKGRIDCONFIGSLOCAL_OFFSET UNITYSDK_OFFSET(0x9DD6BC0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETCURPRESETID_OFFSET UNITYSDK_OFFSET(0x9DD62A0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETSAVEDACTIVESFXLIST_OFFSET UNITYSDK_OFFSET(0x9DD6840)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETSAVEDTRACKGRIDCONFIGS_OFFSET UNITYSDK_OFFSET(0x9DD63B0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETSFX_OFFSET UNITYSDK_OFFSET(0x9DD82B0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETSOLOTRACKID_OFFSET UNITYSDK_OFFSET(0x9DD8490)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETTRACKGRIDCONFIGS_OFFSET UNITYSDK_OFFSET(0x9DD7540)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETTRACKGRIDSINGLE_OFFSET UNITYSDK_OFFSET(0x9DD7D40)
#define RPG_CLIENT_MUSICRHYTHMSONG_SETUNLOCKSFX_OFFSET UNITYSDK_OFFSET(0x9DD62F0)
#define RPG_CLIENT_MUSICRHYTHMSONG_SET_CURPRESETID_OFFSET UNITYSDK_OFFSET(0x9DDAD10)
#define RPG_CLIENT_MUSICRHYTHMSONG_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DDA690)
#define RPG_CLIENT_MUSICRHYTHMSONG_SET_SOLOTRACKINDEX_OFFSET UNITYSDK_OFFSET(0x9DDA900)
#define RPG_CLIENT_MUSICRHYTHMSONG_SET_TRACKLIST_OFFSET UNITYSDK_OFFSET(0x9DDA8E0)
#define RPG_CLIENT_MUSICRHYTHMSONG_TRYSAVETRACKGRIDCONFIGS_OFFSET UNITYSDK_OFFSET(0x9DD9220)
#define RPG_CLIENT_MUSICRHYTHMSONG_UPDATETRACKLIST_OFFSET UNITYSDK_OFFSET(0x9DD6250)
#define RPG_CLIENT_MUSICRHYTHMSONG__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDAEA0)
#define RPG_CLIENT_MUSICRHYTHMSONG__ENSURESAVEDTRACKGRIDLIST_OFFSET UNITYSDK_OFFSET(0x9DD6FF0)
#define RPG_CLIENT_MUSICRHYTHMSONG__LOGCOMPOSITIONTRACKGRID_OFFSET UNITYSDK_OFFSET(0x9DD7D00)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmSong_TypeDefinitionIndex = 50180;

	class MusicRhythmSong : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _UnsavedTrackGridList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SavedActiveSFXList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SavedTrackGridList; // 0x20
		::Il2CppArray<::System::Boolean>* _EditActiveSFXList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPreset*>* _MusicRhythmPresets; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>* _TrackList_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Boolean>*>* _EditTrackGridList; // 0x40
		::System::Int32 _SoloTrackIndex_k__BackingField; // 0x48
		::System::UInt32 _CurPresetID_k__BackingField; // 0x4C
		::System::UInt32 _ID_k__BackingField; // 0x50
		::System::Boolean _IsUnlockSFX; // 0x54
		::System::Int32 _BarNum; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmSong* Create(::System::UInt32 songID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPreset*>*& presets)
		{
			return ((::RPG::Client::MusicRhythmSong*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPreset*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_CREATE_OFFSET))(songID, presets);
		}

		::System::Void UpdateTrackList(::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*& trackList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_UPDATETRACKLIST_OFFSET))(this, trackList);
		}

		::System::Void SetCurPresetID(::System::UInt32 presetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETCURPRESETID_OFFSET))(this, presetID);
		}

		::System::Void SetUnlockSfx()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETUNLOCKSFX_OFFSET))(this);
		}

		::System::Void InitSavedTrackGridConfigs(::Il2CppArray<::System::UInt32>* trackGridConfigList, ::Il2CppArray<::System::UInt32>* activeSfxList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_INITSAVEDTRACKGRIDCONFIGS_OFFSET))(this, trackGridConfigList, activeSfxList);
		}

		::System::Void SetSavedTrackGridConfigs(::Il2CppArray<::System::UInt32>* trackGridConfigList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETSAVEDTRACKGRIDCONFIGS_OFFSET))(this, trackGridConfigList);
		}

		::System::Void SetSavedActiveSfxList(::Il2CppArray<::System::UInt32>* activeSfxList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETSAVEDACTIVESFXLIST_OFFSET))(this, activeSfxList);
		}

		::System::Void SaveTrackGridConfigsLocal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SAVETRACKGRIDCONFIGSLOCAL_OFFSET))(this);
		}

		::System::Void SaveSFXConfigsLocal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SAVESFXCONFIGSLOCAL_OFFSET))(this);
		}

		::System::Void SetTrackGridConfigs(::Il2CppArray<::System::UInt32>* trackGridConfigList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETTRACKGRIDCONFIGS_OFFSET))(this, trackGridConfigList);
		}

		::System::Void SetTrackGridSingle(::System::Int32 trackIndex, ::System::Int32 gridNum, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETTRACKGRIDSINGLE_OFFSET))(this, trackIndex, gridNum, isOn);
		}

		::System::Boolean GetTrackGridConfig(::System::Int32 trackIndex, ::System::Int32 gridNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETTRACKGRIDCONFIG_OFFSET))(this, trackIndex, gridNum);
		}

		::System::Void ConvertSavedTrackGridToList(::System::UInt32 num, ::Il2CppArray<::System::Boolean>* retBoolList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_CONVERTSAVEDTRACKGRIDTOLIST_OFFSET))(this, num, retBoolList);
		}

		::System::UInt32 ConvertTrackGridListToNum(::Il2CppArray<::System::Boolean>* boolList)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_CONVERTTRACKGRIDLISTTONUM_OFFSET))(this, boolList);
		}

		::System::String* GetSFXIconPath(::System::UInt32 sfxID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETSFXICONPATH_OFFSET))(this, sfxID);
		}

		::System::Boolean IsSFXOn(::System::UInt32 sfxID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_ISSFXON_OFFSET))(this, sfxID);
		}

		::System::Void SetSFX(::System::UInt32 sfxID, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETSFX_OFFSET))(this, sfxID, isOn);
		}

		::System::Void SetSoloTrackID(::System::UInt32 trackID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SETSOLOTRACKID_OFFSET))(this, trackID);
		}

		::System::Boolean GetUnlocked(::System::UInt32 minLevelStarNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETUNLOCKED_OFFSET))(this, minLevelStarNum);
		}

		::System::Void RecoverTrackGridConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_RECOVERTRACKGRIDCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmPreset*>* GetAllPresets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmPreset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETALLPRESETS_OFFSET))(this);
		}

		::System::Void TrySaveTrackGridConfigs(::System::UInt32 presetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_TRYSAVETRACKGRIDCONFIGS_OFFSET))(this, presetID);
		}

		::Il2CppArray<::System::UInt32>* CopyEditTrackGridList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_COPYEDITTRACKGRIDLIST_OFFSET))(this);
		}

		::System::Single GetProgressByGridNum(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETPROGRESSBYGRIDNUM_OFFSET))(this, index);
		}

		::System::Int32 GetBarByGrid(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETBARBYGRID_OFFSET))(this, index);
		}

		::System::Int32 GetGridByBar(::System::Int32 bar)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GETGRIDBYBAR_OFFSET))(this, bar);
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

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SET_ID_OFFSET))(this, value);
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

		::System::Void set_TrackList(::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SET_TRACKLIST_OFFSET))(this, value);
		}

		::System::Int32 get_SoloTrackIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_GET_SOLOTRACKINDEX_OFFSET))(this);
		}

		::System::Void set_SoloTrackIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SET_SOLOTRACKINDEX_OFFSET))(this, value);
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

		::System::Void set_CurPresetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSONG_SET_CURPRESETID_OFFSET))(this, value);
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
