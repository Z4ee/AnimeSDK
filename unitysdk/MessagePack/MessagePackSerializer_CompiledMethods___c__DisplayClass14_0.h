#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D7EA70)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x15D7EE30)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass14_0_TypeDefinitionIndex = 9074;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* serialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* __ctor_b__0(::System::Object* x, ::MessagePack::MessagePackSerializerOptions* y, ::System::Threading::CancellationToken z)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_0___CTOR_B__0_OFFSET))(this, x, y, z);
		}
	};
}
