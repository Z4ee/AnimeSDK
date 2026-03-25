#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class SequencePool; }
namespace Nerdbank::Streams { template <typename T> class Sequence_1; }

#define MESSAGEPACK_SEQUENCEPOOL_RENTAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20C8CF0)
#define MESSAGEPACK_SEQUENCEPOOL_RENTAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define MESSAGEPACK_SEQUENCEPOOL_RENTAL__CTOR_OFFSET UNITYSDK_OFFSET(0x72D10)

namespace MessagePack
{
	inline static constexpr unsigned int SequencePool_Rental_TypeDefinitionIndex = 9096;

	struct alignas(8) SequencePool_Rental
	{
		::MessagePack::SequencePool* owner; // 0x10
		::Nerdbank::Streams::Sequence_1<::System::Byte>* _Value_k__BackingField; // 0x18

		::System::Void _ctor(::MessagePack::SequencePool* owner, ::Nerdbank::Streams::Sequence_1<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::SequencePool*, ::Nerdbank::Streams::Sequence_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL_RENTAL__CTOR_OFFSET))(this, owner, value);
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
