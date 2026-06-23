#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/ConcaveHull2_InnerPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DEST_MATH_CONCAVEHULL2_CALCDISTANCEFROMPOINTTOEDGE_OFFSET UNITYSDK_OFFSET(0x1E3A5430)
#define DEST_MATH_CONCAVEHULL2_CREATE_OFFSET UNITYSDK_OFFSET(0x1E3A3F10)
#define DEST_MATH_CONCAVEHULL2_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x1E3A5220)
#define DEST_MATH_CONCAVEHULL2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A5550)

namespace Dest::Math
{
	inline static constexpr unsigned int ConcaveHull2_TypeDefinitionIndex = 34663;

	class ConcaveHull2 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL2__CTOR_OFFSET))(this);
		}

		static ::System::Void Quicksort(::Il2CppArray<::Dest::Math::ConcaveHull2_InnerPoint>* x, ::System::Int32 first, ::System::Int32 last)
		{
			return ((::System::Void(*)(::Il2CppArray<::Dest::Math::ConcaveHull2_InnerPoint>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL2_QUICKSORT_OFFSET))(x, first, last);
		}

		static ::System::Single CalcDistanceFromPointToEdge(::UnityEngine::Vector2& pointA, ::UnityEngine::Vector2& v0, ::UnityEngine::Vector2& v1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL2_CALCDISTANCEFROMPOINTTOEDGE_OFFSET))(pointA, v0, v1);
		}

		static ::System::Boolean Create(::Il2CppArray<::UnityEngine::Vector2>* points, ::Il2CppArray<::System::Int32>*& concaveHull, ::Il2CppArray<::System::Int32>* convexHull, ::System::Single N, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL2_CREATE_OFFSET))(points, concaveHull, convexHull, N, epsilon);
		}
	};
}
