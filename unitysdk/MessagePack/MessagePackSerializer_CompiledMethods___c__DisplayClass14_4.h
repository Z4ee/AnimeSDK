#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::IO { class Stream; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1737C530)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_4___CTOR_B__6_OFFSET UNITYSDK_OFFSET(0x1737D070)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass14_4_TypeDefinitionIndex = 9275;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_4 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* deserialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_4__CTOR_OFFSET))(this);
		}

		::System::Object* __ctor_b__6(::System::IO::Stream* x, ::MessagePack::MessagePackSerializerOptions* y, ::System::Threading::CancellationToken z)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::Stream*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_4___CTOR_B__6_OFFSET))(this, x, y, z);
		}
	};
}
