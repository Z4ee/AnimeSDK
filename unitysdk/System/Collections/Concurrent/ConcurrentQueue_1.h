#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1_Segment; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentQueue_1_TypeDefinitionIndex = 1512;

	template <typename T>
	class ConcurrentQueue_1 : public ::System::Object
	{
	public:
		::System::Object* _crossSegmentLock; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* _tail; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* _head; // 0x0
	};
}
