#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15D72E60)
#define MESSAGEPACK_MESSAGEPACKSERIALIZATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15D77C80)
#define MESSAGEPACK_MESSAGEPACKSERIALIZATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x15D77CF0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15D77C20)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializationException_TypeDefinitionIndex = 9066;

	class MessagePackSerializationException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZATIONEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZATIONEXCEPTION__CTOR_2_OFFSET))(this, message, inner);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZATIONEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}
	};
}
