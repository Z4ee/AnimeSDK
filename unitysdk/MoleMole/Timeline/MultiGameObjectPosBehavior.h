#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class MultiGameObjectPosBehavior_GameObjectPosData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_APPLYTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F9B4170)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_FINDTRACKEDREFERENCEINDEX_OFFSET UNITYSDK_OFFSET(0x1F9B3F40)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_INITDATA_OFFSET UNITYSDK_OFFSET(0x1F9B3710)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F9B4710)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F9B46E0)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1F9B4720)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F9B4700)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECORDERINITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F9B4610)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECORDOFFSET_OFFSET UNITYSDK_OFFSET(0x1F9B4330)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECORDPOS_OFFSET UNITYSDK_OFFSET(0x1F9B4320)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECOVERREMOVEDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1F9B3D30)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECOVERTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F9B4550)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_REMOVEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F9B4260)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RESOLVETRACKEDREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F9B4730)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_SYNCREFERENCESTATES_OFFSET UNITYSDK_OFFSET(0x1F9B3720)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B48D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MultiGameObjectPosBehavior_TypeDefinitionIndex = 32855;

	class MultiGameObjectPosBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* references; // 0x10
		::UnityEngine::Vector3 positionOffset; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Timeline::MultiGameObjectPosBehavior_GameObjectPosData*>* positionDatas; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* trackedReferences; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_INITDATA_OFFSET))(this);
		}

		::System::Void SyncReferenceStates(::System::Boolean applyOffsetAfterSync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_SYNCREFERENCESTATES_OFFSET))(this, applyOffsetAfterSync);
		}

		::System::Int32 RemoveReference(::UnityEngine::GameObject* reference)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_REMOVEREFERENCE_OFFSET))(this, reference);
		}

		::System::Void RecordPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECORDPOS_OFFSET))(this);
		}

		::System::Void RecordOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECORDOFFSET_OFFSET))(this);
		}

		::System::Void RecorderInitTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECORDERINITTRANSFORM_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void ApplyTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_APPLYTRANSFORMS_OFFSET))(this);
		}

		::System::Void RecoverTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECOVERTRANSFORMS_OFFSET))(this);
		}

		::System::Void RecoverRemovedReferences(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* activeReferences, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* previousTrackedReferences, ::System::Collections::Generic::List_1<::MoleMole::Timeline::MultiGameObjectPosBehavior_GameObjectPosData*>* trackedDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::MultiGameObjectPosBehavior_GameObjectPosData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RECOVERREMOVEDREFERENCES_OFFSET))(this, activeReferences, previousTrackedReferences, trackedDatas);
		}

		static ::System::Int32 FindTrackedReferenceIndex(::UnityEngine::GameObject* reference, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* previousTrackedReferences, ::System::Collections::Generic::List_1<::MoleMole::Timeline::MultiGameObjectPosBehavior_GameObjectPosData*>* previousPositionDatas)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::MultiGameObjectPosBehavior_GameObjectPosData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_FINDTRACKEDREFERENCEINDEX_OFFSET))(reference, previousTrackedReferences, previousPositionDatas);
		}

		static ::UnityEngine::GameObject* ResolveTrackedReference(::System::Int32 index, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* previousTrackedReferences, ::System::Collections::Generic::List_1<::MoleMole::Timeline::MultiGameObjectPosBehavior_GameObjectPosData*>* previousPositionDatas)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::MultiGameObjectPosBehavior_GameObjectPosData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_RESOLVETRACKEDREFERENCE_OFFSET))(index, previousTrackedReferences, previousPositionDatas);
		}
	};
}
