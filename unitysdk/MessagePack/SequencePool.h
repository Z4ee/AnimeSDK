#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequencePool_Rental.h"
#include "unitysdk/System/Object.h"

namespace Nerdbank::Streams { template <typename T> class Sequence_1; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define MESSAGEPACK_SEQUENCEPOOL_RENT_OFFSET UNITYSDK_OFFSET(0x173873F0)
#define MESSAGEPACK_SEQUENCEPOOL_RETURN_OFFSET UNITYSDK_OFFSET(0x173877C0)
#define MESSAGEPACK_SEQUENCEPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17387900)
#define MESSAGEPACK_SEQUENCEPOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17387380)
#define MESSAGEPACK_SEQUENCEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x173872D0)

namespace MessagePack
{
	inline static constexpr unsigned int SequencePool_TypeDefinitionIndex = 9292;

	class SequencePool : public ::System::Object
	{
	public:
		static ::MessagePack::SequencePool** StaticGet_Shared()
		{
			return (::MessagePack::SequencePool**)Il2CppClass::FromTypeDefinitionIndex(SequencePool_TypeDefinitionIndex)->GetStaticField(0x44E40);
		}
		::System::Object* arrayPoolOrMemoryPool; // 0x10
		::System::Collections::Generic::Stack_1<::Nerdbank::Streams::Sequence_1<::System::Byte>*>* pool; // 0x18
		::System::Int32 maxSize; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 maxSize, ::System::Buffers::ArrayPool_1<::System::Byte>* arrayPool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Buffers::ArrayPool_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL__CTOR_1_OFFSET))(this, maxSize, arrayPool);
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
