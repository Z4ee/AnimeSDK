#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSerializationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define MESSAGEPACK_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1666BCE0)
#define MESSAGEPACK_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1666BC80)

namespace MessagePack
{
	inline static constexpr unsigned int FormatterNotRegisteredException_TypeDefinitionIndex = 7110;

	class FormatterNotRegisteredException : public ::MessagePack::MessagePackSerializationException
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
