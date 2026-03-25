#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_QUATOOLS_CLAMPANGLE_OFFSET UNITYSDK_OFFSET(0x861ADB0)
#define ROOTMOTION_QUATOOLS_CLAMPROTATION_OFFSET UNITYSDK_OFFSET(0x861AB80)
#define ROOTMOTION_QUATOOLS_FROMTOAROUNDAXIS_OFFSET UNITYSDK_OFFSET(0x861A720)
#define ROOTMOTION_QUATOOLS_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x861A960)
#define ROOTMOTION_QUATOOLS_GETAXIS_OFFSET UNITYSDK_OFFSET(0x861AA80)
#define ROOTMOTION_QUATOOLS_LERP_OFFSET UNITYSDK_OFFSET(0x861A540)
#define ROOTMOTION_QUATOOLS_LINEARBLEND_OFFSET UNITYSDK_OFFSET(0x861A620)
#define ROOTMOTION_QUATOOLS_ROTATIONTOLOCALSPACE_OFFSET UNITYSDK_OFFSET(0x861A850)
#define ROOTMOTION_QUATOOLS_SLERP_OFFSET UNITYSDK_OFFSET(0x861A5B0)
#define ROOTMOTION_QUATOOLS_SPHERICALBLEND_OFFSET UNITYSDK_OFFSET(0x861A6A0)
#define ROOTMOTION_QUATOOLS_TOX0Z_OFFSET UNITYSDK_OFFSET(0x861A520)

namespace RootMotion
{
	inline static constexpr unsigned int QuaTools_TypeDefinitionIndex = 35167;

	class QuaTools : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 ToX0Z(::UnityEngine::Vector3 vector3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_TOX0Z_OFFSET))(vector3);
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
	};
}
