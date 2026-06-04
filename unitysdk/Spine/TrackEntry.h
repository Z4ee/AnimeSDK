#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Animation; }
namespace Spine { class AnimationState_TrackEntryDelegate; }
namespace Spine { class AnimationState_TrackEntryEventDelegate; }
namespace Spine { class Event; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_TRACKENTRY_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1AC9A220)
#define SPINE_TRACKENTRY_ADD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC9A160)
#define SPINE_TRACKENTRY_ADD_END_OFFSET UNITYSDK_OFFSET(0x1AC9A0A0)
#define SPINE_TRACKENTRY_ADD_EVENT_OFFSET UNITYSDK_OFFSET(0x1AC9A2E0)
#define SPINE_TRACKENTRY_ADD_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1AC99FE0)
#define SPINE_TRACKENTRY_ADD_START_OFFSET UNITYSDK_OFFSET(0x1AC99F20)
#define SPINE_TRACKENTRY_ALLOWIMMEDIATEQUEUE_OFFSET UNITYSDK_OFFSET(0x1AC9A9C0)
#define SPINE_TRACKENTRY_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x1AC9A770)
#define SPINE_TRACKENTRY_GET_ANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x1AC9A650)
#define SPINE_TRACKENTRY_GET_ANIMATIONLAST_OFFSET UNITYSDK_OFFSET(0x1AC9A670)
#define SPINE_TRACKENTRY_GET_ANIMATIONSTART_OFFSET UNITYSDK_OFFSET(0x1AC9A630)
#define SPINE_TRACKENTRY_GET_ANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x1AC9A6A0)
#define SPINE_TRACKENTRY_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x1AC9A540)
#define SPINE_TRACKENTRY_GET_ATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1AC9A7C0)
#define SPINE_TRACKENTRY_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1AC9A570)
#define SPINE_TRACKENTRY_GET_DRAWORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1AC9A7E0)
#define SPINE_TRACKENTRY_GET_EVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1AC9A7A0)
#define SPINE_TRACKENTRY_GET_HOLDPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1AC9A8C0)
#define SPINE_TRACKENTRY_GET_INTERRUPTALPHA_OFFSET UNITYSDK_OFFSET(0x1AC9A790)
#define SPINE_TRACKENTRY_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AC9A820)
#define SPINE_TRACKENTRY_GET_ISEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1AC9A920)
#define SPINE_TRACKENTRY_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1AC9A550)
#define SPINE_TRACKENTRY_GET_MIXBLEND_OFFSET UNITYSDK_OFFSET(0x1AC9A880)
#define SPINE_TRACKENTRY_GET_MIXDURATION_OFFSET UNITYSDK_OFFSET(0x1AC9A860)
#define SPINE_TRACKENTRY_GET_MIXINGFROM_OFFSET UNITYSDK_OFFSET(0x1AC9A8A0)
#define SPINE_TRACKENTRY_GET_MIXINGTO_OFFSET UNITYSDK_OFFSET(0x1AC9A8B0)
#define SPINE_TRACKENTRY_GET_MIXTIME_OFFSET UNITYSDK_OFFSET(0x1AC9A840)
#define SPINE_TRACKENTRY_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1AC9A800)
#define SPINE_TRACKENTRY_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1AC9A810)
#define SPINE_TRACKENTRY_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0x1AC9A8E0)
#define SPINE_TRACKENTRY_GET_SHORTESTROTATION_OFFSET UNITYSDK_OFFSET(0x1AC9A900)
#define SPINE_TRACKENTRY_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1AC9A750)
#define SPINE_TRACKENTRY_GET_TRACKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AC9A5D0)
#define SPINE_TRACKENTRY_GET_TRACKEND_OFFSET UNITYSDK_OFFSET(0x1AC9A5B0)
#define SPINE_TRACKENTRY_GET_TRACKINDEX_OFFSET UNITYSDK_OFFSET(0x1AC9A530)
#define SPINE_TRACKENTRY_GET_TRACKTIME_OFFSET UNITYSDK_OFFSET(0x1AC9A590)
#define SPINE_TRACKENTRY_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AC9A420)
#define SPINE_TRACKENTRY_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC9A400)
#define SPINE_TRACKENTRY_ONEND_OFFSET UNITYSDK_OFFSET(0x1AC9A3E0)
#define SPINE_TRACKENTRY_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1AC9A440)
#define SPINE_TRACKENTRY_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1AC9A3C0)
#define SPINE_TRACKENTRY_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AC9A3A0)
#define SPINE_TRACKENTRY_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1AC9A280)
#define SPINE_TRACKENTRY_REMOVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC9A1C0)
#define SPINE_TRACKENTRY_REMOVE_END_OFFSET UNITYSDK_OFFSET(0x1AC9A100)
#define SPINE_TRACKENTRY_REMOVE_EVENT_OFFSET UNITYSDK_OFFSET(0x1AC9A340)
#define SPINE_TRACKENTRY_REMOVE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1AC9A040)
#define SPINE_TRACKENTRY_REMOVE_START_OFFSET UNITYSDK_OFFSET(0x1AC99F80)
#define SPINE_TRACKENTRY_RESETROTATIONDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1AC9A960)
#define SPINE_TRACKENTRY_RESET_OFFSET UNITYSDK_OFFSET(0x1AC9A460)
#define SPINE_TRACKENTRY_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x1AC9A780)
#define SPINE_TRACKENTRY_SET_ANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x1AC9A660)
#define SPINE_TRACKENTRY_SET_ANIMATIONLAST_OFFSET UNITYSDK_OFFSET(0x1AC9A680)
#define SPINE_TRACKENTRY_SET_ANIMATIONSTART_OFFSET UNITYSDK_OFFSET(0x1AC9A640)
#define SPINE_TRACKENTRY_SET_ATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1AC9A7D0)
#define SPINE_TRACKENTRY_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1AC9A580)
#define SPINE_TRACKENTRY_SET_DRAWORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1AC9A7F0)
#define SPINE_TRACKENTRY_SET_EVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1AC9A7B0)
#define SPINE_TRACKENTRY_SET_HOLDPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1AC9A8D0)
#define SPINE_TRACKENTRY_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1AC9A560)
#define SPINE_TRACKENTRY_SET_MIXBLEND_OFFSET UNITYSDK_OFFSET(0x1AC9A890)
#define SPINE_TRACKENTRY_SET_MIXDURATION_OFFSET UNITYSDK_OFFSET(0x1AC9A870)
#define SPINE_TRACKENTRY_SET_MIXTIME_OFFSET UNITYSDK_OFFSET(0x1AC9A850)
#define SPINE_TRACKENTRY_SET_REVERSE_OFFSET UNITYSDK_OFFSET(0x1AC9A8F0)
#define SPINE_TRACKENTRY_SET_SHORTESTROTATION_OFFSET UNITYSDK_OFFSET(0x1AC9A910)
#define SPINE_TRACKENTRY_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1AC9A760)
#define SPINE_TRACKENTRY_SET_TRACKEND_OFFSET UNITYSDK_OFFSET(0x1AC9A5C0)
#define SPINE_TRACKENTRY_SET_TRACKTIME_OFFSET UNITYSDK_OFFSET(0x1AC9A5A0)
#define SPINE_TRACKENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC9A9A0)
#define SPINE_TRACKENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9A9E0)

