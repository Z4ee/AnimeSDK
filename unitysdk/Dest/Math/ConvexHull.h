#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_CONVEXHULL_CREATE2D_OFFSET UNITYSDK_OFFSET(0x1FC69380)
#define DEST_MATH_CONVEXHULL_CREATE3D_OFFSET UNITYSDK_OFFSET(0x1FC69490)

namespace Dest::Math
{
	inline static constexpr unsigned int ConvexHull_TypeDefinitionIndex = 35334;

	class ConvexHull : public ::System::Object
	{
	public:
		static ::System::Boolean Create2D(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::Il2CppArray<::System::Int32>*& indices, ::System::Int32& dimension, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*&, ::System::Int32&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL_CREATE2D_OFFSET))(points, indices, dimension, epsilon);
		}

		static ::System::Boolean Create3D(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::Il2CppArray<::System::Int32>*& indices, ::System::Int32& dimension, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*&, ::System::Int32&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL_CREATE3D_OFFSET))(points, indices, dimension, epsilon);
		}
	};
}
