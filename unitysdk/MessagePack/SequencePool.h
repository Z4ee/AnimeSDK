#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequencePool_Rental.h"
#include "unitysdk/System/Object.h"

namespace Nerdbank::Streams { template <typename T> class Sequence_1; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define MESSAGEPACK_SEQUENCEPOOL_RENT_OFFSET UNITYSDK_OFFSET(0x18191E50)
#define MESSAGEPACK_SEQUENCEPOOL_RETURN_OFFSET UNITYSDK_OFFSET(0x18192160)
#define MESSAGEPACK_SEQUENCEPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18192290)
#define MESSAGEPACK_SEQUENCEPOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18191DE0)
#define MESSAGEPACK_SEQUENCEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x18191D30)

namespace MessagePack
{
	inline static constexpr unsigned int SequencePool_TypeDefinitionIndex = 7195;

	class SequencePool : public ::System::Object
	{
	public:
		static ::MessagePack::SequencePool** StaticGet_Shared()
		{
			return (::MessagePack::SequencePool**)Il2CppClass::FromTypeDefinitionIndex(SequencePool_TypeDefinitionIndex)->GetStaticField(0xA2C0);
		}
		::System::Collections::Generic::Stack_1<::Nerdbank::Streams::Sequence_1<::System::Byte>*>* pool; // 0x10
		::System::Object* arrayPoolOrMemoryPool; // 0x18
		::System::Int32 maxSize; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Buffers::ArrayPool_1<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Buffers::ArrayPool_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL__CCTOR_OFFSET))();
		}

		::MessagePack::SequencePool_Rental Rent()
		{
			return ((::MessagePack::SequencePool_Rental(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL_RENT_OFFSET))(this);
		}

		::System::Void Return(::Nerdbank::Streams::Sequence_1<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Nerdbank::Streams::Sequence_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEPOOL_RETURN_OFFSET))(this, a1);
		}
	};
}
