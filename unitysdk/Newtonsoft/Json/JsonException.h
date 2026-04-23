#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A6BA90)
#define NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A6BAF0)
#define NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17A6BB60)
#define NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6BA30)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonException_TypeDefinitionIndex = 8336;

	class JsonException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}
	};
}
