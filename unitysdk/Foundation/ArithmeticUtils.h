#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/FixedPolynomial.h"
#include "unitysdk/Foundation/RotateVectorPolicy.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_ARITHMETICUTILS_BEZIEREXTRACTU_OFFSET UNITYSDK_OFFSET(0x1E31AC90)
#define FOUNDATION_ARITHMETICUTILS_CALCULATEINERTIALFLOATPOLYNOMIAL_OFFSET UNITYSDK_OFFSET(0x1E31A770)
#define FOUNDATION_ARITHMETICUTILS_FROMTOROTATIONBYORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E31B2D0)
#define FOUNDATION_ARITHMETICUTILS_FROMTOROTATIONBYSHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x1E31B270)
#define FOUNDATION_ARITHMETICUTILS_FROMTOROTATIONWITHOUTTWIST_OFFSET UNITYSDK_OFFSET(0x1E31B500)
#define FOUNDATION_ARITHMETICUTILS_FROMTOROTATIONWITHOUTZ_OFFSET UNITYSDK_OFFSET(0x1E31BA60)
#define FOUNDATION_ARITHMETICUTILS_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x1E31B5B0)
#define FOUNDATION_ARITHMETICUTILS_GETNEXTLARGESTPOWOFTWO_1_OFFSET UNITYSDK_OFFSET(0x1E31A250)
#define FOUNDATION_ARITHMETICUTILS_GETNEXTLARGESTPOWOFTWO_OFFSET UNITYSDK_OFFSET(0x1E31A220)
#define FOUNDATION_ARITHMETICUTILS_ROUNDANGLE_OFFSET UNITYSDK_OFFSET(0x1E31A590)
#define FOUNDATION_ARITHMETICUTILS_ROUNDIMPL_1_OFFSET UNITYSDK_OFFSET(0x1E31A530)
#define FOUNDATION_ARITHMETICUTILS_ROUNDIMPL_OFFSET UNITYSDK_OFFSET(0x1E31A4E0)
#define FOUNDATION_ARITHMETICUTILS_ROUNDPERIODIC_1_OFFSET UNITYSDK_OFFSET(0x1E31A3C0)
#define FOUNDATION_ARITHMETICUTILS_ROUNDPERIODIC_OFFSET UNITYSDK_OFFSET(0x1E31A290)
#define FOUNDATION_ARITHMETICUTILS_ROUNDRADIAN_1_OFFSET UNITYSDK_OFFSET(0x1E31A6D0)
#define FOUNDATION_ARITHMETICUTILS_ROUNDRADIAN_OFFSET UNITYSDK_OFFSET(0x1E31A630)
#define FOUNDATION_ARITHMETICUTILS_TRIANGLEAREA_OFFSET UNITYSDK_OFFSET(0x1E31C830)
#define FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__ATAN2F_13_5_OFFSET UNITYSDK_OFFSET(0x1E31B180)
#define FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__COSF_13_4_OFFSET UNITYSDK_OFFSET(0x1E31B1B0)
#define FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__FABSF_13_2_OFFSET UNITYSDK_OFFSET(0x1E31B150)
#define FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__FASTCBRTPOSITIVE_13_0_OFFSET UNITYSDK_OFFSET(0x1E31B190)
#define FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__FASTCBRT_13_1_OFFSET UNITYSDK_OFFSET(0x1E31B1C0)
#define FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__SQRTF_13_3_OFFSET UNITYSDK_OFFSET(0x1E31B160)
#define FOUNDATION_ARITHMETICUTILS__CALCULATEINERTIALFLOATPOLYNOMIAL_G__CALCULATEINERTIALFLOATINTERNAL_12_0_OFFSET UNITYSDK_OFFSET(0x1E31A890)
#define FOUNDATION_ARITHMETICUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31C890)
#define FOUNDATION_ARITHMETICUTILS__FROMTOROTATIONWITHOUTZ_G__TOROTATION_18_2_OFFSET UNITYSDK_OFFSET(0x1E31C7D0)
#define FOUNDATION_ARITHMETICUTILS__FROMTOROTATIONWITHOUTZ_G__TOSINRANGE_18_3_OFFSET UNITYSDK_OFFSET(0x1E31C170)
#define FOUNDATION_ARITHMETICUTILS__FROMTOROTATIONWITHOUTZ_G__TOSINXPLUSB_18_0_OFFSET UNITYSDK_OFFSET(0x1E31C690)
#define FOUNDATION_ARITHMETICUTILS__FROMTOROTATIONWITHOUTZ_G__TOY_18_1_OFFSET UNITYSDK_OFFSET(0x1E31C730)

namespace Foundation
{
	inline static constexpr unsigned int ArithmeticUtils_TypeDefinitionIndex = 8754;

