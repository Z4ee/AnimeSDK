#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AnimationState; }
namespace Spine { class Event; }
namespace Spine { class EventData; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace System { class String; }

#define SPINE_UNITY_WAITFORSPINEEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x18B75E30)
#define SPINE_UNITY_WAITFORSPINEEVENT_GET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET UNITYSDK_OFFSET(0x18B75D10)
#define SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENTBYNAME_OFFSET UNITYSDK_OFFSET(0x18B75AC0)
#define SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x18B75C00)
#define SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_1_OFFSET UNITYSDK_OFFSET(0x18B75F90)
#define SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x18B75D30)
#define SPINE_UNITY_WAITFORSPINEEVENT_SET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET UNITYSDK_OFFSET(0x18B75D20)
#define SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBEBYNAME_OFFSET UNITYSDK_OFFSET(0x18B75920)
#define SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x18B757E0)
#define SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18B76180)
#define SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18B76090)
#define SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18B76170)
#define SPINE_UNITY_WAITFORSPINEEVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B75A70)
#define SPINE_UNITY_WAITFORSPINEEVENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18B75A90)
#define SPINE_UNITY_WAITFORSPINEEVENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18B75AA0)
#define SPINE_UNITY_WAITFORSPINEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B75A60)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineEvent_TypeDefinitionIndex = 37906;

	class WaitForSpineEvent : public ::System::Object
	{
	public:
		::Spine::EventData* m_TargetEvent; // 0x10
		::System::String* m_EventName; // 0x18
		::Spine::AnimationState* m_AnimationState; // 0x20
		::System::Boolean m_unsubscribeAfterFiring; // 0x28
		::System::Boolean m_WasFired; // 0x29

		::System::Void _ctor(::Spine::AnimationState* state, ::Spine::EventData* eventDataReference, ::System::Boolean unsubscribeAfterFiring)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::Spine::EventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT__CTOR_OFFSET))(this, state, eventDataReference, unsubscribeAfterFiring);
		}

		::System::Void _ctor_1(::Spine::Unity::SkeletonAnimation* skeletonAnimation, ::Spine::EventData* eventDataReference, ::System::Boolean unsubscribeAfterFiring)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimation*, ::Spine::EventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT__CTOR_1_OFFSET))(this, skeletonAnimation, eventDataReference, unsubscribeAfterFiring);
		}

		::System::Void _ctor_2(::Spine::AnimationState* state, ::System::String* eventName, ::System::Boolean unsubscribeAfterFiring)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT__CTOR_2_OFFSET))(this, state, eventName, unsubscribeAfterFiring);
		}

		::System::Void _ctor_3(::Spine::Unity::SkeletonAnimation* skeletonAnimation, ::System::String* eventName, ::System::Boolean unsubscribeAfterFiring)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimation*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT__CTOR_3_OFFSET))(this, skeletonAnimation, eventName, unsubscribeAfterFiring);
		}

		::System::Void Subscribe(::Spine::AnimationState* state, ::Spine::EventData* eventDataReference, ::System::Boolean unsubscribe)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::Spine::EventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBE_OFFSET))(this, state, eventDataReference, unsubscribe);
		}

		::System::Void SubscribeByName(::Spine::AnimationState* state, ::System::String* eventName, ::System::Boolean unsubscribe)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBEBYNAME_OFFSET))(this, state, eventName, unsubscribe);
		}

		::System::Void HandleAnimationStateEventByName(::Spine::TrackEntry* trackEntry, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENTBYNAME_OFFSET))(this, trackEntry, e);
		}

		::System::Void HandleAnimationStateEvent(::Spine::TrackEntry* trackEntry, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENT_OFFSET))(this, trackEntry, e);
		}

		::System::Boolean get_WillUnsubscribeAfterFiring()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_GET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET))(this);
		}

		::System::Void set_WillUnsubscribeAfterFiring(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET))(this, value);
		}

		::Spine::Unity::WaitForSpineEvent* NowWaitFor(::Spine::AnimationState* state, ::Spine::EventData* eventDataReference, ::System::Boolean unsubscribeAfterFiring)
		{
			return ((::Spine::Unity::WaitForSpineEvent*(*)(::PVOID, ::Spine::AnimationState*, ::Spine::EventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_OFFSET))(this, state, eventDataReference, unsubscribeAfterFiring);
		}

		::Spine::Unity::WaitForSpineEvent* NowWaitFor_1(::Spine::AnimationState* state, ::System::String* eventName, ::System::Boolean unsubscribeAfterFiring)
		{
			return ((::Spine::Unity::WaitForSpineEvent*(*)(::PVOID, ::Spine::AnimationState*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_1_OFFSET))(this, state, eventName, unsubscribeAfterFiring);
		}

		::System::Void Clear(::Spine::AnimationState* state)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_CLEAR_OFFSET))(this, state);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
