#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Complex.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueTuple_4.h"

#define FOUNDATION_EQUATIONUTILS_CUBICEQUATIONROOT_OFFSET UNITYSDK_OFFSET(0x1B37B410)
#define FOUNDATION_EQUATIONUTILS_CUSTOMEQUATIONROOT_OFFSET UNITYSDK_OFFSET(0x1B37C2B0)
#define FOUNDATION_EQUATIONUTILS_LINEAREQUATIONROOT_OFFSET UNITYSDK_OFFSET(0x1B37B1D0)
#define FOUNDATION_EQUATIONUTILS_QUADRATICEQUATIONROOT_OFFSET UNITYSDK_OFFSET(0x1B37B280)
#define FOUNDATION_EQUATIONUTILS_QUARTICEQUATIONROOT_OFFSET UNITYSDK_OFFSET(0x1B37BB90)
#define FOUNDATION_EQUATIONUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B37CB60)

namespace Foundation
{
	inline static constexpr unsigned int EquationUtils_TypeDefinitionIndex = 8872;

	class EquationUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Numerics::Complex>** StaticGet_CubicEquationInverseValue()
		{
			return (::Il2CppArray<::System::Numerics::Complex>**)Il2CppClass::FromTypeDefinitionIndex(EquationUtils_TypeDefinitionIndex)->GetStaticField(0x7CF0);
		}
		static ::Il2CppArray<::System::Numerics::Complex>** StaticGet_CubicEquationValue()
		{
			return (::Il2CppArray<::System::Numerics::Complex>**)Il2CppClass::FromTypeDefinitionIndex(EquationUtils_TypeDefinitionIndex)->GetStaticField(0x7CF8);
		}
		static ::System::Double* StaticGet_CubicTwo()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(EquationUtils_TypeDefinitionIndex)->GetStaticField(0x3C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_EQUATIONUTILS__CCTOR_OFFSET))();
		}

		static ::System::Numerics::Complex LinearEquationRoot(::System::Double a, ::System::Double b)
		{
			return ((::System::Numerics::Complex(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATIONUTILS_LINEAREQUATIONROOT_OFFSET))(a, b);
		}

		static ::System::ValueTuple_2<::System::Numerics::Complex, ::System::Numerics::Complex> QuadraticEquationRoot(::System::Double a, ::System::Double b, ::System::Double c)
		{
			return ((::System::ValueTuple_2<::System::Numerics::Complex, ::System::Numerics::Complex>(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATIONUTILS_QUADRATICEQUATIONROOT_OFFSET))(a, b, c);
		}

		static ::System::ValueTuple_3<::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex> CubicEquationRoot(::System::Double a, ::System::Double b, ::System::Double c, ::System::Double d, ::System::Single tolerance)
		{
			return ((::System::ValueTuple_3<::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex>(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATIONUTILS_CUBICEQUATIONROOT_OFFSET))(a, b, c, d, tolerance);
		}

		static ::System::ValueTuple_4<::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex> QuarticEquationRoot(::System::Double a, ::System::Double b, ::System::Double c, ::System::Double d, ::System::Double e)
		{
			return ((::System::ValueTuple_4<::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex>(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATIONUTILS_QUARTICEQUATIONROOT_OFFSET))(a, b, c, d, e);
		}

		static ::System::ValueTuple_4<::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex> CustomEquationRoot(::System::Double a0, ::System::Double b0, ::System::Double c0, ::System::Double d0, ::System::Double e0, ::System::Double a1, ::System::Double b1, ::System::Double c1, ::System::Double d1, ::System::Double e1)
		{
			return ((::System::ValueTuple_4<::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex, ::System::Numerics::Complex>(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATIONUTILS_CUSTOMEQUATIONROOT_OFFSET))(a0, b0, c0, d0, e0, a1, b1, c1, d1, e1);
		}
	};
}
