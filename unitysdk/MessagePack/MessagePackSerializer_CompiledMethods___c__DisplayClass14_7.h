#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_7__CTOR_OFFSET UNITYSDK_OFFSET(0x15D7ECD0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_7___CTOR_B__9_OFFSET UNITYSDK_OFFSET(0x15D7FE90)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass14_7_TypeDefinitionIndex = 9081;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_7 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* deserialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_7__CTOR_OFFSET))(this);
		}

		::System::Object* __ctor_b__9(::System::Buffers::ReadOnlySequence_1<::System::Byte> x, ::MessagePack::MessagePackSerializerOptions* y, ::System::Threading::CancellationToken z)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_7___CTOR_B__9_OFFSET))(this, x, y, z);
		}
	};
}
