#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/BoundingBox.h"
#include "unitysdk/Octree/Ray.h"
#include "unitysdk/Octree/Sphere.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/Object.h"

namespace Octree { template <typename T> class BoundsOctree_1_Node; }
namespace Octree { template <typename T> class BoundsOctree_1_Node_OctreeObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Octree
{
	inline static constexpr unsigned int BoundsOctree_1_Node_TypeDefinitionIndex = 80036;

	template <typename T>
	class BoundsOctree_1_Node : public ::System::Object
	{
	public:
		::System::Numerics::Vector3 _Center_k__BackingField; // 0x0
		::System::Single _BaseLength_k__BackingField; // 0x0
		::System::Single _looseness; // 0x0
		::System::Single _minSize; // 0x0
		::System::Single _adjLength; // 0x0
		::Octree::BoundingBox _bounds; // 0x0
		::System::Collections::Generic::List_1<::Octree::BoundsOctree_1_Node_OctreeObject<T>*>* _objects; // 0x0
		::Il2CppArray<::Octree::BoundsOctree_1_Node<T>*>* _children; // 0x0
		::Il2CppArray<::Octree::BoundingBox>* _childBounds; // 0x0
		// static const ::System::Int32 NumObjectsAllowed = 0x8; // 0x0
	};
}
