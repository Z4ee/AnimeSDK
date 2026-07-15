#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentStack_1_Node; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentStack_1_TypeDefinitionIndex = 1517;

	template <typename T>
	class ConcurrentStack_1 : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::ConcurrentStack_1_Node<T>* _head; // 0x0
	};
}
