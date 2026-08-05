#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class EigenData; }

#define DEST_MATH_EIGENDECOMPOSITION_DECREASINGSORT_OFFSET UNITYSDK_OFFSET(0x1F27A350)
#define DEST_MATH_EIGENDECOMPOSITION_GUARANTEEROTATION_OFFSET UNITYSDK_OFFSET(0x1F27A660)
#define DEST_MATH_EIGENDECOMPOSITION_INCREASINGSORT_OFFSET UNITYSDK_OFFSET(0x1F27A040)
#define DEST_MATH_EIGENDECOMPOSITION_QLALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F2798D0)
#define DEST_MATH_EIGENDECOMPOSITION_SOLVE_OFFSET UNITYSDK_OFFSET(0x1F273BB0)
#define DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL2_OFFSET UNITYSDK_OFFSET(0x1F277800)
#define DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL3_OFFSET UNITYSDK_OFFSET(0x1F277950)
#define DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONALN_OFFSET UNITYSDK_OFFSET(0x1F277C40)

namespace Dest::Math
{
	inline static constexpr unsigned int EigenDecomposition_TypeDefinitionIndex = 35411;

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
