#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/PointOctree_1_Node_OctreeObject.h"
#include "unitysdk/System/Object.h"

namespace Octree { template <typename T> class PointOctree_1_Node___c; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Octree
{
	inline static constexpr unsigned int PointOctree_1_Node___c_TypeDefinitionIndex = 43135;

	template <typename T>
	class PointOctree_1_Node___c : public ::System::Object
	{
	public:
		static ::Octree::PointOctree_1_Node___c<T>** StaticGet___9()
		{
			return (::Octree::PointOctree_1_Node___c<T>**)Il2CppClass::FromTypeDefinitionIndex(PointOctree_1_Node___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::Octree::PointOctree_1_Node_OctreeObject<T>, T>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::Octree::PointOctree_1_Node_OctreeObject<T>, T>**)Il2CppClass::FromTypeDefinitionIndex(PointOctree_1_Node___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
