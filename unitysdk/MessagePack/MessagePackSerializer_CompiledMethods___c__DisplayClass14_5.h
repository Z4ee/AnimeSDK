#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::IO { class Stream; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_5__CTOR_OFFSET UNITYSDK_OFFSET(0x18187E80)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_5___CTOR_B__7_OFFSET UNITYSDK_OFFSET(0x18188900)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass14_5_TypeDefinitionIndex = 7179;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_5 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* deserialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_5__CTOR_OFFSET))(this);
		}

		::System::Threading::Tasks::ValueTask_1<::System::Object*> __ctor_b__7(::System::IO::Stream* a1, ::MessagePack::MessagePackSerializerOptions* a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Object*>(*)(::PVOID, ::System::IO::Stream*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_5___CTOR_B__7_OFFSET))(this, a1, a2, a3);
		}
	};
}
