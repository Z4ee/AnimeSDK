#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E7D30)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS13_0__GETMETHOD_B__0_OFFSET UNITYSDK_OFFSET(0x1B7E7D40)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c__DisplayClass13_0_TypeDefinitionIndex = 28179;

	class MessagePackSerializer_CompiledMethods___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::String* methodName; // 0x10
		::Il2CppArray<::System::Type*>* parameters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMethod_b__0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS13_0__GETMETHOD_B__0_OFFSET))(this, x);
		}
	};
}
