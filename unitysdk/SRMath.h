#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRMath_EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SRMATH_ANGLE_OFFSET UNITYSDK_OFFSET(0x1E6BE860)
#define SRMATH_AVERAGE_OFFSET UNITYSDK_OFFSET(0x1E6BE850)
#define SRMATH_EASE_OFFSET UNITYSDK_OFFSET(0x1E6BB420)
#define SRMATH_FACINGNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1E6BE4C0)
#define SRMATH_LERPUNCLAMPED_1_OFFSET UNITYSDK_OFFSET(0x1E6BE470)
#define SRMATH_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1E6BE450)
#define SRMATH_NEARESTANGLE_OFFSET UNITYSDK_OFFSET(0x1E6BE630)
#define SRMATH_SMOOTHCLAMP_OFFSET UNITYSDK_OFFSET(0x1E6BE2C0)
#define SRMATH_SPRINGLERP_1_OFFSET UNITYSDK_OFFSET(0x1E6BDCB0)
#define SRMATH_SPRINGLERP_2_OFFSET UNITYSDK_OFFSET(0x1E6BDE80)
#define SRMATH_SPRINGLERP_3_OFFSET UNITYSDK_OFFSET(0x1E6BE0A0)
#define SRMATH_SPRINGLERP_OFFSET UNITYSDK_OFFSET(0x1E6BDB10)
#define SRMATH_WRAPANGLE_OFFSET UNITYSDK_OFFSET(0x1E6BE600)
#define SRMATH_WRAP_1_OFFSET UNITYSDK_OFFSET(0x1E6BE820)
#define SRMATH_WRAP_OFFSET UNITYSDK_OFFSET(0x1E6BE770)

inline static constexpr unsigned int SRMath_TypeDefinitionIndex = 34683;

class SRMath : public ::System::Object
{
public:
	static ::System::Single Ease(::System::Single a1, ::System::Single a2, ::System::Single a3, ::SRMath_EaseType a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::SRMath_EaseType))((::PBYTE)hIl2Cpp + SRMATH_EASE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single SpringLerp(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_SPRINGLERP_OFFSET))(a1, a2);
	}

	static ::System::Single SpringLerp_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_SPRINGLERP_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 SpringLerp_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_SPRINGLERP_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Quaternion SpringLerp_3(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_SPRINGLERP_3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single SmoothClamp(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::SRMath_EaseType a5)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::SRMath_EaseType))((::PBYTE)hIl2Cpp + SRMATH_SMOOTHCLAMP_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single LerpUnclamped(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 LerpUnclamped_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_LERPUNCLAMPED_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Single FacingNormalized(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SRMATH_FACINGNORMALIZED_OFFSET))(a1, a2);
	}

	static ::System::Single WrapAngle(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SRMATH_WRAPANGLE_OFFSET))(a1);
	}

	static ::System::Single NearestAngle(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_NEARESTANGLE_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Wrap(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SRMATH_WRAP_OFFSET))(a1, a2);
	}

	static ::System::Single Wrap_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_WRAP_1_OFFSET))(a1, a2);
	}

	static ::System::Single Average(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_AVERAGE_OFFSET))(a1, a2);
	}

	static ::System::Single Angle(::UnityEngine::Vector2 a1)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SRMATH_ANGLE_OFFSET))(a1);
	}
};
