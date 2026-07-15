#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace SRDebugger
{
	inline static constexpr unsigned int CircularBuffer_1_TypeDefinitionIndex = 36400;

	template <typename T>
	class CircularBuffer_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _buffer; // 0x0
		::System::Int32 _end; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _start; // 0x0
	};
}
