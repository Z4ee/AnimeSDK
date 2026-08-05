#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT1_OFFSET UNITYSDK_OFFSET(0xA0DAC0)
#define MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT2_OFFSET UNITYSDK_OFFSET(0xA0DB40)
#define MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT3_OFFSET UNITYSDK_OFFSET(0xA0DBE0)
#define MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT4_OFFSET UNITYSDK_OFFSET(0xA0DC70)
#define MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT_OFFSET UNITYSDK_OFFSET(0xA0DD20)
#define MESHDECIMATOR_MATH_SYMMETRICMATRIX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0D920)
#define MESHDECIMATOR_MATH_SYMMETRICMATRIX_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E269220)
#define MESHDECIMATOR_MATH_SYMMETRICMATRIX__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0DA10)
#define MESHDECIMATOR_MATH_SYMMETRICMATRIX__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA0DA60)
#define MESHDECIMATOR_MATH_SYMMETRICMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D9D0)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int SymmetricMatrix_TypeDefinitionIndex = 35478;

	struct alignas(8) SymmetricMatrix
	{
		::System::Double m0; // 0x10
		::System::Double m1; // 0x18
		::System::Double m2; // 0x20
		::System::Double m3; // 0x28
		::System::Double m4; // 0x30
		::System::Double m5; // 0x38
		::System::Double m6; // 0x40
		::System::Double m7; // 0x48
		::System::Double m8; // 0x50
		::System::Double m9; // 0x58

		::System::Void _ctor(::System::Double c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX__CTOR_OFFSET))(this, c);
		}

		::System::Void _ctor_1(::System::Double m0, ::System::Double m1, ::System::Double m2, ::System::Double m3, ::System::Double m4, ::System::Double m5, ::System::Double m6, ::System::Double m7, ::System::Double m8, ::System::Double m9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX__CTOR_1_OFFSET))(this, m0, m1, m2, m3, m4, m5, m6, m7, m8, m9);
		}

		::System::Void _ctor_2(::System::Double a, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX__CTOR_2_OFFSET))(this, a, b, c, d);
		}

		::System::Double get_Item(::System::Int32 index)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX_GET_ITEM_OFFSET))(this, index);
		}

		static ::MeshDecimator::Math::SymmetricMatrix op_Addition(::MeshDecimator::Math::SymmetricMatrix a, ::MeshDecimator::Math::SymmetricMatrix b)
		{
			return ((::MeshDecimator::Math::SymmetricMatrix(*)(::MeshDecimator::Math::SymmetricMatrix, ::MeshDecimator::Math::SymmetricMatrix))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX_OP_ADDITION_OFFSET))(a, b);
		}

		::System::Double Determinant1()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT1_OFFSET))(this);
		}

		::System::Double Determinant2()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT2_OFFSET))(this);
		}

		::System::Double Determinant3()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT3_OFFSET))(this);
		}

		::System::Double Determinant4()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT4_OFFSET))(this);
		}

		::System::Double Determinant(::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a21, ::System::Int32 a22, ::System::Int32 a23, ::System::Int32 a31, ::System::Int32 a32, ::System::Int32 a33)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_SYMMETRICMATRIX_DETERMINANT_OFFSET))(this, a11, a12, a13, a21, a22, a23, a31, a32, a33);
		}
	};
}
