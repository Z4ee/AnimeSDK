#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class ConvexHull3_Triangle; }
namespace Dest::Math { class Query3; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_CONVEXHULL3_CREATE_OFFSET UNITYSDK_OFFSET(0x1EE902A0)
#define DEST_MATH_CONVEXHULL3_EXTRACTINDICES_OFFSET UNITYSDK_OFFSET(0x1EE91A10)
#define DEST_MATH_CONVEXHULL3_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EE90EC0)
#define DEST_MATH_CONVEXHULL3__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE91DF0)

namespace Dest::Math
{
	inline static constexpr unsigned int ConvexHull3_TypeDefinitionIndex = 35331;

	class ConvexHull3 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3__CTOR_OFFSET))(this);
		}

		static ::System::Boolean Create(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* vertices, ::System::Single epsilon, ::System::Int32& dimension, ::Il2CppArray<::System::Int32>*& indices)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Int32&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_CREATE_OFFSET))(vertices, epsilon, dimension, indices);
		}

		static ::System::Boolean Update(::System::Collections::Generic::HashSet_1<::Dest::Math::ConvexHull3_Triangle*>* hull, ::System::Int32 i, ::Dest::Math::Query3* query)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::Dest::Math::ConvexHull3_Triangle*>*, ::System::Int32, ::Dest::Math::Query3*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_UPDATE_OFFSET))(hull, i, query);
		}

		static ::System::Void ExtractIndices(::System::Collections::Generic::HashSet_1<::Dest::Math::ConvexHull3_Triangle*>* hull, ::Il2CppArray<::System::Int32>*& indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::Dest::Math::ConvexHull3_Triangle*>*, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL3_EXTRACTINDICES_OFFSET))(hull, indices);
		}
	};
}
