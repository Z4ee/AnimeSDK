#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/NodeColor.h"
#include "unitysdk/System/Collections/Generic/TreeRotation.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class SortedSet_1_Node; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedSet_1_Node_TypeDefinitionIndex = 3036;

	template <typename T>
	class SortedSet_1_Node : public ::System::Object
	{
	public:
		T _Item_k__BackingField; // 0x0
		::System::Collections::Generic::SortedSet_1_Node<T>* _Left_k__BackingField; // 0x0
		::System::Collections::Generic::SortedSet_1_Node<T>* _Right_k__BackingField; // 0x0
		::System::Collections::Generic::NodeColor _Color_k__BackingField; // 0x0
	};
}
