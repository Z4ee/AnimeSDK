#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class EigenData; }

#define DEST_MATH_EIGENDECOMPOSITION_DECREASINGSORT_OFFSET UNITYSDK_OFFSET(0x1DEC6880)
#define DEST_MATH_EIGENDECOMPOSITION_GUARANTEEROTATION_OFFSET UNITYSDK_OFFSET(0x1DEC6C50)
#define DEST_MATH_EIGENDECOMPOSITION_INCREASINGSORT_OFFSET UNITYSDK_OFFSET(0x1DEC64B0)
#define DEST_MATH_EIGENDECOMPOSITION_QLALGORITHM_OFFSET UNITYSDK_OFFSET(0x1DEC5E10)
#define DEST_MATH_EIGENDECOMPOSITION_SOLVE_OFFSET UNITYSDK_OFFSET(0x1DEC09D0)
#define DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL2_OFFSET UNITYSDK_OFFSET(0x1DEC45E0)
#define DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL3_OFFSET UNITYSDK_OFFSET(0x1DEC4730)
#define DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONALN_OFFSET UNITYSDK_OFFSET(0x1DEC4B20)

namespace Dest::Math
{
	inline static constexpr unsigned int EigenDecomposition_TypeDefinitionIndex = 34752;

	class EigenDecomposition : public ::System::Object
	{
	public:
		static ::System::Void Tridiagonal2(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::Il2CppArray<::System::Single>* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL2_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Void Tridiagonal3(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::Il2CppArray<::System::Single>* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL3_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Void TridiagonalN(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::Il2CppArray<::System::Single>* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONALN_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Boolean QLAlgorithm(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::Il2CppArray<::System::Single>* matrix)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_QLALGORITHM_OFFSET))(diagonal, subdiagonal, matrix);
		}

		static ::System::Void IncreasingSort(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::Il2CppArray<::System::Single>* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_INCREASINGSORT_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Void DecreasingSort(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::Il2CppArray<::System::Single>* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_DECREASINGSORT_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Void GuaranteeRotation(::Il2CppArray<::System::Single>* matrix, ::System::Boolean isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_GUARANTEEROTATION_OFFSET))(matrix, isRotation);
		}

		static ::Dest::Math::EigenData* Solve(::Il2CppArray<::System::Single>* symmetricSquareMatrix, ::System::Boolean increasingSort)
		{
			return ((::Dest::Math::EigenData*(*)(::Il2CppArray<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_SOLVE_OFFSET))(symmetricSquareMatrix, increasingSort);
		}
	};
}
