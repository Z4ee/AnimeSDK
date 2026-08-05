#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MathUtil/FloatExtension_eEpsType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ABS_1_OFFSET UNITYSDK_OFFSET(0x19BF9550)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ABS_OFFSET UNITYSDK_OFFSET(0x19BF9500)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_CHECKHASBITID_OFFSET UNITYSDK_OFFSET(0x19BFA3D0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_CHECKHASBITMASK_OFFSET UNITYSDK_OFFSET(0x19BFA450)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_CLAMP01_OFFSET UNITYSDK_OFFSET(0x19BF96A0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x19BF9610)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_CLAMP_OFFSET UNITYSDK_OFFSET(0x19BF95B0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_DIV_OFFSET UNITYSDK_OFFSET(0x19BF8BC0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_FINDMAXBIT_OFFSET UNITYSDK_OFFSET(0x19BFA1B0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_FINDMINBIT_OFFSET UNITYSDK_OFFSET(0x19BF9F90)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_FRAMETOTIME_OFFSET UNITYSDK_OFFSET(0x19BF91D0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_GETEPS_OFFSET UNITYSDK_OFFSET(0x19BF8CB0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_GETFRACTIONALPART_OFFSET UNITYSDK_OFFSET(0x19BF9BB0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_HERMITEINTERPOLATE_OFFSET UNITYSDK_OFFSET(0x19BF9DD0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISEQUAL_1_OFFSET UNITYSDK_OFFSET(0x19BF9EE0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x19BF8D20)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISGREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x19BF9010)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISGREATER_OFFSET UNITYSDK_OFFSET(0x19BF8EB0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISINT_OFFSET UNITYSDK_OFFSET(0x19BF9B30)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISLESSOREQUAL_OFFSET UNITYSDK_OFFSET(0x19BF8F70)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISLESS_OFFSET UNITYSDK_OFFSET(0x19BF8DF0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISZERO_OFFSET UNITYSDK_OFFSET(0x19BF90B0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_NICEFY_OFFSET UNITYSDK_OFFSET(0x19BF9860)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_POWOF_OFFSET UNITYSDK_OFFSET(0x19BF97D0)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_SIGN_1_OFFSET UNITYSDK_OFFSET(0x19BF9360)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_SIGN_OFFSET UNITYSDK_OFFSET(0x19BF9300)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_SQRT_OFFSET UNITYSDK_OFFSET(0x19BF9760)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_SQUARE_OFFSET UNITYSDK_OFFSET(0x19BF9710)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_TIMETOFRAME_OFFSET UNITYSDK_OFFSET(0x19BF9160)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x19BF8C70)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_TUBESPLINE_OFFSET UNITYSDK_OFFSET(0x19BF9C10)
#define MOLEMOLE_MATHUTIL_FLOATEXTENSION_UPCASEOF_OFFSET UNITYSDK_OFFSET(0x19BF9950)

namespace MoleMole::MathUtil
{
	inline static constexpr unsigned int FloatExtension_TypeDefinitionIndex = 63683;

	class FloatExtension : public ::System::Object
	{
	public:
		// static const ::System::Single MILD_EPS; // 0x0
		// static const ::System::Single NORMAL_EPS; // 0x0
		// static const ::System::Single STRONG_EPS; // 0x0
		// static const ::System::Int32 FRAME_CNT_IN_ONE_SECOND = 0x3C; // 0x0

