#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DEST_MATH_CONCAVEHULL_CREATE2D_1_OFFSET UNITYSDK_OFFSET(0x1C08F8E0)
#define DEST_MATH_CONCAVEHULL_CREATE2D_OFFSET UNITYSDK_OFFSET(0x1C08E280)

namespace Dest::Math
{
	inline static constexpr unsigned int ConcaveHull_TypeDefinitionIndex = 33103;

	class ConcaveHull : public ::System::Object
	{
	public:
		static ::System::Boolean Create2D(::Il2CppArray<::UnityEngine::Vector2>* points, ::Il2CppArray<::System::Int32>*& concaveHull, ::Il2CppArray<::System::Int32>*& convexHull, ::System::Single algorithmThreshold, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Int32>*&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL_CREATE2D_OFFSET))(points, concaveHull, convexHull, algorithmThreshold, epsilon);
		}

		static ::System::Boolean Create2D_1(::Il2CppArray<::UnityEngine::Vector2>* points, ::Il2CppArray<::System::Int32>*& concaveHull, ::System::Single algorithmThreshold, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL_CREATE2D_1_OFFSET))(points, concaveHull, algorithmThreshold, epsilon);
		}
	};
}
