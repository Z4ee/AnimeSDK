#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class AnimationCurve; }

#define DEST_MATH_MATHFEX_CARTESIANTOCYLINDRICAL_OFFSET UNITYSDK_OFFSET(0x1EE926B0)
#define DEST_MATH_MATHFEX_CARTESIANTOPOLAR_OFFSET UNITYSDK_OFFSET(0x1EE923A0)
#define DEST_MATH_MATHFEX_CARTESIANTOSPHERICAL_OFFSET UNITYSDK_OFFSET(0x1EE924E0)
#define DEST_MATH_MATHFEX_COSINTERP_OFFSET UNITYSDK_OFFSET(0x1EE920E0)
#define DEST_MATH_MATHFEX_CURVEINTERP_OFFSET UNITYSDK_OFFSET(0x1EE92250)
#define DEST_MATH_MATHFEX_CYLINDRICALTOCARTESIAN_OFFSET UNITYSDK_OFFSET(0x1EE92780)
#define DEST_MATH_MATHFEX_EVALCUBIC_OFFSET UNITYSDK_OFFSET(0x1EE91E30)
#define DEST_MATH_MATHFEX_EVALGAUSSIAN2D_OFFSET UNITYSDK_OFFSET(0x1EE91F90)
#define DEST_MATH_MATHFEX_EVALGAUSSIAN_OFFSET UNITYSDK_OFFSET(0x1EE91F50)
#define DEST_MATH_MATHFEX_EVALINVCUBIC_OFFSET UNITYSDK_OFFSET(0x1EE91E40)
#define DEST_MATH_MATHFEX_EVALINVSQUARED_OFFSET UNITYSDK_OFFSET(0x1EE91E10)
#define DEST_MATH_MATHFEX_EVALOVERLAPPEDSTEP_OFFSET UNITYSDK_OFFSET(0x1EE91E90)
#define DEST_MATH_MATHFEX_EVALQUADRATIC_OFFSET UNITYSDK_OFFSET(0x1EE91E50)
#define DEST_MATH_MATHFEX_EVALSIGMOID_OFFSET UNITYSDK_OFFSET(0x1EE91E70)
#define DEST_MATH_MATHFEX_EVALSMOOTHOVERLAPPEDSTEP_OFFSET UNITYSDK_OFFSET(0x1EE91EE0)
#define DEST_MATH_MATHFEX_EVALSQUARED_OFFSET UNITYSDK_OFFSET(0x1EE91E00)
#define DEST_MATH_MATHFEX_FUNCINTERP_OFFSET UNITYSDK_OFFSET(0x1EE922B0)
#define DEST_MATH_MATHFEX_INVSQRT_OFFSET UNITYSDK_OFFSET(0x1EE8E560)
#define DEST_MATH_MATHFEX_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1EE92020)
#define DEST_MATH_MATHFEX_LERP_OFFSET UNITYSDK_OFFSET(0x1EE91FF0)
#define DEST_MATH_MATHFEX_NEARZERO_OFFSET UNITYSDK_OFFSET(0x1EE92390)
#define DEST_MATH_MATHFEX_NEAR_OFFSET UNITYSDK_OFFSET(0x1EE92370)
#define DEST_MATH_MATHFEX_POLARTOCARTESIAN_OFFSET UNITYSDK_OFFSET(0x1EE92470)
#define DEST_MATH_MATHFEX_SIGMOIDINTERP_OFFSET UNITYSDK_OFFSET(0x1EE92030)
#define DEST_MATH_MATHFEX_SININTERP_OFFSET UNITYSDK_OFFSET(0x1EE92080)
#define DEST_MATH_MATHFEX_SPHERICALTOCARTESIAN_OFFSET UNITYSDK_OFFSET(0x1EE92600)
#define DEST_MATH_MATHFEX_WOBBLEINTERP_OFFSET UNITYSDK_OFFSET(0x1EE92150)

namespace Dest::Math
{
	inline static constexpr unsigned int Mathfex_TypeDefinitionIndex = 35398;

	class Mathfex : public ::System::Object
	{
	public:
		// static const ::System::Single ZeroTolerance; // 0x0
		// static const ::System::Single NegativeZeroTolerance; // 0x0
		// static const ::System::Single ZeroToleranceSqr; // 0x0
		// static const ::System::Single Pi; // 0x0
		// static const ::System::Single HalfPi; // 0x0
		// static const ::System::Single TwoPi; // 0x0

