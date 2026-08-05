#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_LINEARSYSTEM_INVERSE_OFFSET UNITYSDK_OFFSET(0x1FA49F90)
#define DEST_MATH_LINEARSYSTEM_SOLVE2_1_OFFSET UNITYSDK_OFFSET(0x1FA488B0)
#define DEST_MATH_LINEARSYSTEM_SOLVE2_OFFSET UNITYSDK_OFFSET(0x1FA48660)
#define DEST_MATH_LINEARSYSTEM_SOLVE3_1_OFFSET UNITYSDK_OFFSET(0x1FA48F40)
#define DEST_MATH_LINEARSYSTEM_SOLVE3_OFFSET UNITYSDK_OFFSET(0x1FA48990)
#define DEST_MATH_LINEARSYSTEM_SOLVETRIDIAGONAL_OFFSET UNITYSDK_OFFSET(0x1FA49A80)
#define DEST_MATH_LINEARSYSTEM_SOLVE_OFFSET UNITYSDK_OFFSET(0x1FA491D0)
#define DEST_MATH_LINEARSYSTEM_SWAPROWS_OFFSET UNITYSDK_OFFSET(0x1FA49050)

namespace Dest::Math
{
	inline static constexpr unsigned int LinearSystem_TypeDefinitionIndex = 35413;

	class LinearSystem : public ::System::Object
	{
	public:
		static ::System::Boolean Solve2(::Il2CppArray<::System::Single>* A, ::Il2CppArray<::System::Single>* B, ::Il2CppArray<::System::Single>*& X, ::System::Single zeroTolerance)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE2_OFFSET))(A, B, X, zeroTolerance);
		}

		static ::System::Boolean Solve2_1(::Il2CppArray<::System::Single>* A, ::Il2CppArray<::System::Single>* B, ::UnityEngine::Vector2& X, ::System::Single zeroTolerance)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE2_1_OFFSET))(A, B, X, zeroTolerance);
		}

		static ::System::Boolean Solve3(::Il2CppArray<::System::Single>* A, ::Il2CppArray<::System::Single>* B, ::Il2CppArray<::System::Single>*& X, ::System::Single zeroTolerance)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE3_OFFSET))(A, B, X, zeroTolerance);
		}

		static ::System::Boolean Solve3_1(::Il2CppArray<::System::Single>* A, ::Il2CppArray<::System::Single>* B, ::UnityEngine::Vector3& X, ::System::Single zeroTolerance)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE3_1_OFFSET))(A, B, X, zeroTolerance);
		}

		static ::System::Void SwapRows(::Il2CppArray<::System::Single>* matrix, ::System::Int32 row0, ::System::Int32 row1, ::System::Int32 columnCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SWAPROWS_OFFSET))(matrix, row0, row1, columnCount);
		}

		static ::System::Boolean Solve(::Il2CppArray<::System::Single>* A, ::Il2CppArray<::System::Single>* B, ::Il2CppArray<::System::Single>*& X)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE_OFFSET))(A, B, X);
		}

		static ::System::Boolean SolveTridiagonal(::Il2CppArray<::System::Single>* A, ::Il2CppArray<::System::Single>* B, ::Il2CppArray<::System::Single>* C, ::Il2CppArray<::System::Single>* R, ::Il2CppArray<::System::Single>*& U)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVETRIDIAGONAL_OFFSET))(A, B, C, R, U);
		}

		static ::System::Boolean Inverse(::Il2CppArray<::System::Single>* A, ::Il2CppArray<::System::Single>*& invA)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_INVERSE_OFFSET))(A, invA);
		}
	};
}
