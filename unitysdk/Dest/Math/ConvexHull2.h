#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Dest::Math { class ConvexHull2_Edge; }
namespace Dest::Math { class Query2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_CONVEXHULL2_CREATE_OFFSET UNITYSDK_OFFSET(0x1BB4A0C0)
#define DEST_MATH_CONVEXHULL2_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BB4A740)
#define DEST_MATH_CONVEXHULL2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB4AA80)

namespace Dest::Math
{
	inline static constexpr unsigned int ConvexHull2_TypeDefinitionIndex = 33107;

	class ConvexHull2 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL2__CTOR_OFFSET))(this);
		}

		static ::System::Boolean Create(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* vertices, ::System::Single epsilon, ::System::Int32& dimension, ::Il2CppArray<::System::Int32>*& indices)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Int32&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL2_CREATE_OFFSET))(vertices, epsilon, dimension, indices);
		}

		static ::System::Boolean Update(::Dest::Math::ConvexHull2_Edge*& hull, ::System::Int32 i, ::Dest::Math::Query2* query)
		{
			return ((::System::Boolean(*)(::Dest::Math::ConvexHull2_Edge*&, ::System::Int32, ::Dest::Math::Query2*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL2_UPDATE_OFFSET))(hull, i, query);
		}
	};
}
