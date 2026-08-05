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

#define SPINE_TRACKENTRY_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1FB9C6D0)
#define SPINE_TRACKENTRY_ADD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB9C5D0)
#define SPINE_TRACKENTRY_ADD_END_OFFSET UNITYSDK_OFFSET(0x1FB9C4D0)
#define SPINE_TRACKENTRY_ADD_EVENT_OFFSET UNITYSDK_OFFSET(0x1FB9C7D0)
#define SPINE_TRACKENTRY_ADD_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1FB9C3D0)
#define SPINE_TRACKENTRY_ADD_START_OFFSET UNITYSDK_OFFSET(0x1FB9C2D0)
#define SPINE_TRACKENTRY_ALLOWIMMEDIATEQUEUE_OFFSET UNITYSDK_OFFSET(0x1FB9CF30)
#define SPINE_TRACKENTRY_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x1FB9CC80)
#define SPINE_TRACKENTRY_GET_ANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x1FB9CB80)
#define SPINE_TRACKENTRY_GET_ANIMATIONLAST_OFFSET UNITYSDK_OFFSET(0x1FB9CBA0)
#define SPINE_TRACKENTRY_GET_ANIMATIONSTART_OFFSET UNITYSDK_OFFSET(0x1FB9CB60)
#define SPINE_TRACKENTRY_GET_ANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x1FB9CBD0)
#define SPINE_TRACKENTRY_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x1FB9CA70)
#define SPINE_TRACKENTRY_GET_ATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1FB9CCD0)
#define SPINE_TRACKENTRY_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1FB9CAA0)
#define SPINE_TRACKENTRY_GET_DRAWORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1FB9CCF0)
#define SPINE_TRACKENTRY_GET_EVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1FB9CCB0)
#define SPINE_TRACKENTRY_GET_HOLDPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1FB9CDD0)
#define SPINE_TRACKENTRY_GET_INTERRUPTALPHA_OFFSET UNITYSDK_OFFSET(0x1FB9CCA0)
#define SPINE_TRACKENTRY_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FB9CD30)
#define SPINE_TRACKENTRY_GET_ISEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1FB9CE30)
#define SPINE_TRACKENTRY_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1FB9CA80)
#define SPINE_TRACKENTRY_GET_MIXBLEND_OFFSET UNITYSDK_OFFSET(0x1FB9CD90)
#define SPINE_TRACKENTRY_GET_MIXDURATION_OFFSET UNITYSDK_OFFSET(0x1FB9CD70)
#define SPINE_TRACKENTRY_GET_MIXINGFROM_OFFSET UNITYSDK_OFFSET(0x1FB9CDB0)
#define SPINE_TRACKENTRY_GET_MIXINGTO_OFFSET UNITYSDK_OFFSET(0x1FB9CDC0)
#define SPINE_TRACKENTRY_GET_MIXTIME_OFFSET UNITYSDK_OFFSET(0x1FB9CD50)
#define SPINE_TRACKENTRY_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1FB9CD10)
#define SPINE_TRACKENTRY_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1FB9CD20)
#define SPINE_TRACKENTRY_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0x1FB9CDF0)
#define SPINE_TRACKENTRY_GET_SHORTESTROTATION_OFFSET UNITYSDK_OFFSET(0x1FB9CE10)
#define SPINE_TRACKENTRY_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1FB9CC60)
#define SPINE_TRACKENTRY_GET_TRACKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FB9CB00)
#define SPINE_TRACKENTRY_GET_TRACKEND_OFFSET UNITYSDK_OFFSET(0x1FB9CAE0)
#define SPINE_TRACKENTRY_GET_TRACKINDEX_OFFSET UNITYSDK_OFFSET(0x1FB9CA60)
#define SPINE_TRACKENTRY_GET_TRACKTIME_OFFSET UNITYSDK_OFFSET(0x1FB9CAC0)
#define SPINE_TRACKENTRY_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FB9C950)
#define SPINE_TRACKENTRY_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB9C930)
#define SPINE_TRACKENTRY_ONEND_OFFSET UNITYSDK_OFFSET(0x1FB9C910)
#define SPINE_TRACKENTRY_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1FB9C970)
#define SPINE_TRACKENTRY_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1FB9C8F0)
#define SPINE_TRACKENTRY_ONSTART_OFFSET UNITYSDK_OFFSET(0x1FB9C8D0)
#define SPINE_TRACKENTRY_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1FB9C750)
#define SPINE_TRACKENTRY_REMOVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB9C650)
#define SPINE_TRACKENTRY_REMOVE_END_OFFSET UNITYSDK_OFFSET(0x1FB9C550)
#define SPINE_TRACKENTRY_REMOVE_EVENT_OFFSET UNITYSDK_OFFSET(0x1FB9C850)
#define SPINE_TRACKENTRY_REMOVE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1FB9C450)
#define SPINE_TRACKENTRY_REMOVE_START_OFFSET UNITYSDK_OFFSET(0x1FB9C350)
#define SPINE_TRACKENTRY_RESETROTATIONDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1FB9CEA0)
#define SPINE_TRACKENTRY_RESET_OFFSET UNITYSDK_OFFSET(0x1FB9C990)
#define SPINE_TRACKENTRY_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x1FB9CC90)
#define SPINE_TRACKENTRY_SET_ANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x1FB9CB90)
#define SPINE_TRACKENTRY_SET_ANIMATIONLAST_OFFSET UNITYSDK_OFFSET(0x1FB9CBB0)
#define SPINE_TRACKENTRY_SET_ANIMATIONSTART_OFFSET UNITYSDK_OFFSET(0x1FB9CB70)
#define SPINE_TRACKENTRY_SET_ATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1FB9CCE0)
#define SPINE_TRACKENTRY_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1FB9CAB0)
#define SPINE_TRACKENTRY_SET_DRAWORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1FB9CD00)
#define SPINE_TRACKENTRY_SET_EVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1FB9CCC0)
#define SPINE_TRACKENTRY_SET_HOLDPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1FB9CDE0)
#define SPINE_TRACKENTRY_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1FB9CA90)
#define SPINE_TRACKENTRY_SET_MIXBLEND_OFFSET UNITYSDK_OFFSET(0x1FB9CDA0)
#define SPINE_TRACKENTRY_SET_MIXDURATION_OFFSET UNITYSDK_OFFSET(0x1FB9CD80)
#define SPINE_TRACKENTRY_SET_MIXTIME_OFFSET UNITYSDK_OFFSET(0x1FB9CD60)
#define SPINE_TRACKENTRY_SET_REVERSE_OFFSET UNITYSDK_OFFSET(0x1FB9CE00)
#define SPINE_TRACKENTRY_SET_SHORTESTROTATION_OFFSET UNITYSDK_OFFSET(0x1FB9CE20)
#define SPINE_TRACKENTRY_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1FB9CC70)
#define SPINE_TRACKENTRY_SET_TRACKEND_OFFSET UNITYSDK_OFFSET(0x1FB9CAF0)
#define SPINE_TRACKENTRY_SET_TRACKTIME_OFFSET UNITYSDK_OFFSET(0x1FB9CAD0)
#define SPINE_TRACKENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB9CEE0)
#define SPINE_TRACKENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB9CF50)

