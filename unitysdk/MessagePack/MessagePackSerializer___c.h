#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializer_CompiledMethods; }
namespace System { class Type; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFDBD40)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDBD80)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER___C___CCTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x1DFDBD90)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer___c_TypeDefinitionIndex = 29990;

	class MessagePackSerializer___c : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializer___c** StaticGet___9()
		{
			return (::MessagePack::MessagePackSerializer___c**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer___c_TypeDefinitionIndex)->GetStaticField(0x252F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER___C__CTOR_OFFSET))(this);
		}

		::MessagePack::MessagePackSerializer_CompiledMethods* __cctor_b__13_0(::System::Type* t)
		{
			return ((::MessagePack::MessagePackSerializer_CompiledMethods*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER___C___CCTOR_B__13_0_OFFSET))(this, t);
		}
	};
}
