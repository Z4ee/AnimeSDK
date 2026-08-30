#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class SequencePool; }
namespace Nerdbank::Streams { template <typename T> class Sequence_1; }

#define MESSAGEPACK_SEQUENCEPOOL_RENTAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B5AB30)
#define MESSAGEPACK_SEQUENCEPOOL_RENTAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x6020)
#define MESSAGEPACK_SEQUENCEPOOL_RENTAL__CTOR_OFFSET UNITYSDK_OFFSET(0x80380)

namespace MessagePack
{
	inline static constexpr unsigned int SequencePool_Rental_TypeDefinitionIndex = 7188;

	struct alignas(8) SequencePool_Rental
	{
		::MessagePack::SequencePool* owner; // 0x10
		::Nerdbank::Streams::Sequence_1<::System::Byte>* _Value_k__BackingField; // 0x18

		::System::Void _ctor(::MessagePack::SequencePool* a1, ::Nerdbank::Streams::Sequence_1<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::SequencePool*, ::Nerdbank::Streams::Sequence_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL_RENTAL__CTOR_OFFSET))(this, a1, a2);
		}

		::Nerdbank::Streams::Sequence_1<::System::Byte>* get_Value()
		{
			return ((::Nerdbank::Streams::Sequence_1<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL_RENTAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL_RENTAL_DISPOSE_OFFSET))(this);
		}
	};
}
