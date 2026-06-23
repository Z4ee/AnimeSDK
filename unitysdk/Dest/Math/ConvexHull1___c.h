#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class ConvexHull1_SortedVertex; }
namespace System { template <typename T> class Comparison_1; }

#define DEST_MATH_CONVEXHULL1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E692F80)
#define DEST_MATH_CONVEXHULL1___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1E692FD0)
#define DEST_MATH_CONVEXHULL1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E692FC0)

namespace Dest::Math
{
	inline static constexpr unsigned int ConvexHull1___c_TypeDefinitionIndex = 34669;

	class ConvexHull1___c : public ::System::Object
	{
	public:
		static ::Dest::Math::ConvexHull1___c** StaticGet___9()
		{
			return (::Dest::Math::ConvexHull1___c**)Il2CppClass::FromTypeDefinitionIndex(ConvexHull1___c_TypeDefinitionIndex)->GetStaticField(0x27BB0);
		}
		static ::System::Comparison_1<::Dest::Math::ConvexHull1_SortedVertex*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::Dest::Math::ConvexHull1_SortedVertex*>**)Il2CppClass::FromTypeDefinitionIndex(ConvexHull1___c_TypeDefinitionIndex)->GetStaticField(0x27BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL1___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL1___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__1_0(::Dest::Math::ConvexHull1_SortedVertex* e1, ::Dest::Math::ConvexHull1_SortedVertex* e2)
		{
			return ((::System::Int32(*)(::PVOID, ::Dest::Math::ConvexHull1_SortedVertex*, ::Dest::Math::ConvexHull1_SortedVertex*))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL1___C__CREATE_B__1_0_OFFSET))(this, e1, e2);
		}
	};
}
