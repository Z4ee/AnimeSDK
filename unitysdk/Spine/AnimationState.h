#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Animation; }
namespace Spine { class AnimationStateData; }
namespace Spine { class AnimationState_TrackEntryDelegate; }
namespace Spine { class AnimationState_TrackEntryEventDelegate; }
namespace Spine { class AttachmentTimeline; }
namespace Spine { class Event; }
namespace Spine { class EventQueue; }
namespace Spine { class RotateTimeline; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { class TrackEntry; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine { template <typename T> class Pool_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define SPINE_ANIMATIONSTATE_ADDANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1E5D1380)
#define SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET UNITYSDK_OFFSET(0x1E5D12C0)
#define SPINE_ANIMATIONSTATE_ADDEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1E5D1790)
#define SPINE_ANIMATIONSTATE_ADDEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x1E5CC160)
#define SPINE_ANIMATIONSTATE_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E5CBFA0)
#define SPINE_ANIMATIONSTATE_ADD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5CBEE0)
#define SPINE_ANIMATIONSTATE_ADD_END_OFFSET UNITYSDK_OFFSET(0x1E5CBE20)
#define SPINE_ANIMATIONSTATE_ADD_EVENT_OFFSET UNITYSDK_OFFSET(0x1E5CC060)
#define SPINE_ANIMATIONSTATE_ADD_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1E5CBD60)
#define SPINE_ANIMATIONSTATE_ADD_START_OFFSET UNITYSDK_OFFSET(0x1E5CBCA0)
#define SPINE_ANIMATIONSTATE_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5CDE90)
#define SPINE_ANIMATIONSTATE_APPLYATTACHMENTTIMELINE_OFFSET UNITYSDK_OFFSET(0x1E5CE9E0)
#define SPINE_ANIMATIONSTATE_APPLYEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x1E5CF7D0)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROMEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x1E5CFCD0)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x1E5CDFB0)
#define SPINE_ANIMATIONSTATE_APPLYROTATETIMELINE_OFFSET UNITYSDK_OFFSET(0x1E5CEB80)
#define SPINE_ANIMATIONSTATE_APPLY_OFFSET UNITYSDK_OFFSET(0x1E5CD4F0)
#define SPINE_ANIMATIONSTATE_ASSIGNEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x1E5CC120)
#define SPINE_ANIMATIONSTATE_CLEARLISTENERNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1E5D22A0)
#define SPINE_ANIMATIONSTATE_CLEARNEXT_OFFSET UNITYSDK_OFFSET(0x1E5CCF60)
#define SPINE_ANIMATIONSTATE_CLEARTRACKS_OFFSET UNITYSDK_OFFSET(0x1E5D0430)
#define SPINE_ANIMATIONSTATE_CLEARTRACK_OFFSET UNITYSDK_OFFSET(0x1E5D04D0)
#define SPINE_ANIMATIONSTATE_COMPUTEHOLD_OFFSET UNITYSDK_OFFSET(0x1E5D1AF0)
#define SPINE_ANIMATIONSTATE_EXPANDTOINDEX_OFFSET UNITYSDK_OFFSET(0x1E5D07F0)
#define SPINE_ANIMATIONSTATE_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x1E5D2250)
#define SPINE_ANIMATIONSTATE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1E5D2350)
#define SPINE_ANIMATIONSTATE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1E5D2330)
#define SPINE_ANIMATIONSTATE_GET_TRACKS_OFFSET UNITYSDK_OFFSET(0x1E5D23E0)
#define SPINE_ANIMATIONSTATE_NEWTRACKENTRY_OFFSET UNITYSDK_OFFSET(0x1E5D1180)
#define SPINE_ANIMATIONSTATE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E5CBC50)
#define SPINE_ANIMATIONSTATE_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5CBC30)
#define SPINE_ANIMATIONSTATE_ONEND_OFFSET UNITYSDK_OFFSET(0x1E5CBC10)
#define SPINE_ANIMATIONSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1E5CBC70)
#define SPINE_ANIMATIONSTATE_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1E5CBBF0)
#define SPINE_ANIMATIONSTATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E5CBBC0)
#define SPINE_ANIMATIONSTATE_QUEUEEVENTS_OFFSET UNITYSDK_OFFSET(0x1E5CF090)
#define SPINE_ANIMATIONSTATE_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E5CC000)
#define SPINE_ANIMATIONSTATE_REMOVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5CBF40)
#define SPINE_ANIMATIONSTATE_REMOVE_END_OFFSET UNITYSDK_OFFSET(0x1E5CBE80)
#define SPINE_ANIMATIONSTATE_REMOVE_EVENT_OFFSET UNITYSDK_OFFSET(0x1E5CC0C0)
#define SPINE_ANIMATIONSTATE_REMOVE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1E5CBDC0)
#define SPINE_ANIMATIONSTATE_REMOVE_START_OFFSET UNITYSDK_OFFSET(0x1E5CBD00)
#define SPINE_ANIMATIONSTATE_SETANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1E5D0C30)
#define SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET UNITYSDK_OFFSET(0x1E5D0A90)
#define SPINE_ANIMATIONSTATE_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E5D0010)
#define SPINE_ANIMATIONSTATE_SETCURRENT_OFFSET UNITYSDK_OFFSET(0x1E5CCA90)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1E5D1830)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1E5D1720)
#define SPINE_ANIMATIONSTATE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1E5D2360)
#define SPINE_ANIMATIONSTATE_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1E5D2340)
#define SPINE_ANIMATIONSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D23F0)
#define SPINE_ANIMATIONSTATE_UPDATEMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x1E5CD040)
#define SPINE_ANIMATIONSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E5CC610)
#define SPINE_ANIMATIONSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D2560)
#define SPINE_ANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CC350)
#define SPINE_ANIMATIONSTATE___CTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1E5D2600)

namespace Spine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 38331;

