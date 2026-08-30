#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ANIMATIONCLIPMOTIONPARAMS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x148730)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimationClipMotionParams_TypeDefinitionIndex = 73158;

	struct alignas(8) AnimationClipMotionParams
	{
		::UnityEngine::AnimationClip* Clip; // 0x10
		::System::String* StateName; // 0x18
		::System::String* ClipName; // 0x20
		::System::Single Duration; // 0x28
		::UnityEngine::AnimationCurve* MotionCurveX; // 0x30
		::UnityEngine::AnimationCurve* MotionCurveY; // 0x38
		::UnityEngine::AnimationCurve* MotionCurveZ; // 0x40
		::UnityEngine::Vector3 MotionVelocity; // 0x48
		::UnityEngine::Vector3 MotionFitVec; // 0x54

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONCLIPMOTIONPARAMS_TOSTRING_OFFSET))(this);
		}
	};
}
