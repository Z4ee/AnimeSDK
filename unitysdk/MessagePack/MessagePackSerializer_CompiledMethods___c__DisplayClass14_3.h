#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15D7EC50)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_3___CTOR_B__3_OFFSET UNITYSDK_OFFSET(0x15D7F570)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass14_3_TypeDefinitionIndex = 9077;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_3 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* serialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_3__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__3(::System::Buffers::IBufferWriter_1<::System::Byte>* x, ::System::Object* y, ::MessagePack::MessagePackSerializerOptions* z, ::System::Threading::CancellationToken a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::IBufferWriter_1<::System::Byte>*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_3___CTOR_B__3_OFFSET))(this, x, y, z, a);
		}
	};
}
