#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Timeline::TimelineComponent { class TimelineBranchGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_APPLYBRANCHGROUP_OFFSET UNITYSDK_OFFSET(0x1A5F3320)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_APPLYTRACKSTATES_OFFSET UNITYSDK_OFFSET(0x1A5F4000)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_CLEARALLTRACKRUNTIMEMUTE_OFFSET UNITYSDK_OFFSET(0x1A5F3740)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_CLEARSELFALLTRACKRUNTIMEMUTE_OFFSET UNITYSDK_OFFSET(0x1A5F3860)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GETACTIVEGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1A5F4310)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GETALLBRANCHGROUPNAMES_OFFSET UNITYSDK_OFFSET(0x1A5F4350)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GETBRANCHGROUP_OFFSET UNITYSDK_OFFSET(0x1A5F4520)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GETBRANCHPLAYABLEDIRECTORS_OFFSET UNITYSDK_OFFSET(0x1A5F3190)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GET_BRANCHGROUPDIC_OFFSET UNITYSDK_OFFSET(0x1A5F2820)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_INITIALIZEBRANCHGROUPS_OFFSET UNITYSDK_OFFSET(0x1A5F2AF0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A5F2AA0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_RESETALLTRACKSTATES_OFFSET UNITYSDK_OFFSET(0x1A5F3C20)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_SET_BRANCHGROUPDIC_OFFSET UNITYSDK_OFFSET(0x1A5F2A90)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_SWITCHBRANCH_OFFSET UNITYSDK_OFFSET(0x1A5F3580)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_UPDATEBRANCHGROUPS_OFFSET UNITYSDK_OFFSET(0x1A5F2840)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F4610)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineBranchManager_TypeDefinitionIndex = 79679;

	class RuntimeTimelineBranchManager : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*>* branchGroups; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*>* _branchGroups; // 0x60
		::System::String* defaultBranchGroup; // 0x68
		::System::String* _activeGroupName; // 0x70
		::System::Boolean _useControlTrack; // 0x78
		::UnityEngine::Playables::PlayableDirector* _director; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*>* get_BranchGroupDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GET_BRANCHGROUPDIC_OFFSET))(this);
		}

		::System::Void set_BranchGroupDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_SET_BRANCHGROUPDIC_OFFSET))(this, value);
		}

		::System::Void UpdateBranchGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_UPDATEBRANCHGROUPS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>* GetBranchPlayableDirectors()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GETBRANCHPLAYABLEDIRECTORS_OFFSET))(this);
		}

		::System::Void InitializeBranchGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_INITIALIZEBRANCHGROUPS_OFFSET))(this);
		}

		::System::Boolean SwitchBranch(::System::String* branchGroupName, ::System::Boolean rebuildGraph, ::System::Double& duration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Double&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_SWITCHBRANCH_OFFSET))(this, branchGroupName, rebuildGraph, duration);
		}

		::System::Void ClearAllTrackRuntimeMute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_CLEARALLTRACKRUNTIMEMUTE_OFFSET))(this);
		}

		::System::Boolean ApplyBranchGroup(::System::String* branchGroupName, ::System::Boolean rebuildGraph, ::System::Double& duration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Double&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_APPLYBRANCHGROUP_OFFSET))(this, branchGroupName, rebuildGraph, duration);
		}

		::System::Void ResetAllTrackStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_RESETALLTRACKSTATES_OFFSET))(this);
		}

		::System::Void ClearSelfAllTrackRuntimeMute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_CLEARSELFALLTRACKRUNTIMEMUTE_OFFSET))(this);
		}

		::System::Void ApplyTrackStates(::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup* branchGroup)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_APPLYTRACKSTATES_OFFSET))(this, branchGroup);
		}

		::System::String* GetActiveGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GETACTIVEGROUPNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAllBranchGroupNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GETALLBRANCHGROUPNAMES_OFFSET))(this);
		}

		::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup* GetBranchGroup(::System::String* groupName)
		{
			return ((::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER_GETBRANCHGROUP_OFFSET))(this, groupName);
		}
	};
}
