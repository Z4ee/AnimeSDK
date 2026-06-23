#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SIRENIX_UTILITIES_MATHUTILITIES_ABS_OFFSET UNITYSDK_OFFSET(0x1DE50CD0)
#define SIRENIX_UTILITIES_MATHUTILITIES_BOUNCEEASEINFASTOUT_OFFSET UNITYSDK_OFFSET(0x1DE50930)
#define SIRENIX_UTILITIES_MATHUTILITIES_BOUNCE_OFFSET UNITYSDK_OFFSET(0x1DE50B00)
#define SIRENIX_UTILITIES_MATHUTILITIES_CLAMPWRAPANGLE_OFFSET UNITYSDK_OFFSET(0x1DE51D30)
#define SIRENIX_UTILITIES_MATHUTILITIES_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x1DE50F70)
#define SIRENIX_UTILITIES_MATHUTILITIES_CLAMP_OFFSET UNITYSDK_OFFSET(0x1DE50EF0)
#define SIRENIX_UTILITIES_MATHUTILITIES_COMPUTEBYTEARRAYHASH_OFFSET UNITYSDK_OFFSET(0x1DE50FD0)
#define SIRENIX_UTILITIES_MATHUTILITIES_DISCARDLEASTSIGNIFICANTDECIMAL_OFFSET UNITYSDK_OFFSET(0x1DE51BA0)
#define SIRENIX_UTILITIES_MATHUTILITIES_EASEINELASTIC_OFFSET UNITYSDK_OFFSET(0x1DE50B30)
#define SIRENIX_UTILITIES_MATHUTILITIES_EASEINOUT_OFFSET UNITYSDK_OFFSET(0x1DE50E90)
#define SIRENIX_UTILITIES_MATHUTILITIES_EASEOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x1DE50D50)
#define SIRENIX_UTILITIES_MATHUTILITIES_FRACT_1_OFFSET UNITYSDK_OFFSET(0x1DE507F0)
#define SIRENIX_UTILITIES_MATHUTILITIES_FRACT_2_OFFSET UNITYSDK_OFFSET(0x1DE50870)
#define SIRENIX_UTILITIES_MATHUTILITIES_FRACT_OFFSET UNITYSDK_OFFSET(0x1DE507B0)
#define SIRENIX_UTILITIES_MATHUTILITIES_GETNUMBEROFDECIMALSFORMINIMUMDIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1DE51CF0)
#define SIRENIX_UTILITIES_MATHUTILITIES_HERMITE01_OFFSET UNITYSDK_OFFSET(0x1DE50970)
#define SIRENIX_UTILITIES_MATHUTILITIES_HERMITE_OFFSET UNITYSDK_OFFSET(0x1DE50670)
#define SIRENIX_UTILITIES_MATHUTILITIES_INFINITELINEINTERSECT_OFFSET UNITYSDK_OFFSET(0x1DE51570)
#define SIRENIX_UTILITIES_MATHUTILITIES_INTERPOLATEPOINTS_OFFSET UNITYSDK_OFFSET(0x1DE510C0)
#define SIRENIX_UTILITIES_MATHUTILITIES_LERPUNCLAMPED_1_OFFSET UNITYSDK_OFFSET(0x1DE50AC0)
#define SIRENIX_UTILITIES_MATHUTILITIES_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1DE50A80)
#define SIRENIX_UTILITIES_MATHUTILITIES_LINEARSTEP_OFFSET UNITYSDK_OFFSET(0x1DE51970)
#define SIRENIX_UTILITIES_MATHUTILITIES_LINEDISTTOPLANE_OFFSET UNITYSDK_OFFSET(0x1DE516B0)
#define SIRENIX_UTILITIES_MATHUTILITIES_LINEINTERSECTSLINE_OFFSET UNITYSDK_OFFSET(0x1DE513E0)
#define SIRENIX_UTILITIES_MATHUTILITIES_POINTDISTANCETOLINE_OFFSET UNITYSDK_OFFSET(0x1DE50600)
#define SIRENIX_UTILITIES_MATHUTILITIES_POW_OFFSET UNITYSDK_OFFSET(0x1DE50C60)
#define SIRENIX_UTILITIES_MATHUTILITIES_RAYDISTTOPLANE_OFFSET UNITYSDK_OFFSET(0x1DE51740)
#define SIRENIX_UTILITIES_MATHUTILITIES_ROTATEPOINT_1_OFFSET UNITYSDK_OFFSET(0x1DE51850)
#define SIRENIX_UTILITIES_MATHUTILITIES_ROTATEPOINT_OFFSET UNITYSDK_OFFSET(0x1DE517B0)
#define SIRENIX_UTILITIES_MATHUTILITIES_ROUNDBASEDONMINIMUMDIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1DE51B00)
#define SIRENIX_UTILITIES_MATHUTILITIES_SIGN_OFFSET UNITYSDK_OFFSET(0x1DE50D00)
#define SIRENIX_UTILITIES_MATHUTILITIES_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x1DE51930)
#define SIRENIX_UTILITIES_MATHUTILITIES_STACKHERMITE01_OFFSET UNITYSDK_OFFSET(0x1DE509B0)
#define SIRENIX_UTILITIES_MATHUTILITIES_STACKHERMITE_OFFSET UNITYSDK_OFFSET(0x1DE506B0)
#define SIRENIX_UTILITIES_MATHUTILITIES_WRAP_1_OFFSET UNITYSDK_OFFSET(0x1DE51A30)
#define SIRENIX_UTILITIES_MATHUTILITIES_WRAP_2_OFFSET UNITYSDK_OFFSET(0x1DE51AB0)
#define SIRENIX_UTILITIES_MATHUTILITIES_WRAP_OFFSET UNITYSDK_OFFSET(0x1DE519A0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int MathUtilities_TypeDefinitionIndex = 6498;

	class MathUtilities : public ::System::Object
	{
	public:
		// static const ::System::Single ZERO_TOLERANCE; // 0x0

		static ::System::Single PointDistanceToLine(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_POINTDISTANCETOLINE_OFFSET))(point, a, b);
		}

		static ::System::Single Hermite(::System::Single start, ::System::Single end, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_HERMITE_OFFSET))(start, end, t);
		}

		static ::System::Single StackHermite(::System::Single start, ::System::Single end, ::System::Single t, ::System::Int32 count)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_STACKHERMITE_OFFSET))(start, end, t, count);
		}

		static ::System::Single Fract(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_FRACT_OFFSET))(value);
		}

		static ::UnityEngine::Vector2 Fract_1(::UnityEngine::Vector2 value)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_FRACT_1_OFFSET))(value);
		}

		static ::UnityEngine::Vector3 Fract_2(::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_FRACT_2_OFFSET))(value);
		}

		static ::System::Single BounceEaseInFastOut(::System::Single t)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_BOUNCEEASEINFASTOUT_OFFSET))(t);
		}

		static ::System::Single Hermite01(::System::Single t)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_HERMITE01_OFFSET))(t);
		}

		static ::System::Single StackHermite01(::System::Single t, ::System::Int32 count)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_STACKHERMITE01_OFFSET))(t, count);
		}

		static ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::System::Single amount)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_LERPUNCLAMPED_OFFSET))(from, to, amount);
		}

		static ::UnityEngine::Vector2 LerpUnclamped_1(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, ::System::Single amount)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_LERPUNCLAMPED_1_OFFSET))(from, to, amount);
		}

		static ::System::Single Bounce(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_BOUNCE_OFFSET))(value);
		}

		static ::System::Single EaseInElastic(::System::Single value, ::System::Single amplitude, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_EASEINELASTIC_OFFSET))(value, amplitude, length);
		}

		static ::UnityEngine::Vector3 Pow(::UnityEngine::Vector3 v, ::System::Single p)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_POW_OFFSET))(v, p);
		}

		static ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_ABS_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 Sign(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_SIGN_OFFSET))(v);
		}

		static ::System::Single EaseOutElastic(::System::Single value, ::System::Single amplitude, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_EASEOUTELASTIC_OFFSET))(value, amplitude, length);
		}

		static ::System::Single EaseInOut(::System::Single t)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_EASEINOUT_OFFSET))(t);
		}

		static ::UnityEngine::Vector3 Clamp(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_CLAMP_OFFSET))(value, min, max);
		}

		static ::UnityEngine::Vector2 Clamp_1(::UnityEngine::Vector2 value, ::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_CLAMP_1_OFFSET))(value, min, max);
		}

		static ::System::Int32 ComputeByteArrayHash(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_COMPUTEBYTEARRAYHASH_OFFSET))(data);
		}

		static ::UnityEngine::Vector3 InterpolatePoints(::Il2CppArray<::UnityEngine::Vector3>* path, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_INTERPOLATEPOINTS_OFFSET))(path, t);
		}

		static ::System::Boolean LineIntersectsLine(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 b1, ::UnityEngine::Vector2 b2, ::UnityEngine::Vector2& intersection)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_LINEINTERSECTSLINE_OFFSET))(a1, a2, b1, b2, intersection);
		}

		static ::UnityEngine::Vector2 InfiniteLineIntersect(::UnityEngine::Vector2 ps1, ::UnityEngine::Vector2 pe1, ::UnityEngine::Vector2 ps2, ::UnityEngine::Vector2 pe2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_INFINITELINEINTERSECT_OFFSET))(ps1, pe1, ps2, pe2);
		}

		static ::System::Single LineDistToPlane(::UnityEngine::Vector3 planeOrigin, ::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 lineOrigin, ::UnityEngine::Vector3 lineDirectionNormalized)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_LINEDISTTOPLANE_OFFSET))(planeOrigin, planeNormal, lineOrigin, lineDirectionNormalized);
		}

		static ::System::Single RayDistToPlane(::UnityEngine::Ray ray, ::UnityEngine::Plane plane)
		{
			return ((::System::Single(*)(::UnityEngine::Ray, ::UnityEngine::Plane))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_RAYDISTTOPLANE_OFFSET))(ray, plane);
		}

		static ::UnityEngine::Vector2 RotatePoint(::UnityEngine::Vector2 point, ::System::Single degrees)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_ROTATEPOINT_OFFSET))(point, degrees);
		}

		static ::UnityEngine::Vector2 RotatePoint_1(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 around, ::System::Single degrees)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_ROTATEPOINT_1_OFFSET))(point, around, degrees);
		}

		static ::System::Single SmoothStep(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_SMOOTHSTEP_OFFSET))(a, b, t);
		}

		static ::System::Single LinearStep(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_LINEARSTEP_OFFSET))(a, b, t);
		}

		static ::System::Double Wrap(::System::Double value, ::System::Double min, ::System::Double max)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_WRAP_OFFSET))(value, min, max);
		}

		static ::System::Single Wrap_1(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_WRAP_1_OFFSET))(value, min, max);
		}

		static ::System::Int32 Wrap_2(::System::Int32 value, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_WRAP_2_OFFSET))(value, min, max);
		}

		static ::System::Double RoundBasedOnMinimumDifference(::System::Double valueToRound, ::System::Double minDifference)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_ROUNDBASEDONMINIMUMDIFFERENCE_OFFSET))(valueToRound, minDifference);
		}

		static ::System::Double DiscardLeastSignificantDecimal(::System::Double v)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_DISCARDLEASTSIGNIFICANTDECIMAL_OFFSET))(v);
		}

		static ::System::Single ClampWrapAngle(::System::Single angle, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_CLAMPWRAPANGLE_OFFSET))(angle, min, max);
		}

		static ::System::Int32 GetNumberOfDecimalsForMinimumDifference(::System::Double minDifference)
		{
			return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_MATHUTILITIES_GETNUMBEROFDECIMALSFORMINIMUMDIFFERENCE_OFFSET))(minDifference);
		}
	};
}
