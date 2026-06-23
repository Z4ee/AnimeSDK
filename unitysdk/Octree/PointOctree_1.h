#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/BoundingBox.h"
#include "unitysdk/Octree/Native/TNativeSizeArea_1.h"
#include "unitysdk/Octree/OctChildBoundingBox.h"
#include "unitysdk/Octree/PointOctree_1_Node.h"
#include "unitysdk/Octree/Ray.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Octree
{
	inline static constexpr unsigned int PointOctree_1_TypeDefinitionIndex = 67394;

	template <typename T>
	class PointOctree_1 : public ::System::Object
	{
	public:
		::Octree::PointOctree_1_Node<T> _rootNode; // 0x0
		::System::Single _initialSize; // 0x0
		::System::Single _minSize; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
		::Octree::Native::TNativeSizeArea_1<::Octree::OctChildBoundingBox> _childBBArea; // 0x0
	};
}
