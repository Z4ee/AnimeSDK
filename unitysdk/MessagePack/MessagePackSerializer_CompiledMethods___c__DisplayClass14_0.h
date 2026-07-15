#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9364D0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1B936910)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass14_0_TypeDefinitionIndex = 7180;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* serialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* __ctor_b__0(::System::Object* a1, ::MessagePack::MessagePackSerializerOptions* a2, ::System::Threading::CancellationToken a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_0___CTOR_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
