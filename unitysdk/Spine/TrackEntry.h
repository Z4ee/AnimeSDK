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

#define SPINE_TRACKENTRY_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1C47F700)
#define SPINE_TRACKENTRY_ADD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C47F600)
#define SPINE_TRACKENTRY_ADD_END_OFFSET UNITYSDK_OFFSET(0x1C47F500)
#define SPINE_TRACKENTRY_ADD_EVENT_OFFSET UNITYSDK_OFFSET(0x1C47F800)
#define SPINE_TRACKENTRY_ADD_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1C47F400)
#define SPINE_TRACKENTRY_ADD_START_OFFSET UNITYSDK_OFFSET(0x1C47F300)
#define SPINE_TRACKENTRY_ALLOWIMMEDIATEQUEUE_OFFSET UNITYSDK_OFFSET(0x1C47FF80)
#define SPINE_TRACKENTRY_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x1C47FCD0)
#define SPINE_TRACKENTRY_GET_ANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x1C47FBB0)
#define SPINE_TRACKENTRY_GET_ANIMATIONLAST_OFFSET UNITYSDK_OFFSET(0x1C47FBD0)
#define SPINE_TRACKENTRY_GET_ANIMATIONSTART_OFFSET UNITYSDK_OFFSET(0x1C47FB90)
#define SPINE_TRACKENTRY_GET_ANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x1C47FC00)
#define SPINE_TRACKENTRY_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x1C47FAA0)
#define SPINE_TRACKENTRY_GET_ATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C47FD20)
#define SPINE_TRACKENTRY_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1C47FAD0)
#define SPINE_TRACKENTRY_GET_DRAWORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C47FD40)
#define SPINE_TRACKENTRY_GET_EVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C47FD00)
#define SPINE_TRACKENTRY_GET_HOLDPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1C47FE20)
#define SPINE_TRACKENTRY_GET_INTERRUPTALPHA_OFFSET UNITYSDK_OFFSET(0x1C47FCF0)
#define SPINE_TRACKENTRY_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C47FD80)
#define SPINE_TRACKENTRY_GET_ISEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1C47FE80)
#define SPINE_TRACKENTRY_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1C47FAB0)
#define SPINE_TRACKENTRY_GET_MIXBLEND_OFFSET UNITYSDK_OFFSET(0x1C47FDE0)
#define SPINE_TRACKENTRY_GET_MIXDURATION_OFFSET UNITYSDK_OFFSET(0x1C47FDC0)
#define SPINE_TRACKENTRY_GET_MIXINGFROM_OFFSET UNITYSDK_OFFSET(0x1C47FE00)
#define SPINE_TRACKENTRY_GET_MIXINGTO_OFFSET UNITYSDK_OFFSET(0x1C47FE10)
#define SPINE_TRACKENTRY_GET_MIXTIME_OFFSET UNITYSDK_OFFSET(0x1C47FDA0)
#define SPINE_TRACKENTRY_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1C47FD60)
#define SPINE_TRACKENTRY_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1C47FD70)
#define SPINE_TRACKENTRY_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0x1C47FE40)
#define SPINE_TRACKENTRY_GET_SHORTESTROTATION_OFFSET UNITYSDK_OFFSET(0x1C47FE60)
#define SPINE_TRACKENTRY_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1C47FCB0)
#define SPINE_TRACKENTRY_GET_TRACKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C47FB30)
#define SPINE_TRACKENTRY_GET_TRACKEND_OFFSET UNITYSDK_OFFSET(0x1C47FB10)
#define SPINE_TRACKENTRY_GET_TRACKINDEX_OFFSET UNITYSDK_OFFSET(0x1C47FA90)
#define SPINE_TRACKENTRY_GET_TRACKTIME_OFFSET UNITYSDK_OFFSET(0x1C47FAF0)
#define SPINE_TRACKENTRY_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C47F980)
#define SPINE_TRACKENTRY_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C47F960)
#define SPINE_TRACKENTRY_ONEND_OFFSET UNITYSDK_OFFSET(0x1C47F940)
#define SPINE_TRACKENTRY_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1C47F9A0)
#define SPINE_TRACKENTRY_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1C47F920)
#define SPINE_TRACKENTRY_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C47F900)
#define SPINE_TRACKENTRY_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1C47F780)
#define SPINE_TRACKENTRY_REMOVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C47F680)
#define SPINE_TRACKENTRY_REMOVE_END_OFFSET UNITYSDK_OFFSET(0x1C47F580)
#define SPINE_TRACKENTRY_REMOVE_EVENT_OFFSET UNITYSDK_OFFSET(0x1C47F880)
#define SPINE_TRACKENTRY_REMOVE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1C47F480)
#define SPINE_TRACKENTRY_REMOVE_START_OFFSET UNITYSDK_OFFSET(0x1C47F380)
#define SPINE_TRACKENTRY_RESETROTATIONDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1C47FEF0)
#define SPINE_TRACKENTRY_RESET_OFFSET UNITYSDK_OFFSET(0x1C47F9C0)
#define SPINE_TRACKENTRY_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x1C47FCE0)
#define SPINE_TRACKENTRY_SET_ANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x1C47FBC0)
#define SPINE_TRACKENTRY_SET_ANIMATIONLAST_OFFSET UNITYSDK_OFFSET(0x1C47FBE0)
#define SPINE_TRACKENTRY_SET_ANIMATIONSTART_OFFSET UNITYSDK_OFFSET(0x1C47FBA0)
#define SPINE_TRACKENTRY_SET_ATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C47FD30)
#define SPINE_TRACKENTRY_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1C47FAE0)
#define SPINE_TRACKENTRY_SET_DRAWORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C47FD50)
#define SPINE_TRACKENTRY_SET_EVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C47FD10)
#define SPINE_TRACKENTRY_SET_HOLDPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1C47FE30)
#define SPINE_TRACKENTRY_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1C47FAC0)
#define SPINE_TRACKENTRY_SET_MIXBLEND_OFFSET UNITYSDK_OFFSET(0x1C47FDF0)
#define SPINE_TRACKENTRY_SET_MIXDURATION_OFFSET UNITYSDK_OFFSET(0x1C47FDD0)
#define SPINE_TRACKENTRY_SET_MIXTIME_OFFSET UNITYSDK_OFFSET(0x1C47FDB0)
#define SPINE_TRACKENTRY_SET_REVERSE_OFFSET UNITYSDK_OFFSET(0x1C47FE50)
#define SPINE_TRACKENTRY_SET_SHORTESTROTATION_OFFSET UNITYSDK_OFFSET(0x1C47FE70)
#define SPINE_TRACKENTRY_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1C47FCC0)
#define SPINE_TRACKENTRY_SET_TRACKEND_OFFSET UNITYSDK_OFFSET(0x1C47FB20)
#define SPINE_TRACKENTRY_SET_TRACKTIME_OFFSET UNITYSDK_OFFSET(0x1C47FB00)
#define SPINE_TRACKENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C47FF30)
#define SPINE_TRACKENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47FFA0)

