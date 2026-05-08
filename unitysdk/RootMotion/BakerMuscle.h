#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }

#define ROOTMOTION_BAKERMUSCLE_MULTIPLYLENGTH_OFFSET UNITYSDK_OFFSET(0x1BF846F0)
#define ROOTMOTION_BAKERMUSCLE_MUSCLENAMETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BF840E0)
#define ROOTMOTION_BAKERMUSCLE_RESET_OFFSET UNITYSDK_OFFSET(0x1BF846A0)
#define ROOTMOTION_BAKERMUSCLE_SETCURVES_OFFSET UNITYSDK_OFFSET(0x1BF84800)
#define ROOTMOTION_BAKERMUSCLE_SETKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1BF849B0)
#define ROOTMOTION_BAKERMUSCLE_SETLOOPFRAME_OFFSET UNITYSDK_OFFSET(0x1BF84A00)
#define ROOTMOTION_BAKERMUSCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF84050)

namespace RootMotion
{
	inline static constexpr unsigned int BakerMuscle_TypeDefinitionIndex = 36517;

	class BakerMuscle : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10
		::System::Int32 muscleIndex; // 0x18
		::System::String* propertyName; // 0x20

		::System::Void _ctor(::System::Int32 muscleIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERMUSCLE__CTOR_OFFSET))(this, muscleIndex);
		}

		::System::String* MuscleNameToPropertyName(::System::String* n)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERMUSCLE_MUSCLENAMETOPROPERTYNAME_OFFSET))(this, n);
		}

		::System::Void MultiplyLength(::UnityEngine::AnimationCurve* curve, ::System::Single mlp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERMUSCLE_MULTIPLYLENGTH_OFFSET))(this, curve, mlp);
		}

		::System::Void SetCurves(::UnityEngine::AnimationClip*& clip, ::System::Single maxError, ::System::Single lengthMlp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERMUSCLE_SETCURVES_OFFSET))(this, clip, maxError, lengthMlp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERMUSCLE_RESET_OFFSET))(this);
		}

		::System::Void SetKeyframe(::System::Single time, ::Il2CppArray<::System::Single>* muscles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERMUSCLE_SETKEYFRAME_OFFSET))(this, time, muscles);
		}

		::System::Void SetLoopFrame(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERMUSCLE_SETLOOPFRAME_OFFSET))(this, time);
		}
	};
}
