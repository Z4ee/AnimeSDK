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

#define RPG_CLIENT_MUSICRHYTHMGROUP_ACCEPTMISSION_OFFSET UNITYSDK_OFFSET(0xD90E660)
#define RPG_CLIENT_MUSICRHYTHMGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xD90E400)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETACCESSIBLEREWARDS_OFFSET UNITYSDK_OFFSET(0xD90F150)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETALLLEVELS_OFFSET UNITYSDK_OFFSET(0xD90EA80)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETALLTRACKS_OFFSET UNITYSDK_OFFSET(0xD90E810)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETGROUPMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xD90E4D0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETMAPPINGINFODATA_OFFSET UNITYSDK_OFFSET(0xD90EE10)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GETMAXDIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0xD90F6D0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ALLSTARNUM_OFFSET UNITYSDK_OFFSET(0xD910550)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0xD90FDF0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ENTITYGROUPID_OFFSET UNITYSDK_OFFSET(0xD90F590)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ENTITYMISSIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD90F630)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xD90FF30)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xD90FE90)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_GROUPCOVERIMGPATH_OFFSET UNITYSDK_OFFSET(0xD90FD50)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0xD90FC90)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0xD90FBD0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_HASACCEPTMISSION_OFFSET UNITYSDK_OFFSET(0xD90E7B0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0xD90F8D0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xD90F9F0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xD910310)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xD910250)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_MAPNAME_OFFSET UNITYSDK_OFFSET(0xD9100F0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xD90FFD0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_MUSICRHYTHMLEVELS_OFFSET UNITYSDK_OFFSET(0xD910070)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_MUSICRHYTHMTRACKS_OFFSET UNITYSDK_OFFSET(0xD9100B0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_NOWSTARNUM_OFFSET UNITYSDK_OFFSET(0xD9106E0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0xD90F950)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD90F8F0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xD9101B0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_TAKEMISSIONID_OFFSET UNITYSDK_OFFSET(0xD90E5C0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_TRACKIDLIST_OFFSET UNITYSDK_OFFSET(0xD90FA90)
#define RPG_CLIENT_MUSICRHYTHMGROUP_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xD90FB30)
#define RPG_CLIENT_MUSICRHYTHMGROUP_SENDCHOOSELEVELPAGEEVENT_OFFSET UNITYSDK_OFFSET(0xD90F390)
#define RPG_CLIENT_MUSICRHYTHMGROUP_SET_ID_OFFSET UNITYSDK_OFFSET(0xD90F8E0)
#define RPG_CLIENT_MUSICRHYTHMGROUP_UPDATETRACKS_OFFSET UNITYSDK_OFFSET(0xD90E480)
#define RPG_CLIENT_MUSICRHYTHMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xD90E470)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmGroup_TypeDefinitionIndex = 61904;

	class MusicRhythmGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* _MusicRhythmLevels; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* _MusicRhythmTracks; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmGroup* Create(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* a3)
		{
			return ((::RPG::Client::MusicRhythmGroup*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void UpdateTracks(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_UPDATETRACKS_OFFSET))(this, a1);
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

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP_SET_ID_OFFSET))(this, a1);
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