	class ArithmeticUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Foundation::Unreal::Interval_1<::System::Double>>** StaticGet_IntervalToTestSinValue()
		{
			return (::Il2CppArray<::Foundation::Unreal::Interval_1<::System::Double>>**)Il2CppClass::FromTypeDefinitionIndex(ArithmeticUtils_TypeDefinitionIndex)->GetStaticField(0x7550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__CCTOR_OFFSET))();
		}

		static ::System::UInt32 GetNextLargestPowOfTwo(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_GETNEXTLARGESTPOWOFTWO_OFFSET))(value);
		}

		static ::System::UInt64 GetNextLargestPowOfTwo_1(::System::UInt64 value)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_GETNEXTLARGESTPOWOFTWO_1_OFFSET))(value);
		}

		static ::System::Single RoundPeriodic(::System::Single value, ::System::Single period, ::System::Single minValue)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_ROUNDPERIODIC_OFFSET))(value, period, minValue);
		}

		static ::System::Double RoundPeriodic_1(::System::Double value, ::System::Double period, ::System::Double minValue)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_ROUNDPERIODIC_1_OFFSET))(value, period, minValue);
		}

		static ::System::Single RoundImpl(::System::Single value, ::System::Single period, ::System::Single minValue)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_ROUNDIMPL_OFFSET))(value, period, minValue);
		}

		static ::System::Double RoundImpl_1(::System::Double value, ::System::Double period, ::System::Double minValue)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_ROUNDIMPL_1_OFFSET))(value, period, minValue);
		}

		static ::System::Single RoundAngle(::System::Single angle, ::System::Single minAngle)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_ROUNDANGLE_OFFSET))(angle, minAngle);
		}

		static ::System::Single RoundRadian(::System::Single radian, ::System::Single minRadian)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_ROUNDRADIAN_OFFSET))(radian, minRadian);
		}

		static ::System::Double RoundRadian_1(::System::Double radian, ::System::Double minRadian)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_ROUNDRADIAN_1_OFFSET))(radian, minRadian);
		}

		static ::Foundation::Function::FixedPolynomial CalculateInertialFloatPolynomial(::System::Single value, ::System::Single firstDerivative, ::System::Single& duration)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_CALCULATEINERTIALFLOATPOLYNOMIAL_OFFSET))(value, firstDerivative, duration);
		}

		static ::System::Single BezierExtractU(::System::Single t, ::System::Single w1, ::System::Single w2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_BEZIEREXTRACTU_OFFSET))(t, w1, w2);
		}

		static ::UnityEngine::Quaternion FromToRotationByShortestPath(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_FROMTOROTATIONBYSHORTESTPATH_OFFSET))(from, to);
		}

		static ::UnityEngine::Quaternion FromToRotationByOrientation(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_FROMTOROTATIONBYORIENTATION_OFFSET))(from, to);
		}

		static ::UnityEngine::Quaternion FromToRotationWithoutTwist(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_FROMTOROTATIONWITHOUTTWIST_OFFSET))(from, to);
		}

		static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::Foundation::RotateVectorPolicy policy)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::RotateVectorPolicy))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_FROMTOROTATION_OFFSET))(from, to, policy);
		}

		static ::System::Int32 FromToRotationWithoutZ(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::System::Double minX, ::System::Double maxX, ::System::Span_1<::UnityEngine::Quaternion> rotation)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Double, ::System::Double, ::System::Span_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_FROMTOROTATIONWITHOUTZ_OFFSET))(from, to, minX, maxX, rotation);
		}

		static ::System::Single TriangleArea(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS_TRIANGLEAREA_OFFSET))(point, a, b);
		}

		static ::Foundation::Function::FixedPolynomial _CalculateInertialFloatPolynomial_g__CalculateInertialFloatInternal_12_0(::System::Single x, ::System::Single v, ::System::Single& t1)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__CALCULATEINERTIALFLOATPOLYNOMIAL_G__CALCULATEINERTIALFLOATINTERNAL_12_0_OFFSET))(x, v, t1);
		}

		static ::System::Single _BezierExtractU_g__FastCbrtPositive_13_0(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__FASTCBRTPOSITIVE_13_0_OFFSET))(x);
		}

		static ::System::Single _BezierExtractU_g__FastCbrt_13_1(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__FASTCBRT_13_1_OFFSET))(x);
		}

		static ::System::Single _BezierExtractU_g__fabsf_13_2(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__FABSF_13_2_OFFSET))(x);
		}

		static ::System::Single _BezierExtractU_g__sqrtf_13_3(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__SQRTF_13_3_OFFSET))(x);
		}

		static ::System::Single _BezierExtractU_g__cosf_13_4(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__COSF_13_4_OFFSET))(x);
		}

		static ::System::Single _BezierExtractU_g__atan2f_13_5(::System::Single x, ::System::Single y)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__BEZIEREXTRACTU_G__ATAN2F_13_5_OFFSET))(x, y);
		}

		static ::System::Double _FromToRotationWithoutZ_g__ToSinXPlusB_18_0(::System::Double squareA, ::System::Double squareTy, ::System::Double valueTy, ::Foundation::Unreal::Interval_1<::System::Double> resultRange, ::System::Boolean& isClamped)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::Foundation::Unreal::Interval_1<::System::Double>, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__FROMTOROTATIONWITHOUTZ_G__TOSINXPLUSB_18_0_OFFSET))(squareA, squareTy, valueTy, resultRange, isClamped);
		}

		static ::System::Double _FromToRotationWithoutZ_g__ToY_18_1(::System::Double valueX, ::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double> fromVector, ::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double> toVector)
		{
			return ((::System::Double(*)(::System::Double, ::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double>, ::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double>))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__FROMTOROTATIONWITHOUTZ_G__TOY_18_1_OFFSET))(valueX, fromVector, toVector);
		}

		static ::UnityEngine::Quaternion _FromToRotationWithoutZ_g__ToRotation_18_2(::System::Double valueX, ::System::Double valueY)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__FROMTOROTATIONWITHOUTZ_G__TOROTATION_18_2_OFFSET))(valueX, valueY);
		}

		static ::Foundation::Unreal::Interval_1<::System::Double> _FromToRotationWithoutZ_g__ToSinRange_18_3(::Foundation::Unreal::Interval_1<::System::Double> offset, ::System::Double value)
		{
			return ((::Foundation::Unreal::Interval_1<::System::Double>(*)(::Foundation::Unreal::Interval_1<::System::Double>, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_ARITHMETICUTILS__FROMTOROTATIONWITHOUTZ_G__TOSINRANGE_18_3_OFFSET))(offset, value);
		}
	};
}
