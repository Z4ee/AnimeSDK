#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::IO { class Stream; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15D7EC30)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_1___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x15D7F050)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass14_1_TypeDefinitionIndex = 9075;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* serialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__1(::System::IO::Stream* x, ::System::Object* y, ::MessagePack::MessagePackSerializerOptions* z, ::System::Threading::CancellationToken a)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_1___CTOR_B__1_OFFSET))(this, x, y, z, a);
		}
	};
}
