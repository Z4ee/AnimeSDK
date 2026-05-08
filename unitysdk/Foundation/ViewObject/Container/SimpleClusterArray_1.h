#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int SimpleClusterArray_1_TypeDefinitionIndex = 58510;

	template <typename T>
	class SimpleClusterArray_1 : public ::System::Object
	{
	public:
		::System::Int32 ClusterSize; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
		::System::Collections::Generic::List_1<::Il2CppArray<T>*>* _clusters; // 0x0
		::System::Buffers::ArrayPool_1<T>* _arrayPool; // 0x0
	};
}
