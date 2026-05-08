#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/RingBufferSpan_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int RingBuffer_1_TypeDefinitionIndex = 25763;

	template <typename T>
	class RingBuffer_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* buffer; // 0x0
		::System::Int32 head; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 mask; // 0x0
	};
}
