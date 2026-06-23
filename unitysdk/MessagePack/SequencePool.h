#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequencePool_Rental.h"
#include "unitysdk/System/Object.h"

namespace Nerdbank::Streams { template <typename T> class Sequence_1; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define MESSAGEPACK_SEQUENCEPOOL_RENT_OFFSET UNITYSDK_OFFSET(0x1CC46DC0)
#define MESSAGEPACK_SEQUENCEPOOL_RETURN_OFFSET UNITYSDK_OFFSET(0x1CC46F70)
#define MESSAGEPACK_SEQUENCEPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC47080)
#define MESSAGEPACK_SEQUENCEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC46CD0)

namespace MessagePack
{
	inline static constexpr unsigned int SequencePool_TypeDefinitionIndex = 29222;

	class SequencePool : public ::System::Object
	{
	public:
		static ::MessagePack::SequencePool** StaticGet_Shared()
		{
			return (::MessagePack::SequencePool**)Il2CppClass::FromTypeDefinitionIndex(SequencePool_TypeDefinitionIndex)->GetStaticField(0x23A50);
		}
		// static const ::System::Int32 MinimumSpanLength = 0x8000; // 0x0
		::System::Collections::Generic::Stack_1<::Nerdbank::Streams::Sequence_1<::System::Byte>*>* pool; // 0x10
		::System::Buffers::ArrayPool_1<::System::Byte>* arrayPool; // 0x18
		::System::Int32 maxSize; // 0x20

		::System::Void _ctor(::System::Int32 maxSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL__CTOR_OFFSET))(this, maxSize);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL__CCTOR_OFFSET))();
		}

		::MessagePack::SequencePool_Rental Rent()
		{
			return ((::MessagePack::SequencePool_Rental(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL_RENT_OFFSET))(this);
		}

		::System::Void Return(::Nerdbank::Streams::Sequence_1<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Nerdbank::Streams::Sequence_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL_RETURN_OFFSET))(this, value);
		}
	};
}