	class AnimationState : public ::System::Object
	{
	public:
		static ::Spine::Animation** StaticGet_EmptyAnimation()
		{
			return (::Spine::Animation**)Il2CppClass::FromTypeDefinitionIndex(AnimationState_TypeDefinitionIndex)->GetStaticField(0xDF0);
		}
		// static const ::System::Int32 Subsequent = 0x0; // 0x0
		// static const ::System::Int32 First = 0x1; // 0x0
		// static const ::System::Int32 HoldSubsequent = 0x2; // 0x0
		// static const ::System::Int32 HoldFirst = 0x3; // 0x0
		// static const ::System::Int32 HoldMix = 0x4; // 0x0
		// static const ::System::Int32 Setup = 0x1; // 0x0
		// static const ::System::Int32 Current = 0x2; // 0x0
		::Spine::Pool_1<::Spine::TrackEntry*>* trackEntryPool; // 0x10
		::Spine::AnimationState_TrackEntryDelegate* Dispose; // 0x18
		::Spine::AnimationState_TrackEntryDelegate* Complete; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* propertyIds; // 0x28
		::Spine::EventQueue* queue; // 0x30
		::Spine::ExposedList_1<::Spine::Event*>* events; // 0x38
		::Spine::AnimationState_TrackEntryDelegate* Interrupt; // 0x40
		::Spine::AnimationState_TrackEntryDelegate* Start; // 0x48
		::Spine::AnimationState_TrackEntryEventDelegate* Event; // 0x50
		::Spine::AnimationState_TrackEntryDelegate* End; // 0x58
		::Spine::ExposedList_1<::Spine::TrackEntry*>* tracks; // 0x60
		::Spine::AnimationStateData* data; // 0x68
		::System::Int32 unkeyedState; // 0x70
		::System::Boolean animationsChanged; // 0x74
		::System::Single timeScale; // 0x78

		::System::Void _ctor(::Spine::AnimationStateData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationStateData*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE__CCTOR_OFFSET))();
		}

