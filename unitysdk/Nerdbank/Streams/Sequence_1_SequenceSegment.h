#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequenceSegment_1.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Span_1.h"

namespace Nerdbank::Streams { template <typename T> class Sequence_1_SequenceSegment; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Buffers { template <typename T> class IMemoryOwner_1; }

namespace Nerdbank::Streams
{
	inline static constexpr unsigned int Sequence_1_SequenceSegment_TypeDefinitionIndex = 7116;

	template <typename T>
	class Sequence_1_SequenceSegment : public ::System::Buffers::ReadOnlySequenceSegment_1<T>
	{
	public:
		static ::Nerdbank::Streams::Sequence_1_SequenceSegment<T>** StaticGet_Empty()
		{
			return (::Nerdbank::Streams::Sequence_1_SequenceSegment<T>**)Il2CppClass::FromTypeDefinitionIndex(Sequence_1_SequenceSegment_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_MayContainReferences()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Sequence_1_SequenceSegment_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 _Start_k__BackingField; // 0x0
		::System::Int32 _End_k__BackingField; // 0x0
		::System::Buffers::IMemoryOwner_1<T>* _MemoryOwner_k__BackingField; // 0x0
	};
}
