#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicRhythmGroupState.h"
#include "unitysdk/RPG/Client/MusicRhythmLevelInfo.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmLevel; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace RPG::GameCore { class MusicRhythmGroupRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICRHYTHMGROUP_ACCEPTMISSION_OFFSET UNITYSDK_OFFSET(0x9DD0130)
#define RPG_CLIENT_MUSICRHYTHMGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x9DCFDD0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETACCESSIBLEREWARDS_OFFSET UNITYSDK_OFFSET(0x9DD0F20)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETALLLEVELS_OFFSET UNITYSDK_OFFSET(0x9DD0520)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETALLTRACKS_OFFSET UNITYSDK_OFFSET(0x9DD0360)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETGROUPMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x9DCFEA0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETMAPPINGINFODATA_OFFSET UNITYSDK_OFFSET(0x9DD08F0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETMAXDIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x9DD1540)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ALLSTARNUM_OFFSET UNITYSDK_OFFSET(0x9DD20D0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x9DD1B10)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ENTITYGROUPID_OFFSET UNITYSDK_OFFSET(0x9DD1460)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ENTITYMISSIONGROUPID_OFFSET UNITYSDK_OFFSET(0x9DD14D0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9DD1BF0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x9DD1B80)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_GROUPCOVERIMGPATH_OFFSET UNITYSDK_OFFSET(0x9DD1AA0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0x9DD1A20)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x9DD19A0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_HASACCEPTMISSION_OFFSET UNITYSDK_OFFSET(0x9DD02A0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DD1760)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9DD1850)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9DD1F70)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9DD1DD0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_MAPNAME_OFFSET UNITYSDK_OFFSET(0x9DD1CF0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9DD1C60)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_MUSICRHYTHMLEVELS_OFFSET UNITYSDK_OFFSET(0x9DD1CD0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_MUSICRHYTHMTRACKS_OFFSET UNITYSDK_OFFSET(0x9DD1CE0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_NOWSTARNUM_OFFSET UNITYSDK_OFFSET(0x9DD22A0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x9DD17E0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DD1780)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9DD1D70)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_TAKEMISSIONID_OFFSET UNITYSDK_OFFSET(0x9DD00C0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_TRACKIDLIST_OFFSET UNITYSDK_OFFSET(0x9DD18C0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x9DD1930)
#define RPG_CLIENT_MUSICRHYTHMGROUP_SENDCHOOSELEVELPAGEEVENT_OFFSET UNITYSDK_OFFSET(0x9DD1190)
#define RPG_CLIENT_MUSICRHYTHMGROUP_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DD1770)
#define RPG_CLIENT_MUSICRHYTHMGROUP_UPDATETRACKS_OFFSET UNITYSDK_OFFSET(0x9DCFE50)
#define RPG_CLIENT_MUSICRHYTHMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9DCFE40)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmGroup_TypeDefinitionIndex = 50169;

	class MusicRhythmGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* _MusicRhythmTracks; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* _MusicRhythmLevels; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmGroup* Create(::System::UInt32 groupID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* levels, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* tracks)
		{
			return ((::RPG::Client::MusicRhythmGroup*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_CREATE_OFFSET))(groupID, levels, tracks);
		}

		::System::Void UpdateTracks(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* tracks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_UPDATETRACKS_OFFSET))(this, tracks);
		}

		::RPG::Client::MusicRhythmGroupState GetGroupMissionState()
		{
			return ((::RPG::Client::MusicRhythmGroupState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GETGROUPMISSIONSTATE_OFFSET))(this);
		}

		::System::Void AcceptMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_ACCEPTMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>* GetAllTracks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GETALLTRACKS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmLevel*>* GetAllLevels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmLevel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GETALLLEVELS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmLevelInfo>* GetMappingInfoData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmLevelInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GETMAPPINGINFODATA_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetAccessibleRewards()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GETACCESSIBLEREWARDS_OFFSET))(this);
		}

		::System::Void SendChooseLevelPageEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_SENDCHOOSELEVELPAGEEVENT_OFFSET))(this);
		}

		::RPG::Client::MusicRhythmLevel* GetMaxDifficultyLevel()
		{
			return ((::RPG::Client::MusicRhythmLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GETMAXDIFFICULTYLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MusicRhythmGroupRow* get_Row()
		{
			return ((::RPG::GameCore::MusicRhythmGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_PHASEID_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_INDEX_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TrackIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_TRACKIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_TakeMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_TAKEMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_GROUPNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_GROUPDESC_OFFSET))(this);
		}

		::System::String* get_GroupCoverImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_GROUPCOVERIMGPATH_OFFSET))(this);
		}

		::System::String* get_BGMState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_BGMSTATE_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_GOTOID_OFFSET))(this);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::UInt32 get_EntityGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_ENTITYGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_EntityMissionGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_ENTITYMISSIONGROUPID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* get_MusicRhythmLevels()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_MUSICRHYTHMLEVELS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* get_MusicRhythmTracks()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_MUSICRHYTHMTRACKS_OFFSET))(this);
		}

		::RPG::Client::TextID get_MapName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_MAPNAME_OFFSET))(this);
		}

		::System::Boolean get_HasAcceptMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_HASACCEPTMISSION_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_ISFINISH_OFFSET))(this);
		}

		::System::UInt32 get_AllStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_ALLSTARNUM_OFFSET))(this);
		}

		::System::UInt32 get_NowStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_GET_NOWSTARNUM_OFFSET))(this);
		}
	};
}