namespace Spine
{
	inline static constexpr unsigned int TrackEntry_TypeDefinitionIndex = 36693;

	class TrackEntry : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::System::Single>* timelinesRotation; // 0x10
		::Spine::AnimationState_TrackEntryDelegate* Complete; // 0x18
		::Spine::AnimationState_TrackEntryDelegate* Interrupt; // 0x20
		::Spine::AnimationState_TrackEntryDelegate* Start; // 0x28
		::Spine::TrackEntry* previous; // 0x30
		::Spine::TrackEntry* mixingTo; // 0x38
		::Spine::TrackEntry* mixingFrom; // 0x40
		::Spine::AnimationState_TrackEntryEventDelegate* Event; // 0x48
		::Spine::Animation* animation; // 0x50
		::Spine::AnimationState_TrackEntryDelegate* End; // 0x58
		::Spine::AnimationState_TrackEntryDelegate* Dispose; // 0x60
		::Spine::ExposedList_1<::Spine::TrackEntry*>* timelineHoldMix; // 0x68
		::Spine::TrackEntry* next; // 0x70
		::Spine::ExposedList_1<::System::Int32>* timelineMode; // 0x78
		::System::Single interruptAlpha; // 0x80
		::System::Single alpha; // 0x84
		::System::Single animationStart; // 0x88
		::System::Single delay; // 0x8C
		::System::Single trackLast; // 0x90
		::System::Single totalAlpha; // 0x94
		::System::Single animationEnd; // 0x98
		::System::Single timeScale; // 0x9C
		::System::Single eventThreshold; // 0xA0
		::System::Single nextAnimationLast; // 0xA4
		::System::Single drawOrderThreshold; // 0xA8
		::System::Single trackTime; // 0xAC
		::System::Int32 trackIndex; // 0xB0
		::Spine::MixBlend mixBlend; // 0xB4
		::System::Single trackEnd; // 0xB8
		::System::Single mixTime; // 0xBC
		::System::Single attachmentThreshold; // 0xC0
		::System::Single animationLast; // 0xC4
		::System::Boolean shortestRotation; // 0xC8
		::System::Boolean loop; // 0xC9
		::System::Boolean reverse; // 0xCA
		::System::Boolean holdPrevious; // 0xCB
		::System::Single mixDuration; // 0xCC
		::System::Single nextTrackLast; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY__CTOR_OFFSET))(this);
		}

		::System::Void add_Start(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_START_OFFSET))(this, a1);
		}

		::System::Void remove_Start(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_START_OFFSET))(this, a1);
		}

		::System::Void add_Interrupt(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_INTERRUPT_OFFSET))(this, a1);
		}

		::System::Void remove_Interrupt(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_INTERRUPT_OFFSET))(this, a1);
		}

		::System::Void add_End(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_END_OFFSET))(this, a1);
		}

		::System::Void remove_End(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_END_OFFSET))(this, a1);
		}

		::System::Void add_Dispose(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void remove_Dispose(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void add_Complete(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_COMPLETE_OFFSET))(this, a1);
		}

		::System::Void remove_Complete(::Spine::AnimationState_TrackEntryDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_COMPLETE_OFFSET))(this, a1);
		}

		::System::Void add_Event(::Spine::AnimationState_TrackEntryEventDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_EVENT_OFFSET))(this, a1);
		}

		::System::Void remove_Event(::Spine::AnimationState_TrackEntryEventDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_EVENT_OFFSET))(this, a1);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONSTART_OFFSET))(this);
		}

		::System::Void OnInterrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONINTERRUPT_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONEND_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void OnEvent(::Spine::Event* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONEVENT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_RESET_OFFSET))(this);
		}

		::System::Int32 get_TrackIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKINDEX_OFFSET))(this);
		}

		::Spine::Animation* get_Animation()
		{
			return ((::Spine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATION_OFFSET))(this);
		}

		::System::Boolean get_Loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_Loop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_LOOP_OFFSET))(this, a1);
		}

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_DELAY_OFFSET))(this);
		}

		::System::Void set_Delay(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_DELAY_OFFSET))(this, a1);
		}

		::System::Single get_TrackTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKTIME_OFFSET))(this);
		}

		::System::Void set_TrackTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_TRACKTIME_OFFSET))(this, a1);
		}

		::System::Single get_TrackEnd()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKEND_OFFSET))(this);
		}

		::System::Void set_TrackEnd(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_TRACKEND_OFFSET))(this, a1);
		}

		::System::Single get_TrackComplete()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKCOMPLETE_OFFSET))(this);
		}

		::System::Single get_AnimationStart()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONSTART_OFFSET))(this);
		}

		::System::Void set_AnimationStart(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ANIMATIONSTART_OFFSET))(this, a1);
		}

		::System::Single get_AnimationEnd()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONEND_OFFSET))(this);
		}

		::System::Void set_AnimationEnd(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ANIMATIONEND_OFFSET))(this, a1);
		}

		::System::Single get_AnimationLast()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONLAST_OFFSET))(this);
		}

		::System::Void set_AnimationLast(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ANIMATIONLAST_OFFSET))(this, a1);
		}

		::System::Single get_AnimationTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONTIME_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::System::Single get_Alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ALPHA_OFFSET))(this);
		}

		::System::Void set_Alpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ALPHA_OFFSET))(this, a1);
		}

		::System::Single get_InterruptAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_INTERRUPTALPHA_OFFSET))(this);
		}

		::System::Single get_EventThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_EVENTTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_EventThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_EVENTTHRESHOLD_OFFSET))(this, a1);
		}

		::System::Single get_AttachmentThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ATTACHMENTTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_AttachmentThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ATTACHMENTTHRESHOLD_OFFSET))(this, a1);
		}

		::System::Single get_DrawOrderThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_DRAWORDERTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_DrawOrderThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_DRAWORDERTHRESHOLD_OFFSET))(this, a1);
		}

		::Spine::TrackEntry* get_Next()
		{
			return ((::Spine::TrackEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_NEXT_OFFSET))(this);
		}

		::Spine::TrackEntry* get_Previous()
		{
			return ((::Spine::TrackEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_PREVIOUS_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Single get_MixTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXTIME_OFFSET))(this);
		}

		::System::Void set_MixTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXTIME_OFFSET))(this, a1);
		}

		::System::Single get_MixDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXDURATION_OFFSET))(this);
		}

		::System::Void set_MixDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXDURATION_OFFSET))(this, a1);
		}

		::Spine::MixBlend get_MixBlend()
		{
			return ((::Spine::MixBlend(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXBLEND_OFFSET))(this);
		}

		::System::Void set_MixBlend(::Spine::MixBlend a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MixBlend))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXBLEND_OFFSET))(this, a1);
		}

		::Spine::TrackEntry* get_MixingFrom()
		{
			return ((::Spine::TrackEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXINGFROM_OFFSET))(this);
		}

		::Spine::TrackEntry* get_MixingTo()
		{
			return ((::Spine::TrackEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXINGTO_OFFSET))(this);
		}

		::System::Boolean get_HoldPrevious()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_HOLDPREVIOUS_OFFSET))(this);
		}

		::System::Void set_HoldPrevious(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_HOLDPREVIOUS_OFFSET))(this, a1);
		}

		::System::Boolean get_Reverse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_REVERSE_OFFSET))(this);
		}

		::System::Void set_Reverse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_REVERSE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShortestRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_SHORTESTROTATION_OFFSET))(this);
		}

		::System::Void set_ShortestRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_SHORTESTROTATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmptyAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ISEMPTYANIMATION_OFFSET))(this);
		}

		::System::Void ResetRotationDirections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_RESETROTATIONDIRECTIONS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_TOSTRING_OFFSET))(this);
		}

		::System::Void AllowImmediateQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ALLOWIMMEDIATEQUEUE_OFFSET))(this);
		}
	};
}
