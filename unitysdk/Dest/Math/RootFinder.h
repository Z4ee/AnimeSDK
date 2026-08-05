#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/BrentsRoot.h"
#include "unitysdk/Dest/Math/CubicRoots.h"
#include "unitysdk/Dest/Math/QuadraticRoots.h"
#include "unitysdk/Dest/Math/QuarticRoots.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class Polynomial; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DEST_MATH_ROOTFINDER_BRENTSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F2B0B60)
#define DEST_MATH_ROOTFINDER_CUBIC_OFFSET UNITYSDK_OFFSET(0x1F2B11A0)
#define DEST_MATH_ROOTFINDER_LINEAR_OFFSET UNITYSDK_OFFSET(0x1F2B0FC0)
#define DEST_MATH_ROOTFINDER_POLYNOMIALBOUND_OFFSET UNITYSDK_OFFSET(0x1F2B1BE0)
#define DEST_MATH_ROOTFINDER_POLYNOMIAL_1_OFFSET UNITYSDK_OFFSET(0x1F2B1DC0)
#define DEST_MATH_ROOTFINDER_POLYNOMIAL_OFFSET UNITYSDK_OFFSET(0x1F2B1CC0)
#define DEST_MATH_ROOTFINDER_QUADRATIC_OFFSET UNITYSDK_OFFSET(0x1F2B1000)
#define DEST_MATH_ROOTFINDER_QUARTIC_OFFSET UNITYSDK_OFFSET(0x1F2B16D0)
#define DEST_MATH_ROOTFINDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2B1F70)

namespace Dest::Math
{
	inline static constexpr unsigned int RootFinder_TypeDefinitionIndex = 35408;

	class RootFinder : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_sqrt3()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RootFinder_TypeDefinitionIndex)->GetStaticField(0x8670);
		}
		// static const ::System::Single third; // 0x0
		// static const ::System::Single twentySeventh; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER__CCTOR_OFFSET))();
		}

		static ::System::Boolean BrentsMethod(::System::Func_2<::System::Single, ::System::Single>* function, ::System::Single x0, ::System::Single x1, ::Dest::Math::BrentsRoot& root, ::System::Int32 maxIterations, ::System::Single negativeTolerance, ::System::Single positiveTolerance, ::System::Single stepTolerance, ::System::Single segmentTolerance)
		{
			return ((::System::Boolean(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::Dest::Math::BrentsRoot&, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_BRENTSMETHOD_OFFSET))(function, x0, x1, root, maxIterations, negativeTolerance, positiveTolerance, stepTolerance, segmentTolerance);
		}

		static ::System::Boolean Linear(::System::Single c0, ::System::Single c1, ::System::Single& root, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_LINEAR_OFFSET))(c0, c1, root, epsilon);
		}

		static ::System::Boolean Quadratic(::System::Single c0, ::System::Single c1, ::System::Single c2, ::Dest::Math::QuadraticRoots& roots, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::Dest::Math::QuadraticRoots&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_QUADRATIC_OFFSET))(c0, c1, c2, roots, epsilon);
		}

		static ::System::Boolean Cubic(::System::Single c0, ::System::Single c1, ::System::Single c2, ::System::Single c3, ::Dest::Math::CubicRoots& roots, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Dest::Math::CubicRoots&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_CUBIC_OFFSET))(c0, c1, c2, c3, roots, epsilon);
		}

		static ::System::Boolean Quartic(::System::Single c0, ::System::Single c1, ::System::Single c2, ::System::Single c3, ::System::Single c4, ::Dest::Math::QuarticRoots& roots, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Dest::Math::QuarticRoots&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_QUARTIC_OFFSET))(c0, c1, c2, c3, c4, roots, epsilon);
		}

		static ::System::Single PolynomialBound(::Dest::Math::Polynomial* poly, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::Dest::Math::Polynomial*, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_POLYNOMIALBOUND_OFFSET))(poly, epsilon);
		}

		static ::System::Boolean Polynomial(::Dest::Math::Polynomial* poly, ::System::Single xMin, ::System::Single xMax, ::Il2CppArray<::System::Single>*& roots, ::System::Int32 digits, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::Dest::Math::Polynomial*, ::System::Single, ::System::Single, ::Il2CppArray<::System::Single>*&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_POLYNOMIAL_OFFSET))(poly, xMin, xMax, roots, digits, epsilon);
		}

		static ::System::Boolean Polynomial_1(::Dest::Math::Polynomial* poly, ::Il2CppArray<::System::Single>*& roots, ::System::Int32 digits, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::Dest::Math::Polynomial*, ::Il2CppArray<::System::Single>*&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_POLYNOMIAL_1_OFFSET))(poly, roots, digits, epsilon);
		}
	};
}
