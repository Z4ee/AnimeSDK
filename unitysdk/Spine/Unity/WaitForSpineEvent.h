#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AnimationState; }
namespace Spine { class Event; }
namespace Spine { class EventData; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace System { class String; }

#define SPINE_UNITY_WAITFORSPINEEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x18343490)
#define SPINE_UNITY_WAITFORSPINEEVENT_GET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET UNITYSDK_OFFSET(0x18343350)
#define SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENTBYNAME_OFFSET UNITYSDK_OFFSET(0x18343100)
#define SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x18343240)
#define SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_1_OFFSET UNITYSDK_OFFSET(0x183435E0)
#define SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x18343370)
#define SPINE_UNITY_WAITFORSPINEEVENT_SET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET UNITYSDK_OFFSET(0x18343360)
#define SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBEBYNAME_OFFSET UNITYSDK_OFFSET(0x18342EB0)
#define SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x18342CD0)
#define SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18343820)
#define SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18343700)
#define SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18343810)
#define SPINE_UNITY_WAITFORSPINEEVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183430B0)
#define SPINE_UNITY_WAITFORSPINEEVENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x183430D0)
#define SPINE_UNITY_WAITFORSPINEEVENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x183430E0)
#define SPINE_UNITY_WAITFORSPINEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x183430A0)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineEvent_TypeDefinitionIndex = 43917;

	class WaitForSpineEvent : public ::System::Object
	{
	public:
		::Spine::EventData* m_TargetEvent; // 0x10
		::System::String* m_EventName; // 0x18
		::Spine::AnimationState* m_AnimationState; // 0x20
		::System::Boolean m_unsubscribeAfterFiring; // 0x28
		::System::Boolean m_WasFired; // 0x29

		::System::Void _ctor(::Spine::AnimationState* a1, ::Spine::EventData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::Spine::EventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::Spine::Unity::SkeletonAnimation* a1, ::Spine::EventData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimation*, ::Spine::EventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::Spine::AnimationState* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::Spine::Unity::SkeletonAnimation* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimation*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Subscribe(::Spine::AnimationState* a1, ::Spine::EventData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::Spine::EventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SubscribeByName(::Spine::AnimationState* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBEBYNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HandleAnimationStateEventByName(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENTBYNAME_OFFSET))(this, a1, a2);
		}

		::System::Void HandleAnimationStateEvent(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_WillUnsubscribeAfterFiring()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_GET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET))(this);
		}

		::System::Void set_WillUnsubscribeAfterFiring(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET))(this, a1);
		}

		::Spine::Unity::WaitForSpineEvent* NowWaitFor(::Spine::AnimationState* a1, ::Spine::EventData* a2, ::System::Boolean a3)
		{
			return ((::Spine::Unity::WaitForSpineEvent*(*)(::PVOID, ::Spine::AnimationState*, ::Spine::EventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_OFFSET))(this, a1, a2, a3);
		}

		::Spine::Unity::WaitForSpineEvent* NowWaitFor_1(::Spine::AnimationState* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Spine::Unity::WaitForSpineEvent*(*)(::PVOID, ::Spine::AnimationState*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear(::Spine::AnimationState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_CLEAR_OFFSET))(this, a1);
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
