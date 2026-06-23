#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshDecimator/Math/Vector3.h"
#include "unitysdk/MeshDecimator/Math/Vector3d.h"
#include "unitysdk/System/Object.h"

#define MESHDECIMATOR_MATH_MATHHELPER_CLAMP01_1_OFFSET UNITYSDK_OFFSET(0x1CE91430)
#define MESHDECIMATOR_MATH_MATHHELPER_CLAMP01_OFFSET UNITYSDK_OFFSET(0x1CE91410)
#define MESHDECIMATOR_MATH_MATHHELPER_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x1CE913D0)
#define MESHDECIMATOR_MATH_MATHHELPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x1CE913A0)
#define MESHDECIMATOR_MATH_MATHHELPER_MAX_1_OFFSET UNITYSDK_OFFSET(0x1CE91350)
#define MESHDECIMATOR_MATH_MATHHELPER_MAX_2_OFFSET UNITYSDK_OFFSET(0x1CE91360)
#define MESHDECIMATOR_MATH_MATHHELPER_MAX_3_OFFSET UNITYSDK_OFFSET(0x1CE91370)
#define MESHDECIMATOR_MATH_MATHHELPER_MAX_4_OFFSET UNITYSDK_OFFSET(0x1CE91380)
#define MESHDECIMATOR_MATH_MATHHELPER_MAX_5_OFFSET UNITYSDK_OFFSET(0x1CE91390)
#define MESHDECIMATOR_MATH_MATHHELPER_MAX_OFFSET UNITYSDK_OFFSET(0x1CE85C30)
#define MESHDECIMATOR_MATH_MATHHELPER_MIN_1_OFFSET UNITYSDK_OFFSET(0x1CE91310)
#define MESHDECIMATOR_MATH_MATHHELPER_MIN_2_OFFSET UNITYSDK_OFFSET(0x1CE91320)
#define MESHDECIMATOR_MATH_MATHHELPER_MIN_3_OFFSET UNITYSDK_OFFSET(0x1CE91330)
#define MESHDECIMATOR_MATH_MATHHELPER_MIN_4_OFFSET UNITYSDK_OFFSET(0x1CE91340)
#define MESHDECIMATOR_MATH_MATHHELPER_MIN_5_OFFSET UNITYSDK_OFFSET(0x1CE872C0)
#define MESHDECIMATOR_MATH_MATHHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x1CE91300)
#define MESHDECIMATOR_MATH_MATHHELPER_TRIANGLEAREA_1_OFFSET UNITYSDK_OFFSET(0x1CE91750)
#define MESHDECIMATOR_MATH_MATHHELPER_TRIANGLEAREA_OFFSET UNITYSDK_OFFSET(0x1CE91450)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int MathHelper_TypeDefinitionIndex = 34818;

	class MathHelper : public ::System::Object
	{
	public:
		// static const ::System::Single PI; // 0x0
		// static const ::System::Double PId; // 0x0
		// static const ::System::Single Deg2Rad; // 0x0
		// static const ::System::Double Deg2Radd; // 0x0
		// static const ::System::Single Rad2Deg; // 0x0
		// static const ::System::Double Rad2Degd; // 0x0

		static ::System::Int32 Min(::System::Int32 val1, ::System::Int32 val2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MIN_OFFSET))(val1, val2);
		}

		static ::System::Int32 Min_1(::System::Int32 val1, ::System::Int32 val2, ::System::Int32 val3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MIN_1_OFFSET))(val1, val2, val3);
		}

		static ::System::Single Min_2(::System::Single val1, ::System::Single val2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MIN_2_OFFSET))(val1, val2);
		}

		static ::System::Single Min_3(::System::Single val1, ::System::Single val2, ::System::Single val3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MIN_3_OFFSET))(val1, val2, val3);
		}

		static ::System::Double Min_4(::System::Double val1, ::System::Double val2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MIN_4_OFFSET))(val1, val2);
		}

		static ::System::Double Min_5(::System::Double val1, ::System::Double val2, ::System::Double val3)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MIN_5_OFFSET))(val1, val2, val3);
		}

		static ::System::Int32 Max(::System::Int32 val1, ::System::Int32 val2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MAX_OFFSET))(val1, val2);
		}

		static ::System::Int32 Max_1(::System::Int32 val1, ::System::Int32 val2, ::System::Int32 val3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MAX_1_OFFSET))(val1, val2, val3);
		}

		static ::System::Single Max_2(::System::Single val1, ::System::Single val2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MAX_2_OFFSET))(val1, val2);
		}

		static ::System::Single Max_3(::System::Single val1, ::System::Single val2, ::System::Single val3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MAX_3_OFFSET))(val1, val2, val3);
		}

		static ::System::Double Max_4(::System::Double val1, ::System::Double val2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MAX_4_OFFSET))(val1, val2);
		}

		static ::System::Double Max_5(::System::Double val1, ::System::Double val2, ::System::Double val3)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_MAX_5_OFFSET))(val1, val2, val3);
		}

		static ::System::Single Clamp(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_CLAMP_OFFSET))(value, min, max);
		}

		static ::System::Double Clamp_1(::System::Double value, ::System::Double min, ::System::Double max)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_CLAMP_1_OFFSET))(value, min, max);
		}

		static ::System::Single Clamp01(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_CLAMP01_OFFSET))(value);
		}

		static ::System::Double Clamp01_1(::System::Double value)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_CLAMP01_1_OFFSET))(value);
		}

		static ::System::Single TriangleArea(::MeshDecimator::Math::Vector3& p0, ::MeshDecimator::Math::Vector3& p1, ::MeshDecimator::Math::Vector3& p2)
		{
			return ((::System::Single(*)(::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_TRIANGLEAREA_OFFSET))(p0, p1, p2);
		}

		static ::System::Double TriangleArea_1(::MeshDecimator::Math::Vector3d& p0, ::MeshDecimator::Math::Vector3d& p1, ::MeshDecimator::Math::Vector3d& p2)
		{
			return ((::System::Double(*)(::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_MATHHELPER_TRIANGLEAREA_1_OFFSET))(p0, p1, p2);
		}
	};
}
