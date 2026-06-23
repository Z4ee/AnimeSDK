#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class AnimationCurve; }

#define ROOTMOTION_BAKERUTILITIES_ENSUREQUATERNIONCONTINUITY_OFFSET UNITYSDK_OFFSET(0x1E445E90)
#define ROOTMOTION_BAKERUTILITIES_GETREDUCEDKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1E445A60)
#define ROOTMOTION_BAKERUTILITIES_REDUCEKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1E445A20)
#define ROOTMOTION_BAKERUTILITIES_SETLOOPFRAME_OFFSET UNITYSDK_OFFSET(0x1E445DD0)
#define ROOTMOTION_BAKERUTILITIES_SETTANGENTMODE_OFFSET UNITYSDK_OFFSET(0x1E445E80)

namespace RootMotion
{
	inline static constexpr unsigned int BakerUtilities_TypeDefinitionIndex = 38163;

	class BakerUtilities : public ::System::Object
	{
	public:
		static ::System::Void ReduceKeyframes(::UnityEngine::AnimationCurve* curve, ::System::Single maxError)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERUTILITIES_REDUCEKEYFRAMES_OFFSET))(curve, maxError);
		}

		static ::Il2CppArray<::UnityEngine::Keyframe>* GetReducedKeyframes(::UnityEngine::AnimationCurve* curve, ::System::Single maxError)
		{
			return ((::Il2CppArray<::UnityEngine::Keyframe>*(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERUTILITIES_GETREDUCEDKEYFRAMES_OFFSET))(curve, maxError);
		}

		static ::System::Void SetLoopFrame(::System::Single time, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERUTILITIES_SETLOOPFRAME_OFFSET))(time, curve);
		}

		static ::System::Void SetTangentMode(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERUTILITIES_SETTANGENTMODE_OFFSET))(curve);
		}

		static ::UnityEngine::Quaternion EnsureQuaternionContinuity(::UnityEngine::Quaternion lastQ, ::UnityEngine::Quaternion q)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERUTILITIES_ENSUREQUATERNIONCONTINUITY_OFFSET))(lastQ, q);
		}
	};
}