		static ::System::Single EvalSquared(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALSQUARED_OFFSET))(x);
		}

		static ::System::Single EvalInvSquared(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALINVSQUARED_OFFSET))(x);
		}

		static ::System::Single EvalCubic(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALCUBIC_OFFSET))(x);
		}

		static ::System::Single EvalInvCubic(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALINVCUBIC_OFFSET))(x);
		}

		static ::System::Single EvalQuadratic(::System::Single x, ::System::Single a, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALQUADRATIC_OFFSET))(x, a, b, c);
		}

		static ::System::Single EvalSigmoid(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALSIGMOID_OFFSET))(x);
		}

		static ::System::Single EvalOverlappedStep(::System::Single x, ::System::Single overlap, ::System::Int32 objectIndex, ::System::Int32 objectCount)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALOVERLAPPEDSTEP_OFFSET))(x, overlap, objectIndex, objectCount);
		}

		static ::System::Single EvalSmoothOverlappedStep(::System::Single x, ::System::Single overlap, ::System::Int32 objectIndex, ::System::Int32 objectCount)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALSMOOTHOVERLAPPEDSTEP_OFFSET))(x, overlap, objectIndex, objectCount);
		}

		static ::System::Single EvalGaussian(::System::Single x, ::System::Single a, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALGAUSSIAN_OFFSET))(x, a, b, c);
		}

		static ::System::Single EvalGaussian2D(::System::Single x, ::System::Single y, ::System::Single x0, ::System::Single y0, ::System::Single A, ::System::Single a, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_EVALGAUSSIAN2D_OFFSET))(x, y, x0, y0, A, a, b, c);
		}

		static ::System::Single Lerp(::System::Single value0, ::System::Single value1, ::System::Single factor)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_LERP_OFFSET))(value0, value1, factor);
		}

		static ::System::Single LerpUnclamped(::System::Single value0, ::System::Single value1, ::System::Single factor)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_LERPUNCLAMPED_OFFSET))(value0, value1, factor);
		}

		static ::System::Single SigmoidInterp(::System::Single value0, ::System::Single value1, ::System::Single factor)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_SIGMOIDINTERP_OFFSET))(value0, value1, factor);
		}

		static ::System::Single SinInterp(::System::Single value0, ::System::Single value1, ::System::Single factor)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_SININTERP_OFFSET))(value0, value1, factor);
		}

		static ::System::Single CosInterp(::System::Single value0, ::System::Single value1, ::System::Single factor)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_COSINTERP_OFFSET))(value0, value1, factor);
		}

		static ::System::Single WobbleInterp(::System::Single value0, ::System::Single value1, ::System::Single factor)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_WOBBLEINTERP_OFFSET))(value0, value1, factor);
		}

		static ::System::Single CurveInterp(::System::Single value0, ::System::Single value1, ::System::Single factor, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_CURVEINTERP_OFFSET))(value0, value1, factor, curve);
		}

		static ::System::Single FuncInterp(::System::Single value0, ::System::Single value1, ::System::Single factor, ::System::Func_2<::System::Single, ::System::Single>* func)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Func_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_FUNCINTERP_OFFSET))(value0, value1, factor, func);
		}

		static ::System::Single InvSqrt(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_INVSQRT_OFFSET))(value);
		}

		static ::System::Boolean Near(::System::Single value0, ::System::Single value1, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_NEAR_OFFSET))(value0, value1, epsilon);
		}

		static ::System::Boolean NearZero(::System::Single value, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_NEARZERO_OFFSET))(value, epsilon);
		}

		static ::UnityEngine::Vector2 CartesianToPolar(::UnityEngine::Vector2 cartesianCoordinates)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_CARTESIANTOPOLAR_OFFSET))(cartesianCoordinates);
		}

		static ::UnityEngine::Vector2 PolarToCartesian(::UnityEngine::Vector2 polarCoordinates)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_POLARTOCARTESIAN_OFFSET))(polarCoordinates);
		}

		static ::UnityEngine::Vector3 CartesianToSpherical(::UnityEngine::Vector3 cartesianCoordinates)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_CARTESIANTOSPHERICAL_OFFSET))(cartesianCoordinates);
		}

		static ::UnityEngine::Vector3 SphericalToCartesian(::UnityEngine::Vector3 sphericalCoordinates)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_SPHERICALTOCARTESIAN_OFFSET))(sphericalCoordinates);
		}

		static ::UnityEngine::Vector3 CartesianToCylindrical(::UnityEngine::Vector3 cartesianCoordinates)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_CARTESIANTOCYLINDRICAL_OFFSET))(cartesianCoordinates);
		}

		static ::UnityEngine::Vector3 CylindricalToCartesian(::UnityEngine::Vector3 cylindricalCoordinates)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_MATHFEX_CYLINDRICALTOCARTESIAN_OFFSET))(cylindricalCoordinates);
		}
	};
}
