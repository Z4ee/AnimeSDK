#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSerializationException.h"

namespace System { class String; }

#define MESSAGEPACK_TINYJSONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B1DC0)

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonException_TypeDefinitionIndex = 30799;

	class TinyJsonException : public ::MessagePack::MessagePackSerializationException
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONEXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
