#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion { class TQ; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_BAKERHUMANOIDQT_EVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E05BA60)
#define ROOTMOTION_BAKERHUMANOIDQT_EVALUATEROTATION_OFFSET UNITYSDK_OFFSET(0x1E05B990)
#define ROOTMOTION_BAKERHUMANOIDQT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1E05BB00)
#define ROOTMOTION_BAKERHUMANOIDQT_GETCURVESFROMCLIP_OFFSET UNITYSDK_OFFSET(0x1E05BCB0)
#define ROOTMOTION_BAKERHUMANOIDQT_MOVELASTKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1E05C2D0)
#define ROOTMOTION_BAKERHUMANOIDQT_MOVELASTKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1E05C5F0)
#define ROOTMOTION_BAKERHUMANOIDQT_MULTIPLYLENGTH_OFFSET UNITYSDK_OFFSET(0x1E05C700)
#define ROOTMOTION_BAKERHUMANOIDQT_RESET_OFFSET UNITYSDK_OFFSET(0x1E05B780)
#define ROOTMOTION_BAKERHUMANOIDQT_SETCURVES_OFFSET UNITYSDK_OFFSET(0x1E05C810)
#define ROOTMOTION_BAKERHUMANOIDQT_SETIKKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1E05BCC0)
#define ROOTMOTION_BAKERHUMANOIDQT_SETKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1E05C1D0)
#define ROOTMOTION_BAKERHUMANOIDQT_SETLOOPFRAME_OFFSET UNITYSDK_OFFSET(0x1E05C670)
#define ROOTMOTION_BAKERHUMANOIDQT_SETROOTLOOPFRAME_OFFSET UNITYSDK_OFFSET(0x1E05C6F0)
#define ROOTMOTION_BAKERHUMANOIDQT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05B8B0)
#define ROOTMOTION_BAKERHUMANOIDQT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E05B6B0)

namespace RootMotion
{
	inline static constexpr unsigned int BakerHumanoidQT_TypeDefinitionIndex = 38205;

	class BakerHumanoidQT : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::String* Qx; // 0x18
		::System::String* Qy; // 0x20
		::System::String* Qz; // 0x28
		::System::String* Qw; // 0x30
		::System::String* Tx; // 0x38
		::System::String* Ty; // 0x40
		::System::String* Tz; // 0x48
		::UnityEngine::AnimationCurve* rotX; // 0x50
		::UnityEngine::AnimationCurve* rotY; // 0x58
		::UnityEngine::AnimationCurve* rotZ; // 0x60
		::UnityEngine::AnimationCurve* rotW; // 0x68
		::UnityEngine::AnimationCurve* posX; // 0x70
		::UnityEngine::AnimationCurve* posY; // 0x78
		::UnityEngine::AnimationCurve* posZ; // 0x80
		::UnityEngine::AvatarIKGoal goal; // 0x88
		::UnityEngine::Quaternion lastQ; // 0x8C
		::System::Boolean lastQSet; // 0x9C

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* transform, ::UnityEngine::AvatarIKGoal goal, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::AvatarIKGoal, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT__CTOR_1_OFFSET))(this, transform, goal, name);
		}

		::UnityEngine::Quaternion EvaluateRotation(::System::Single time)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_EVALUATEROTATION_OFFSET))(this, time);
		}

		::UnityEngine::Vector3 EvaluatePosition(::System::Single time)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_EVALUATEPOSITION_OFFSET))(this, time);
		}

		::RootMotion::TQ* Evaluate(::System::Single time)
		{
			return ((::RootMotion::TQ*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_EVALUATE_OFFSET))(this, time);
		}

		::System::Void GetCurvesFromClip(::UnityEngine::AnimationClip* clip, ::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_GETCURVESFROMCLIP_OFFSET))(this, clip, animator);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_RESET_OFFSET))(this);
		}

		::System::Void SetIKKeyframes(::System::Single time, ::UnityEngine::Avatar* avatar, ::UnityEngine::Transform* root, ::System::Single humanScale, ::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Avatar*, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_SETIKKEYFRAMES_OFFSET))(this, time, avatar, root, humanScale, bodyPosition, bodyRotation);
		}

		::System::Void SetKeyframes(::System::Single time, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_SETKEYFRAMES_OFFSET))(this, time, pos, rot);
		}

		::System::Void MoveLastKeyframes(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_MOVELASTKEYFRAMES_OFFSET))(this, time);
		}

		::System::Void SetLoopFrame(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_SETLOOPFRAME_OFFSET))(this, time);
		}

		::System::Void SetRootLoopFrame(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_SETROOTLOOPFRAME_OFFSET))(this, time);
		}

		::System::Void MoveLastKeyframe(::System::Single time, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_MOVELASTKEYFRAME_OFFSET))(this, time, curve);
		}

		::System::Void MultiplyLength(::UnityEngine::AnimationCurve* curve, ::System::Single mlp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_MULTIPLYLENGTH_OFFSET))(this, curve, mlp);
		}

		::System::Void SetCurves(::UnityEngine::AnimationClip*& clip, ::System::Single maxError, ::System::Single lengthMlp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERHUMANOIDQT_SETCURVES_OFFSET))(this, clip, maxError, lengthMlp);
		}
	};
}