namespace Spine
{
	inline static constexpr unsigned int TrackEntry_TypeDefinitionIndex = 31285;

	class TrackEntry : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::System::Single>* timelinesRotation; // 0x10
		::Spine::AnimationState_TrackEntryDelegate* End; // 0x18
		::Spine::Animation* animation; // 0x20
		::Spine::TrackEntry* previous; // 0x28
		::Spine::ExposedList_1<::System::Int32>* timelineMode; // 0x30
		::Spine::TrackEntry* mixingFrom; // 0x38
		::Spine::ExposedList_1<::Spine::TrackEntry*>* timelineHoldMix; // 0x40
		::Spine::AnimationState_TrackEntryDelegate* Interrupt; // 0x48
		::Spine::AnimationState_TrackEntryDelegate* Complete; // 0x50
		::Spine::AnimationState_TrackEntryEventDelegate* Event; // 0x58
		::Spine::TrackEntry* next; // 0x60
		::Spine::AnimationState_TrackEntryDelegate* Start; // 0x68
		::Spine::TrackEntry* mixingTo; // 0x70
		::Spine::AnimationState_TrackEntryDelegate* Dispose; // 0x78
		::System::Boolean loop; // 0x80
		::System::Boolean reverse; // 0x81
		::System::Boolean holdPrevious; // 0x82
		::System::Boolean shortestRotation; // 0x83
		::System::Single trackLast; // 0x84
		::System::Single trackEnd; // 0x88
		::System::Single timeScale; // 0x8C
		::System::Single nextTrackLast; // 0x90
		::System::Single drawOrderThreshold; // 0x94
		::System::Single trackTime; // 0x98
		::System::Single mixDuration; // 0x9C
		::System::Single eventThreshold; // 0xA0
		::System::Single nextAnimationLast; // 0xA4
		::System::Single delay; // 0xA8
		::Spine::MixBlend mixBlend; // 0xAC
		::System::Single mixTime; // 0xB0
		::System::Single attachmentThreshold; // 0xB4
		::System::Single totalAlpha; // 0xB8
		::System::Single alpha; // 0xBC
		::System::Single interruptAlpha; // 0xC0
		::System::Single animationStart; // 0xC4
		::System::Single animationLast; // 0xC8
		::System::Int32 trackIndex; // 0xCC
		::System::Single animationEnd; // 0xD0

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
