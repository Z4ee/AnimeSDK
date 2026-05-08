#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define NEWTONSOFT_JSON_JSONEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1B239B60)
#define NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B239A00)
#define NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B239A80)
#define NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B239B10)
#define NEWTONSOFT_JSON_JSONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B239980)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonException_TypeDefinitionIndex = 6865;

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

		static ::Newtonsoft::Json::JsonException* Create(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::System::String* path, ::System::String* message)
		{
			return ((::Newtonsoft::Json::JsonException*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION_CREATE_OFFSET))(lineInfo, path, message);
		}
	};
}
