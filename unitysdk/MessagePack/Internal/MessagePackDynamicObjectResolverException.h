#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSerializationException.h"

namespace System { class String; }

#define MESSAGEPACK_INTERNAL_MESSAGEPACKDYNAMICOBJECTRESOLVEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F9350)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int MessagePackDynamicObjectResolverException_TypeDefinitionIndex = 28206;

	class MessagePackDynamicObjectResolverException : public ::MessagePack::MessagePackSerializationException
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_MESSAGEPACKDYNAMICOBJECTRESOLVEREXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
