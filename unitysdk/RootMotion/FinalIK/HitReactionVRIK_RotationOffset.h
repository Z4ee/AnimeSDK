#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/HitReactionVRIK_Offset.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class HitReactionVRIK_RotationOffset_RotationOffsetLink; }
namespace RootMotion::FinalIK { class VRIK; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Rigidbody; }

#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_CROSSFADESTART_OFFSET UNITYSDK_OFFSET(0x1C13E590)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C13E480)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_HIT_OFFSET UNITYSDK_OFFSET(0x1C13E020)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ONAPPLY_OFFSET UNITYSDK_OFFSET(0x1C13E600)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13EBB0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReactionVRIK_RotationOffset_TypeDefinitionIndex = 36706;

	class HitReactionVRIK_RotationOffset : public ::RootMotion::FinalIK::HitReactionVRIK_Offset
	{
	public:
		::System::Int32 curveIndex; // 0x48
		::Il2CppArray<::RootMotion::FinalIK::HitReactionVRIK_RotationOffset_RotationOffsetLink*>* offsetLinks; // 0x50
		::UnityEngine::Rigidbody* rigidbody; // 0x58
		::UnityEngine::Vector3 comAxis; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void Hit(::UnityEngine::Vector3 force, ::Il2CppArray<::UnityEngine::AnimationCurve*>* curves, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_HIT_OFFSET))(this, force, curves, point);
		}

		::System::Single GetLength(::Il2CppArray<::UnityEngine::AnimationCurve*>* curves)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::UnityEngine::AnimationCurve*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_GETLENGTH_OFFSET))(this, curves);
		}

		::System::Void CrossFadeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_CROSSFADESTART_OFFSET))(this);
		}

		::System::Void OnApply(::RootMotion::FinalIK::VRIK* ik, ::Il2CppArray<::UnityEngine::AnimationCurve*>* curves, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VRIK*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ONAPPLY_OFFSET))(this, ik, curves, weight);
		}
	};
}
