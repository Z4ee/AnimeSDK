#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializer_CompiledMethods; }
namespace System { class Type; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B932B60)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B932B90)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1B932BA0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer___c_TypeDefinitionIndex = 7189;

	class MessagePackSerializer___c : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializer___c** StaticGet___9()
		{
			return (::MessagePack::MessagePackSerializer___c**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer___c_TypeDefinitionIndex)->GetStaticField(0xC6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER___C__CTOR_OFFSET))(this);
		}

		::MessagePack::MessagePackSerializer_CompiledMethods* __cctor_b__42_0(::System::Type* a1)
		{
			return ((::MessagePack::MessagePackSerializer_CompiledMethods*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER___C___CCTOR_B__42_0_OFFSET))(this, a1);
		}
	};
}
