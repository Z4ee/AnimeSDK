#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::IO { class Stream; }
namespace System::Reflection { class MethodInfo; }
namespace System::Threading::Tasks { class Task; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CAF00)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_2___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0x1B6CB500)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass14_2_TypeDefinitionIndex = 7168;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_2 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* serialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_2__CTOR_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* __ctor_b__2(::System::IO::Stream* a1, ::System::Object* a2, ::MessagePack::MessagePackSerializerOptions* a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_2___CTOR_B__2_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
