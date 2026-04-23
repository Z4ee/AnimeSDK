#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRMath_EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SRMATH_ANGLE_OFFSET UNITYSDK_OFFSET(0x19EB4CC0)
#define SRMATH_AVERAGE_OFFSET UNITYSDK_OFFSET(0x19EB4CB0)
#define SRMATH_EASE_OFFSET UNITYSDK_OFFSET(0x19EB1880)
#define SRMATH_FACINGNORMALIZED_OFFSET UNITYSDK_OFFSET(0x19EB4920)
#define SRMATH_LERPUNCLAMPED_1_OFFSET UNITYSDK_OFFSET(0x19EB48D0)
#define SRMATH_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x19EB48B0)
#define SRMATH_NEARESTANGLE_OFFSET UNITYSDK_OFFSET(0x19EB4A90)
#define SRMATH_SMOOTHCLAMP_OFFSET UNITYSDK_OFFSET(0x19EB4720)
#define SRMATH_SPRINGLERP_1_OFFSET UNITYSDK_OFFSET(0x19EB4110)
#define SRMATH_SPRINGLERP_2_OFFSET UNITYSDK_OFFSET(0x19EB42E0)
#define SRMATH_SPRINGLERP_3_OFFSET UNITYSDK_OFFSET(0x19EB4500)
#define SRMATH_SPRINGLERP_OFFSET UNITYSDK_OFFSET(0x19EB3F70)
#define SRMATH_WRAPANGLE_OFFSET UNITYSDK_OFFSET(0x19EB4A60)
#define SRMATH_WRAP_1_OFFSET UNITYSDK_OFFSET(0x19EB4C80)
#define SRMATH_WRAP_OFFSET UNITYSDK_OFFSET(0x19EB4BD0)

inline static constexpr unsigned int SRMath_TypeDefinitionIndex = 33263;

class SRMath : public ::System::Object
{
public:
	static ::System::Single Ease(::System::Single from, ::System::Single to, ::System::Single t, ::SRMath_EaseType type)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::SRMath_EaseType))((::PBYTE)hIl2Cpp + SRMATH_EASE_OFFSET))(from, to, t, type);
	}

	static ::System::Single SpringLerp(::System::Single strength, ::System::Single deltaTime)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_SPRINGLERP_OFFSET))(strength, deltaTime);
	}

	static ::System::Single SpringLerp_1(::System::Single from, ::System::Single to, ::System::Single strength, ::System::Single deltaTime)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_SPRINGLERP_1_OFFSET))(from, to, strength, deltaTime);
	}

	static ::UnityEngine::Vector3 SpringLerp_2(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::System::Single strength, ::System::Single deltaTime)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_SPRINGLERP_2_OFFSET))(from, to, strength, deltaTime);
	}

	static ::UnityEngine::Quaternion SpringLerp_3(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to, ::System::Single strength, ::System::Single deltaTime)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_SPRINGLERP_3_OFFSET))(from, to, strength, deltaTime);
	}

	static ::System::Single SmoothClamp(::System::Single value, ::System::Single min, ::System::Single max, ::System::Single scrollMax, ::SRMath_EaseType easeType)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::SRMath_EaseType))((::PBYTE)hIl2Cpp + SRMATH_SMOOTHCLAMP_OFFSET))(value, min, max, scrollMax, easeType);
	}

	static ::System::Single LerpUnclamped(::System::Single from, ::System::Single to, ::System::Single t)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_LERPUNCLAMPED_OFFSET))(from, to, t);
	}

	static ::UnityEngine::Vector3 LerpUnclamped_1(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::System::Single t)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_LERPUNCLAMPED_1_OFFSET))(from, to, t);
	}

	static ::System::Single FacingNormalized(::UnityEngine::Vector3 dir1, ::UnityEngine::Vector3 dir2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SRMATH_FACINGNORMALIZED_OFFSET))(dir1, dir2);
	}

	static ::System::Single WrapAngle(::System::Single angle)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SRMATH_WRAPANGLE_OFFSET))(angle);
	}

	static ::System::Single NearestAngle(::System::Single to, ::System::Single angle1, ::System::Single angle2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_NEARESTANGLE_OFFSET))(to, angle1, angle2);
	}

	static ::System::Int32 Wrap(::System::Int32 max, ::System::Int32 value)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SRMATH_WRAP_OFFSET))(max, value);
	}

	static ::System::Single Wrap_1(::System::Single max, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_WRAP_1_OFFSET))(max, value);
	}

	static ::System::Single Average(::System::Single v1, ::System::Single v2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_AVERAGE_OFFSET))(v1, v2);
	}

	static ::System::Single Angle(::UnityEngine::Vector2 direction)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SRMATH_ANGLE_OFFSET))(direction);
	}
};
