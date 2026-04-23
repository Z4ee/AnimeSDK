#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1737C5C0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS16_0__GETMETHOD_B__0_OFFSET UNITYSDK_OFFSET(0x1737D960)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass16_0_TypeDefinitionIndex = 9279;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::String* methodName; // 0x10
		::Il2CppArray<::System::Type*>* parameters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMethod_b__0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS16_0__GETMETHOD_B__0_OFFSET))(this, x);
		}
	};
}
