#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ExceptionArgument.h"
#include "unitysdk/System/SequencePosition.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Buffers { template <typename T> class ReadOnlySequenceSegment_1; }

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence_1_TypeDefinitionIndex = 4979;

	template <typename T>
	struct ReadOnlySequence_1
	{
		::System::SequencePosition _sequenceStart; // 0x0
		::System::SequencePosition _sequenceEnd; // 0x0
		static ::System::Buffers::ReadOnlySequence_1<T>* StaticGet_Empty()
		{
			return (::System::Buffers::ReadOnlySequence_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ReadOnlySequence_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
