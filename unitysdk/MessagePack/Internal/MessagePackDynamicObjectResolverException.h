#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSerializationException.h"

namespace System { class String; }

#define MESSAGEPACK_INTERNAL_MESSAGEPACKDYNAMICOBJECTRESOLVEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6A9BE0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int MessagePackDynamicObjectResolverException_TypeDefinitionIndex = 7288;

	class MessagePackDynamicObjectResolverException : public ::MessagePack::MessagePackSerializationException
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_MESSAGEPACKDYNAMICOBJECTRESOLVEREXCEPTION__CTOR_OFFSET))(this, a1);
		}
	};
}