		static ::System::Single Div(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_DIV_OFFSET))(a, b);
		}

		static ::System::Single ToFloat(::System::Int32 val)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_TOFLOAT_OFFSET))(val);
		}

		static ::System::Single GetEps(::MoleMole::MathUtil::FloatExtension_eEpsType epsType)
		{
			return ((::System::Single(*)(::MoleMole::MathUtil::FloatExtension_eEpsType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_GETEPS_OFFSET))(epsType);
		}

		static ::System::Boolean IsEqual(::System::Single a, ::System::Single b, ::MoleMole::MathUtil::FloatExtension_eEpsType epsType)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::MoleMole::MathUtil::FloatExtension_eEpsType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISEQUAL_OFFSET))(a, b, epsType);
		}

		static ::System::Boolean IsLess(::System::Single a, ::System::Single b, ::MoleMole::MathUtil::FloatExtension_eEpsType epsType)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::MoleMole::MathUtil::FloatExtension_eEpsType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISLESS_OFFSET))(a, b, epsType);
		}

		static ::System::Boolean IsGreater(::System::Single a, ::System::Single b, ::MoleMole::MathUtil::FloatExtension_eEpsType epsType)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::MoleMole::MathUtil::FloatExtension_eEpsType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISGREATER_OFFSET))(a, b, epsType);
		}

		static ::System::Boolean IsLessOrEqual(::System::Single a, ::System::Single b, ::MoleMole::MathUtil::FloatExtension_eEpsType epsType)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::MoleMole::MathUtil::FloatExtension_eEpsType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISLESSOREQUAL_OFFSET))(a, b, epsType);
		}

		static ::System::Boolean IsGreaterOrEqual(::System::Single a, ::System::Single b, ::MoleMole::MathUtil::FloatExtension_eEpsType epsType)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::MoleMole::MathUtil::FloatExtension_eEpsType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISGREATEROREQUAL_OFFSET))(a, b, epsType);
		}

		static ::System::Boolean IsZero(::System::Single a, ::MoleMole::MathUtil::FloatExtension_eEpsType epsType)
		{
			return ((::System::Boolean(*)(::System::Single, ::MoleMole::MathUtil::FloatExtension_eEpsType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISZERO_OFFSET))(a, epsType);
		}

		static ::System::Int32 TimeToFrame(::System::Single time, ::System::Int32 changeRate)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_TIMETOFRAME_OFFSET))(time, changeRate);
		}

		static ::System::Single FrameToTime(::System::Int32 frame, ::System::Int32 changeRate)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_FRAMETOTIME_OFFSET))(frame, changeRate);
		}

		static ::System::Int32 Sign(::System::Int32 val)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_SIGN_OFFSET))(val);
		}

		static ::System::Single Sign_1(::System::Single val)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_SIGN_1_OFFSET))(val);
		}

		static ::System::Int32 Abs(::System::Int32 val)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ABS_OFFSET))(val);
		}

		static ::System::Single Abs_1(::System::Single val)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ABS_1_OFFSET))(val);
		}

		static ::System::Int32 Clamp(::System::Int32 val, ::System::Int32 L, ::System::Int32 R)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_CLAMP_OFFSET))(val, L, R);
		}

		static ::System::Single Clamp_1(::System::Single val, ::System::Single L, ::System::Single R)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_CLAMP_1_OFFSET))(val, L, R);
		}

		static ::System::Single Clamp01(::System::Single val)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_CLAMP01_OFFSET))(val);
		}

		static ::System::Single Square(::System::Single val)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_SQUARE_OFFSET))(val);
		}

		static ::System::Single Sqrt(::System::Single val)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_SQRT_OFFSET))(val);
		}

		static ::System::Int32 PowOf(::System::Int32 baseVal, ::System::Int32 num)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_POWOF_OFFSET))(baseVal, num);
		}

		static ::System::Single Nicefy(::System::Single val, ::System::Int32 digNum)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_NICEFY_OFFSET))(val, digNum);
		}

		static ::System::Single UpCaseOf(::System::Single val, ::System::Single rate)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_UPCASEOF_OFFSET))(val, rate);
		}

		static ::System::Boolean IsInt(::System::Single val, ::System::Int32& intVal)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISINT_OFFSET))(val, intVal);
		}

		static ::System::Single GetFractionalPart(::System::Single val)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_GETFRACTIONALPART_OFFSET))(val);
		}

		static ::System::Single TubeSpline(::System::Single p1, ::System::Single p2, ::System::Single tan1, ::System::Single tan2, ::System::Single t, ::System::Single tao)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_TUBESPLINE_OFFSET))(p1, p2, tan1, tan2, t, tao);
		}

		static ::System::Single HermiteInterpolate(::System::Single p1, ::System::Single p2, ::System::Single tan1, ::System::Single tan2, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_HERMITEINTERPOLATE_OFFSET))(p1, p2, tan1, tan2, t);
		}

		static ::System::Boolean IsEqual_1(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::MoleMole::MathUtil::FloatExtension_eEpsType epsType)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::MathUtil::FloatExtension_eEpsType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_ISEQUAL_1_OFFSET))(a, b, epsType);
		}

		static ::System::Int32 FindMinBit(::System::Int32 num)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_FINDMINBIT_OFFSET))(num);
		}

		static ::System::Int32 FindMaxBit(::System::Int32 num)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_FINDMAXBIT_OFFSET))(num);
		}

		static ::System::Boolean CheckHasBitID(::System::Int32 num, ::System::Int32 bitID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_CHECKHASBITID_OFFSET))(num, bitID);
		}

		static ::System::Boolean CheckHasBitMask(::System::Int32 num, ::System::Int32 bitMask)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_FLOATEXTENSION_CHECKHASBITMASK_OFFSET))(num, bitMask);
		}
	};
}