		::System::Void OnStart(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONSTART_OFFSET))(this, a1);
		}

		::System::Void OnInterrupt(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONINTERRUPT_OFFSET))(this, a1);
		}

		::System::Void OnEnd(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONEND_OFFSET))(this, a1);
		}

		::System::Void OnDispose(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONDISPOSE_OFFSET))(this, a1);
		}

		::System::Void OnComplete(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void add_Start(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_START_OFFSET))(this, a1);
		}

		::System::Void remove_Start(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_START_OFFSET))(this, a1);
		}

		::System::Void add_Interrupt(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_INTERRUPT_OFFSET))(this, a1);
		}

		::System::Void remove_Interrupt(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_INTERRUPT_OFFSET))(this, a1);
		}

		::System::Void add_End(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_END_OFFSET))(this, a1);
		}

		::System::Void remove_End(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_END_OFFSET))(this, a1);
		}

		::System::Void add_Dispose(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void remove_Dispose(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void add_Complete(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_COMPLETE_OFFSET))(this, a1);
		}

		::System::Void remove_Complete(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_COMPLETE_OFFSET))(this, a1);
		}

		::System::Void add_Event(::Spine::AnimationState_TrackEntryEventDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_EVENT_OFFSET))(this, a1);
		}

		::System::Void remove_Event(::Spine::AnimationState_TrackEntryEventDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_EVENT_OFFSET))(this, a1);
		}

		::System::Void AssignEventSubscribersFrom(::Spine::AnimationState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ASSIGNEVENTSUBSCRIBERSFROM_OFFSET))(this, a1);
		}

		::System::Void AddEventSubscribersFrom(::Spine::AnimationState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDEVENTSUBSCRIBERSFROM_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_UPDATE_OFFSET))(this, a1);
		}

		::System::Boolean UpdateMixingFrom(::Spine::TrackEntry* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::TrackEntry*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_UPDATEMIXINGFROM_OFFSET))(this, a1, a2);
		}

		::System::Boolean Apply(::Spine::Skeleton* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLY_OFFSET))(this, a1);
		}

		::System::Boolean ApplyEventTimelinesOnly(::Spine::Skeleton* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYEVENTTIMELINESONLY_OFFSET))(this, a1, a2);
		}

		::System::Single ApplyMixingFrom(::Spine::TrackEntry* a1, ::Spine::Skeleton* a2, ::Spine::MixBlend a3)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Skeleton*, ::Spine::MixBlend))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYMIXINGFROM_OFFSET))(this, a1, a2, a3);
		}

		::System::Single ApplyMixingFromEventTimelinesOnly(::Spine::TrackEntry* a1, ::Spine::Skeleton* a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Skeleton*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYMIXINGFROMEVENTTIMELINESONLY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ApplyAttachmentTimeline(::Spine::AttachmentTimeline* a1, ::Spine::Skeleton* a2, ::System::Single a3, ::Spine::MixBlend a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentTimeline*, ::Spine::Skeleton*, ::System::Single, ::Spine::MixBlend, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYATTACHMENTTIMELINE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetAttachment(::Spine::Skeleton* a1, ::Spine::Slot* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Slot*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETATTACHMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void ApplyRotateTimeline(::Spine::RotateTimeline* a1, ::Spine::Skeleton* a2, ::System::Single a3, ::System::Single a4, ::Spine::MixBlend a5, ::Il2CppArray<::System::Single>* a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::Spine::RotateTimeline*, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::MixBlend, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYROTATETIMELINE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void QueueEvents(::Spine::TrackEntry* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_QUEUEEVENTS_OFFSET))(this, a1, a2);
		}

		::System::Void ClearTracks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARTRACKS_OFFSET))(this);
		}

		::System::Void ClearTrack(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARTRACK_OFFSET))(this, a1);
		}

		::System::Void SetCurrent(::System::Int32 a1, ::Spine::TrackEntry* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Spine::TrackEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETCURRENT_OFFSET))(this, a1, a2, a3);
		}

		::Spine::TrackEntry* SetAnimation(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::Spine::TrackEntry* SetAnimation_1(::System::Int32 a1, ::Spine::Animation* a2, ::System::Boolean a3)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::Spine::Animation*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETANIMATION_1_OFFSET))(this, a1, a2, a3);
		}

		::Spine::TrackEntry* AddAnimation(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::Spine::TrackEntry* AddAnimation_1(::System::Int32 a1, ::Spine::Animation* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::Spine::Animation*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDANIMATION_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::Spine::TrackEntry* SetEmptyAnimation(::System::Int32 a1, ::System::Single a2)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETEMPTYANIMATION_OFFSET))(this, a1, a2);
		}

		::Spine::TrackEntry* AddEmptyAnimation(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDEMPTYANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetEmptyAnimations(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETEMPTYANIMATIONS_OFFSET))(this, a1);
		}

		::Spine::TrackEntry* ExpandToIndex(::System::Int32 a1)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_EXPANDTOINDEX_OFFSET))(this, a1);
		}

		::Spine::TrackEntry* NewTrackEntry(::System::Int32 a1, ::Spine::Animation* a2, ::System::Boolean a3, ::Spine::TrackEntry* a4)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::Spine::Animation*, ::System::Boolean, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_NEWTRACKENTRY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearNext(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARNEXT_OFFSET))(this, a1);
		}

		::System::Void AnimationsChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ANIMATIONSCHANGED_OFFSET))(this);
		}

		::System::Void ComputeHold(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_COMPUTEHOLD_OFFSET))(this, a1);
		}

		::Spine::TrackEntry* GetCurrent(::System::Int32 a1)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GETCURRENT_OFFSET))(this, a1);
		}

		::System::Void ClearListenerNotifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARLISTENERNOTIFICATIONS_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::Spine::AnimationStateData* get_Data()
		{
			return ((::Spine::AnimationStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Spine::AnimationStateData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationStateData*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SET_DATA_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::TrackEntry*>* get_Tracks()
		{
			return ((::Spine::ExposedList_1<::Spine::TrackEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_TRACKS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TOSTRING_OFFSET))(this);
		}

		::System::Void __ctor_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE___CTOR_B__45_0_OFFSET))(this);
		}
	};
}
