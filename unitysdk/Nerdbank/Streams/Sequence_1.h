#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace Nerdbank::Streams { template <typename T> class Sequence_1; }
namespace Nerdbank::Streams { template <typename T> class Sequence_1_SequenceSegment; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Buffers { template <typename T> class MemoryPool_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Nerdbank::Streams
{
	inline static constexpr unsigned int Sequence_1_TypeDefinitionIndex = 7115;

	template <typename T>
	class Sequence_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DefaultLengthFromArrayPool()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Sequence_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Buffers::ReadOnlySequence_1<T>* StaticGet_Empty()
		{
			return (::System::Buffers::ReadOnlySequence_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Sequence_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Stack_1<::Nerdbank::Streams::Sequence_1_SequenceSegment<T>*>* segmentPool; // 0x0
		::System::Buffers::MemoryPool_1<T>* memoryPool; // 0x0
		::System::Buffers::ArrayPool_1<T>* arrayPool; // 0x0
		::Nerdbank::Streams::Sequence_1_SequenceSegment<T>* first; // 0x0
		::Nerdbank::Streams::Sequence_1_SequenceSegment<T>* last; // 0x0
		::System::Int32 _MinimumSpanLength_k__BackingField; // 0x0
		::System::Boolean _AutoIncreaseMinimumSpanLength_k__BackingField; // 0x0
	};
}
