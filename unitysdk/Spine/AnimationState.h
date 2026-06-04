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

#define SPINE_ANIMATIONSTATE_ADDANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1AC4BD30)
#define SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET UNITYSDK_OFFSET(0x1AC4BC70)
#define SPINE_ANIMATIONSTATE_ADDEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1AC4C140)
#define SPINE_ANIMATIONSTATE_ADDEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x1AC46DF0)
#define SPINE_ANIMATIONSTATE_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1AC46C30)
#define SPINE_ANIMATIONSTATE_ADD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC46B70)
#define SPINE_ANIMATIONSTATE_ADD_END_OFFSET UNITYSDK_OFFSET(0x1AC46AB0)
#define SPINE_ANIMATIONSTATE_ADD_EVENT_OFFSET UNITYSDK_OFFSET(0x1AC46CF0)
#define SPINE_ANIMATIONSTATE_ADD_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1AC469F0)
#define SPINE_ANIMATIONSTATE_ADD_START_OFFSET UNITYSDK_OFFSET(0x1AC46930)
#define SPINE_ANIMATIONSTATE_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x1AC48A40)
#define SPINE_ANIMATIONSTATE_APPLYATTACHMENTTIMELINE_OFFSET UNITYSDK_OFFSET(0x1AC49440)
#define SPINE_ANIMATIONSTATE_APPLYEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x1AC4A230)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROMEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x1AC4A6E0)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x1AC48B60)
#define SPINE_ANIMATIONSTATE_APPLYROTATETIMELINE_OFFSET UNITYSDK_OFFSET(0x1AC495E0)
#define SPINE_ANIMATIONSTATE_APPLY_OFFSET UNITYSDK_OFFSET(0x1AC48160)
#define SPINE_ANIMATIONSTATE_ASSIGNEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x1AC46DB0)
#define SPINE_ANIMATIONSTATE_CLEARLISTENERNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1AC4CC50)
#define SPINE_ANIMATIONSTATE_CLEARNEXT_OFFSET UNITYSDK_OFFSET(0x1AC47BD0)
#define SPINE_ANIMATIONSTATE_CLEARTRACKS_OFFSET UNITYSDK_OFFSET(0x1AC4ADD0)
#define SPINE_ANIMATIONSTATE_CLEARTRACK_OFFSET UNITYSDK_OFFSET(0x1AC4AE70)
#define SPINE_ANIMATIONSTATE_COMPUTEHOLD_OFFSET UNITYSDK_OFFSET(0x1AC4C4A0)
#define SPINE_ANIMATIONSTATE_EXPANDTOINDEX_OFFSET UNITYSDK_OFFSET(0x1AC4B190)
#define SPINE_ANIMATIONSTATE_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x1AC4CC00)
#define SPINE_ANIMATIONSTATE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1AC4CD00)
#define SPINE_ANIMATIONSTATE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1AC4CCE0)
#define SPINE_ANIMATIONSTATE_GET_TRACKS_OFFSET UNITYSDK_OFFSET(0x1AC4CD90)
#define SPINE_ANIMATIONSTATE_NEWTRACKENTRY_OFFSET UNITYSDK_OFFSET(0x1AC4BB20)
#define SPINE_ANIMATIONSTATE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AC468E0)
#define SPINE_ANIMATIONSTATE_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC468C0)
#define SPINE_ANIMATIONSTATE_ONEND_OFFSET UNITYSDK_OFFSET(0x1AC468A0)
#define SPINE_ANIMATIONSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1AC46900)
#define SPINE_ANIMATIONSTATE_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1AC46880)
#define SPINE_ANIMATIONSTATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AC46850)
#define SPINE_ANIMATIONSTATE_QUEUEEVENTS_OFFSET UNITYSDK_OFFSET(0x1AC49AF0)
#define SPINE_ANIMATIONSTATE_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1AC46C90)
#define SPINE_ANIMATIONSTATE_REMOVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC46BD0)
#define SPINE_ANIMATIONSTATE_REMOVE_END_OFFSET UNITYSDK_OFFSET(0x1AC46B10)
#define SPINE_ANIMATIONSTATE_REMOVE_EVENT_OFFSET UNITYSDK_OFFSET(0x1AC46D50)
#define SPINE_ANIMATIONSTATE_REMOVE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1AC46A50)
#define SPINE_ANIMATIONSTATE_REMOVE_START_OFFSET UNITYSDK_OFFSET(0x1AC46990)
#define SPINE_ANIMATIONSTATE_SETANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1AC4B5D0)
#define SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET UNITYSDK_OFFSET(0x1AC4B430)
#define SPINE_ANIMATIONSTATE_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1AC4A9B0)
#define SPINE_ANIMATIONSTATE_SETCURRENT_OFFSET UNITYSDK_OFFSET(0x1AC47700)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1AC4C1E0)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1AC4C0D0)
#define SPINE_ANIMATIONSTATE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1AC4CD10)
#define SPINE_ANIMATIONSTATE_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1AC4CCF0)
#define SPINE_ANIMATIONSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC4CDA0)
#define SPINE_ANIMATIONSTATE_UPDATEMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x1AC47CB0)
#define SPINE_ANIMATIONSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC47280)
#define SPINE_ANIMATIONSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC4CF00)
#define SPINE_ANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC46FE0)
#define SPINE_ANIMATIONSTATE___CTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1AC4CFA0)

namespace Spine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 36690;

	class AnimationState : public ::System::Object
	{
	public:
		static ::Spine::Animation** StaticGet_EmptyAnimation()
		{
			return (::Spine::Animation**)Il2CppClass::FromTypeDefinitionIndex(AnimationState_TypeDefinitionIndex)->GetStaticField(0xF10);
		}
		// static const ::System::Int32 Subsequent = 0x0; // 0x0
		// static const ::System::Int32 First = 0x1; // 0x0
		// static const ::System::Int32 HoldSubsequent = 0x2; // 0x0
		// static const ::System::Int32 HoldFirst = 0x3; // 0x0
		// static const ::System::Int32 HoldMix = 0x4; // 0x0
		// static const ::System::Int32 Setup = 0x1; // 0x0
		// static const ::System::Int32 Current = 0x2; // 0x0
		::System::Collections::Generic::HashSet_1<::System::String*>* propertyIds; // 0x10
		::Spine::AnimationState_TrackEntryDelegate* End; // 0x18
		::Spine::AnimationState_TrackEntryDelegate* Dispose; // 0x20
		::Spine::ExposedList_1<::Spine::TrackEntry*>* tracks; // 0x28
		::Spine::AnimationState_TrackEntryDelegate* Complete; // 0x30
		::Spine::AnimationStateData* data; // 0x38
		::Spine::EventQueue* queue; // 0x40
		::Spine::ExposedList_1<::Spine::Event*>* events; // 0x48
		::Spine::AnimationState_TrackEntryDelegate* Start; // 0x50
		::Spine::AnimationState_TrackEntryEventDelegate* Event; // 0x58
		::Spine::Pool_1<::Spine::TrackEntry*>* trackEntryPool; // 0x60
		::Spine::AnimationState_TrackEntryDelegate* Interrupt; // 0x68
		::System::Single timeScale; // 0x70
		::System::Boolean animationsChanged; // 0x74
		::System::Int32 unkeyedState; // 0x78

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
