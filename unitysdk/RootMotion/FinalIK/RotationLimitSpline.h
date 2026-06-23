#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/RotationLimit.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class AnimationCurve; }

#define ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1DD2F460)
#define ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_LIMITROTATION_OFFSET UNITYSDK_OFFSET(0x1DD2F4E0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_LIMITSWING_OFFSET UNITYSDK_OFFSET(0x1DD2F570)
#define ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1DD2F3C0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1DD2F370)
#define ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_SETSPLINE_OFFSET UNITYSDK_OFFSET(0x1DD2F4B0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1DD2F410)
#define ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2FC70)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLimitSpline_TypeDefinitionIndex = 38268;

	class RotationLimitSpline : public ::RootMotion::FinalIK::RotationLimit
	{
	public:
		::System::Single twistLimit; // 0x38
		::UnityEngine::AnimationCurve* spline; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_ASTHREAD_OFFSET))(this);
		}

		::System::Void SetSpline(::Il2CppArray<::UnityEngine::Keyframe>* keyframes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_SETSPLINE_OFFSET))(this, keyframes);
		}

		::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_LIMITROTATION_OFFSET))(this, rotation);
		}

		::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITSPLINE_LIMITSWING_OFFSET))(this, rotation);
		}
	};
}
