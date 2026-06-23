#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/BoundingBox.h"
#include "unitysdk/Octree/Ray.h"
#include "unitysdk/Octree/Sphere.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Octree { template <typename T> class BoundsOctree_1_Node; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Octree
{
	inline static constexpr unsigned int BoundsOctree_1_TypeDefinitionIndex = 75695;

	template <typename T>
	class BoundsOctree_1 : public ::System::Object
	{
	public:
		::Octree::BoundsOctree_1_Node<T>* _rootNode; // 0x0
		::System::Single _looseness; // 0x0
		::System::Single _initialSize; // 0x0
		::System::Single _minSize; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
