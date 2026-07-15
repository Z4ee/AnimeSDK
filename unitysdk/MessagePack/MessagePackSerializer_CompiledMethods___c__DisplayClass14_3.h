#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B936770)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_3___CTOR_B__3_OFFSET UNITYSDK_OFFSET(0x1B936FD0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass14_3_TypeDefinitionIndex = 7183;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_3 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* serialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_3__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__3(::System::Buffers::IBufferWriter_1<::System::Byte>* a1, ::System::Object* a2, ::MessagePack::MessagePackSerializerOptions* a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::IBufferWriter_1<::System::Byte>*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_3___CTOR_B__3_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
