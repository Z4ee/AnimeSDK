#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSerializationException.h"

namespace System { class String; }

#define MESSAGEPACK_RESOLVERS_MESSAGEPACKDYNAMICUNIONRESOLVEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FEB60)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int MessagePackDynamicUnionResolverException_TypeDefinitionIndex = 26615;

	class MessagePackDynamicUnionResolverException : public ::MessagePack::MessagePackSerializationException
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_MESSAGEPACKDYNAMICUNIONRESOLVEREXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
