#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace Newtonsoft::Json { class JsonReader; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x17A5C0F0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_2_OFFSET UNITYSDK_OFFSET(0x17A700C0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x17A58840)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A58490)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A70000)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17A70070)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6FFA0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializationException_TypeDefinitionIndex = 8367;

	class JsonSerializationException : public ::Newtonsoft::Json::JsonException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}

		static ::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::JsonReader* reader, ::System::String* message)
		{
			return ((::Newtonsoft::Json::JsonSerializationException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET))(reader, message);
		}

		static ::Newtonsoft::Json::JsonSerializationException* Create_1(::Newtonsoft::Json::JsonReader* reader, ::System::String* message, ::System::Exception* ex)
		{
			return ((::Newtonsoft::Json::JsonSerializationException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_1_OFFSET))(reader, message, ex);
		}

		static ::Newtonsoft::Json::JsonSerializationException* Create_2(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::System::String* path, ::System::String* message, ::System::Exception* ex)
		{
			return ((::Newtonsoft::Json::JsonSerializationException*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_2_OFFSET))(lineInfo, path, message, ex);
		}
	};
}
