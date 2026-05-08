#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSerializationException.h"

namespace System { class String; }

#define MESSAGEPACK_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AE140)

namespace MessagePack
{
	inline static constexpr unsigned int FormatterNotRegisteredException_TypeDefinitionIndex = 26531;

	class FormatterNotRegisteredException : public ::MessagePack::MessagePackSerializationException
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
