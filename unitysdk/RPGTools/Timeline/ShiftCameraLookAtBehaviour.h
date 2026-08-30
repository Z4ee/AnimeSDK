#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class AnchorInfo; }
namespace RPGTools::Timeline { class ShiftCameraLookAtClip; }
namespace System { class Object; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8E2560)
#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8E2580)
#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8E2860)
#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8E2570)
#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E2B60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShiftCameraLookAtBehaviour_TypeDefinitionIndex = 48282;

	class ShiftCameraLookAtBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ShiftCameraLookAtClip* _Clip_k__BackingField; // 0x10
		::UnityEngine::Transform* _MoveLookAtTrans; // 0x18
		::RPG::GameCore::AnchorInfo* _StartAnchorInfo; // 0x20
		::RPG::GameCore::AnchorInfo* _EndAnchorInfo; // 0x28
		::UnityEngine::AnimationCurve* _Curve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ShiftCameraLookAtClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ShiftCameraLookAtClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ShiftCameraLookAtClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ShiftCameraLookAtClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
