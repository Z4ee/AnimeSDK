#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_QUATOOLS_CLAMPANGLE_OFFSET UNITYSDK_OFFSET(0x1E529620)
#define ROOTMOTION_QUATOOLS_CLAMPROTATION_OFFSET UNITYSDK_OFFSET(0x1E5293F0)
#define ROOTMOTION_QUATOOLS_FROMTOAROUNDAXIS_OFFSET UNITYSDK_OFFSET(0x1E528DC0)
#define ROOTMOTION_QUATOOLS_FROMTOROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x1E529120)
#define ROOTMOTION_QUATOOLS_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x1E529000)
#define ROOTMOTION_QUATOOLS_GETAXIS_OFFSET UNITYSDK_OFFSET(0x1E5292F0)
#define ROOTMOTION_QUATOOLS_GETBANK_1_OFFSET UNITYSDK_OFFSET(0x1E5285F0)
#define ROOTMOTION_QUATOOLS_GETBANK_OFFSET UNITYSDK_OFFSET(0x1E527CB0)
#define ROOTMOTION_QUATOOLS_GETPITCH_1_OFFSET UNITYSDK_OFFSET(0x1E5283A0)
#define ROOTMOTION_QUATOOLS_GETPITCH_OFFSET UNITYSDK_OFFSET(0x1E527B80)
#define ROOTMOTION_QUATOOLS_GETYAW_1_OFFSET UNITYSDK_OFFSET(0x1E528100)
#define ROOTMOTION_QUATOOLS_GETYAW_OFFSET UNITYSDK_OFFSET(0x1E527A30)
#define ROOTMOTION_QUATOOLS_LERP_OFFSET UNITYSDK_OFFSET(0x1E528BE0)
#define ROOTMOTION_QUATOOLS_LINEARBLEND_OFFSET UNITYSDK_OFFSET(0x1E528CC0)
#define ROOTMOTION_QUATOOLS_MATCHROTATION_OFFSET UNITYSDK_OFFSET(0x1E5297C0)
#define ROOTMOTION_QUATOOLS_MIRRORYZ_1_OFFSET UNITYSDK_OFFSET(0x1E529F00)
#define ROOTMOTION_QUATOOLS_MIRRORYZ_OFFSET UNITYSDK_OFFSET(0x1E529B90)
#define ROOTMOTION_QUATOOLS_ROTATIONTOLOCALSPACE_OFFSET UNITYSDK_OFFSET(0x1E528EF0)
#define ROOTMOTION_QUATOOLS_SLERP_OFFSET UNITYSDK_OFFSET(0x1E528C50)
#define ROOTMOTION_QUATOOLS_SPHERICALBLEND_OFFSET UNITYSDK_OFFSET(0x1E528D40)
#define ROOTMOTION_QUATOOLS_TOBIPOLAR_1_OFFSET UNITYSDK_OFFSET(0x1E529B40)
#define ROOTMOTION_QUATOOLS_TOBIPOLAR_OFFSET UNITYSDK_OFFSET(0x1E529A50)

namespace RootMotion
{
	inline static constexpr unsigned int QuaTools_TypeDefinitionIndex = 38315;

	class QuaTools : public ::System::Object
	{
	public:
		static ::System::Single GetYaw(::UnityEngine::Quaternion space, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_GETYAW_OFFSET))(space, forward);
		}

		static ::System::Single GetPitch(::UnityEngine::Quaternion space, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_GETPITCH_OFFSET))(space, forward);
		}

		static ::System::Single GetBank(::UnityEngine::Quaternion space, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_GETBANK_OFFSET))(space, forward, up);
		}

		static ::System::Single GetYaw_1(::UnityEngine::Quaternion space, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_GETYAW_1_OFFSET))(space, rotation);
		}

		static ::System::Single GetPitch_1(::UnityEngine::Quaternion space, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_GETPITCH_1_OFFSET))(space, rotation);
		}

		static ::System::Single GetBank_1(::UnityEngine::Quaternion space, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_GETBANK_1_OFFSET))(space, rotation);
		}

		static ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion fromRotation, ::UnityEngine::Quaternion toRotation, ::System::Single weight)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_LERP_OFFSET))(fromRotation, toRotation, weight);
		}

		static ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion fromRotation, ::UnityEngine::Quaternion toRotation, ::System::Single weight)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_SLERP_OFFSET))(fromRotation, toRotation, weight);
		}

		static ::UnityEngine::Quaternion LinearBlend(::UnityEngine::Quaternion q, ::System::Single weight)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_LINEARBLEND_OFFSET))(q, weight);
		}

		static ::UnityEngine::Quaternion SphericalBlend(::UnityEngine::Quaternion q, ::System::Single weight)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_SPHERICALBLEND_OFFSET))(q, weight);
		}

		static ::UnityEngine::Quaternion FromToAroundAxis(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection, ::UnityEngine::Vector3 axis)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_FROMTOAROUNDAXIS_OFFSET))(fromDirection, toDirection, axis);
		}

		static ::UnityEngine::Quaternion RotationToLocalSpace(::UnityEngine::Quaternion space, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_ROTATIONTOLOCALSPACE_OFFSET))(space, rotation);
		}

		static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_FROMTOROTATION_OFFSET))(from, to);
		}

		static ::UnityEngine::Quaternion FromToRotationDelta(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_FROMTOROTATIONDELTA_OFFSET))(from, to);
		}

		static ::UnityEngine::Vector3 GetAxis(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_GETAXIS_OFFSET))(v);
		}

		static ::UnityEngine::Quaternion ClampRotation(::UnityEngine::Quaternion rotation, ::System::Single clampWeight, ::System::Int32 clampSmoothing)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_CLAMPROTATION_OFFSET))(rotation, clampWeight, clampSmoothing);
		}

		static ::System::Single ClampAngle(::System::Single angle, ::System::Single clampWeight, ::System::Int32 clampSmoothing)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_CLAMPANGLE_OFFSET))(angle, clampWeight, clampSmoothing);
		}

		static ::UnityEngine::Quaternion MatchRotation(::UnityEngine::Quaternion targetRotation, ::UnityEngine::Vector3 targetAxis1, ::UnityEngine::Vector3 targetAxis2, ::UnityEngine::Vector3 axis1, ::UnityEngine::Vector3 axis2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_MATCHROTATION_OFFSET))(targetRotation, targetAxis1, targetAxis2, axis1, axis2);
		}

		static ::UnityEngine::Vector3 ToBiPolar(::UnityEngine::Vector3 euler)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_TOBIPOLAR_OFFSET))(euler);
		}

		static ::System::Single ToBiPolar_1(::System::Single angle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_TOBIPOLAR_1_OFFSET))(angle);
		}

		static ::UnityEngine::Quaternion MirrorYZ(::UnityEngine::Quaternion r, ::UnityEngine::Quaternion space)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_MIRRORYZ_OFFSET))(r, space);
		}

		static ::UnityEngine::Quaternion MirrorYZ_1(::UnityEngine::Quaternion r)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_MIRRORYZ_1_OFFSET))(r);
		}
	};
}