namespace Spine
{
	inline static constexpr unsigned int TrackEntry_TypeDefinitionIndex = 33471;

	class TrackEntry : public ::System::Object
	{
	public:
		::Spine::AnimationState_TrackEntryDelegate* Complete; // 0x10
		::Spine::AnimationState_TrackEntryDelegate* Interrupt; // 0x18
		::Spine::TrackEntry* previous; // 0x20
		::Spine::TrackEntry* mixingTo; // 0x28
		::Spine::ExposedList_1<::System::Single>* timelinesRotation; // 0x30
		::Spine::AnimationState_TrackEntryEventDelegate* Event; // 0x38
		::Spine::Animation* animation; // 0x40
		::Spine::TrackEntry* next; // 0x48
		::Spine::AnimationState_TrackEntryDelegate* Start; // 0x50
		::Spine::AnimationState_TrackEntryDelegate* End; // 0x58
		::Spine::ExposedList_1<::System::Int32>* timelineMode; // 0x60
		::Spine::ExposedList_1<::Spine::TrackEntry*>* timelineHoldMix; // 0x68
		::Spine::AnimationState_TrackEntryDelegate* Dispose; // 0x70
		::Spine::TrackEntry* mixingFrom; // 0x78
		::System::Single alpha; // 0x80
		::System::Boolean shortestRotation; // 0x84
		::System::Boolean loop; // 0x85
		::System::Boolean reverse; // 0x86
		::System::Boolean holdPrevious; // 0x87
		::System::Single mixTime; // 0x88
		::System::Single mixDuration; // 0x8C
		::System::Single delay; // 0x90
		::System::Single eventThreshold; // 0x94
		::System::Int32 trackIndex; // 0x98
		::System::Single trackLast; // 0x9C
		::System::Single totalAlpha; // 0xA0
		::System::Single drawOrderThreshold; // 0xA4
		::System::Single animationLast; // 0xA8
		::System::Single animationStart; // 0xAC
		::Spine::MixBlend mixBlend; // 0xB0
		::System::Single trackTime; // 0xB4
		::System::Single attachmentThreshold; // 0xB8
		::System::Single trackEnd; // 0xBC
		::System::Single timeScale; // 0xC0
		::System::Single animationEnd; // 0xC4
		::System::Single nextAnimationLast; // 0xC8
		::System::Single interruptAlpha; // 0xCC
		::System::Single nextTrackLast; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY__CTOR_OFFSET))(this);
		}

		::System::Void add_Start(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_START_OFFSET))(this, value);
		}

		::System::Void remove_Start(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_START_OFFSET))(this, value);
		}

		::System::Void add_Interrupt(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_INTERRUPT_OFFSET))(this, value);
		}

		::System::Void remove_Interrupt(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_INTERRUPT_OFFSET))(this, value);
		}

		::System::Void add_End(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_END_OFFSET))(this, value);
		}

		::System::Void remove_End(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_END_OFFSET))(this, value);
		}

		::System::Void add_Dispose(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_DISPOSE_OFFSET))(this, value);
		}

		::System::Void remove_Dispose(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_DISPOSE_OFFSET))(this, value);
		}

		::System::Void add_Complete(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_COMPLETE_OFFSET))(this, value);
		}

		::System::Void remove_Complete(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_COMPLETE_OFFSET))(this, value);
		}

		::System::Void add_Event(::Spine::AnimationState_TrackEntryEventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_EVENT_OFFSET))(this, value);
		}

		::System::Void remove_Event(::Spine::AnimationState_TrackEntryEventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_EVENT_OFFSET))(this, value);
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

		::System::Void OnEvent(::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONEVENT_OFFSET))(this, e);
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

		::System::Void set_Loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_LOOP_OFFSET))(this, value);
		}

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_DELAY_OFFSET))(this);
		}

		::System::Void set_Delay(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_DELAY_OFFSET))(this, value);
		}

		::System::Single get_TrackTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKTIME_OFFSET))(this);
		}

		::System::Void set_TrackTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_TRACKTIME_OFFSET))(this, value);
		}

		::System::Single get_TrackEnd()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKEND_OFFSET))(this);
		}

		::System::Void set_TrackEnd(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_TRACKEND_OFFSET))(this, value);
		}

		::System::Single get_TrackComplete()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKCOMPLETE_OFFSET))(this);
		}

		::System::Single get_AnimationStart()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONSTART_OFFSET))(this);
		}

		::System::Void set_AnimationStart(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ANIMATIONSTART_OFFSET))(this, value);
		}

		::System::Single get_AnimationEnd()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONEND_OFFSET))(this);
		}

		::System::Void set_AnimationEnd(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ANIMATIONEND_OFFSET))(this, value);
		}

		::System::Single get_AnimationLast()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONLAST_OFFSET))(this);
		}

		::System::Void set_AnimationLast(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ANIMATIONLAST_OFFSET))(this, value);
		}

		::System::Single get_AnimationTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONTIME_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_TIMESCALE_OFFSET))(this, value);
		}

		::System::Single get_Alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ALPHA_OFFSET))(this);
		}

		::System::Void set_Alpha(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ALPHA_OFFSET))(this, value);
		}

		::System::Single get_InterruptAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_INTERRUPTALPHA_OFFSET))(this);
		}

		::System::Single get_EventThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_EVENTTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_EventThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_EVENTTHRESHOLD_OFFSET))(this, value);
		}

		::System::Single get_AttachmentThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ATTACHMENTTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_AttachmentThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ATTACHMENTTHRESHOLD_OFFSET))(this, value);
		}

		::System::Single get_DrawOrderThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_DRAWORDERTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_DrawOrderThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_DRAWORDERTHRESHOLD_OFFSET))(this, value);
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

		::System::Void set_MixTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXTIME_OFFSET))(this, value);
		}

		::System::Single get_MixDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXDURATION_OFFSET))(this);
		}

		::System::Void set_MixDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXDURATION_OFFSET))(this, value);
		}

		::Spine::MixBlend get_MixBlend()
		{
			return ((::Spine::MixBlend(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXBLEND_OFFSET))(this);
		}

		::System::Void set_MixBlend(::Spine::MixBlend value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MixBlend))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXBLEND_OFFSET))(this, value);
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

		::System::Void set_HoldPrevious(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_HOLDPREVIOUS_OFFSET))(this, value);
		}

		::System::Boolean get_Reverse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_REVERSE_OFFSET))(this);
		}

		::System::Void set_Reverse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_REVERSE_OFFSET))(this, value);
		}

		::System::Boolean get_ShortestRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_SHORTESTROTATION_OFFSET))(this);
		}

		::System::Void set_ShortestRotation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_SHORTESTROTATION_OFFSET))(this, value);
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
