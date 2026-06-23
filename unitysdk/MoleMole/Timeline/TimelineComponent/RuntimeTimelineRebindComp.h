#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Timeline::TimelineComponent { class NoSeamlessBaseReferenceCompInfo; }
namespace MoleMole::Timeline::TimelineComponent { class NormalSyncReferenceInfo; }
namespace MoleMole::Timeline::TimelineComponent { class SeamlessBaseReferenceCompInfo; }
namespace MoleMole::Timeline::TimelineComponent { class SeamlessTrackBindInfo; }
namespace MoleMole::Timeline::TimelineComponent { class SyncReferenceInfo; }
namespace MoleMole::Timeline::TimelineComponent { class TrackBindInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1871A560)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_GETROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1871B190)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_GETSEAMLESSGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1871BBC0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_GET_PDCOMP_OFFSET UNITYSDK_OFFSET(0x1871A480)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1871BC10)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_REBINDNONSEAMLESS_OFFSET UNITYSDK_OFFSET(0x1871A7B0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_REBINDSEAMLESS_1_OFFSET UNITYSDK_OFFSET(0x1871B480)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_REBINDSEAMLESS_OFFSET UNITYSDK_OFFSET(0x1871B310)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_SETOVERRIDEROOT_OFFSET UNITYSDK_OFFSET(0x1871A510)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1871BCC0)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineRebindComp_TypeDefinitionIndex = 47542;

	class RuntimeTimelineRebindComp : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Transform* overrideRoot; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessTrackBindInfo*>*>* SeamlessTrackBindInfos; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::TrackBindInfo*>* TrackBindInfos; // 0x68
		::System::Boolean NewBind; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::NormalSyncReferenceInfo*>* NormalSyncReferenceInfos; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SyncReferenceInfo*>*>* TagMapToSyncReferenceInfos; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo*>* NewNormalSyncReferenceInfos; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo*>*>* NewTagMapToSyncReferenceInfos; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* cacheSeamlessGameObjects; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableDirector* get_pdComp()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_GET_PDCOMP_OFFSET))(this);
		}

		::System::Void SetOverrideRoot(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_SETOVERRIDEROOT_OFFSET))(this, root);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLEAR_OFFSET))(this);
		}

		::System::Void RebindNonSeamless()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_REBINDNONSEAMLESS_OFFSET))(this);
		}

		::System::Void RebindSeamless(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* SyncTagToObjMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_REBINDSEAMLESS_OFFSET))(this, SyncTagToObjMap);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetSeamlessGameObjects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_GETSEAMLESSGAMEOBJECTS_OFFSET))(this);
		}

		::System::Void RebindSeamless_1(::System::String* syncTag, ::UnityEngine::GameObject* entityRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_REBINDSEAMLESS_1_OFFSET))(this, syncTag, entityRoot);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_ONENABLE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_GETROOTTRANSFORM_OFFSET))(this);
		}
	};
}
