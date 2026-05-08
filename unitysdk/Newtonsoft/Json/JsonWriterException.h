#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B605610)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1B605470)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1B6051D0)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1B6051E0)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B605270)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B6052F0)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B605380)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B6053D0)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6051F0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonWriterException_TypeDefinitionIndex = 6886;

	class JsonWriterException : public ::Newtonsoft::Json::JsonException
	{
	public:
		::System::String* _Path_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Exception* innerException, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_4_OFFSET))(this, message, innerException, path);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_SET_PATH_OFFSET))(this, value);
		}

		static ::Newtonsoft::Json::JsonWriterException* Create(::Newtonsoft::Json::JsonWriter* writer, ::System::String* message, ::System::Exception* ex)
		{
			return ((::Newtonsoft::Json::JsonWriterException*(*)(::Newtonsoft::Json::JsonWriter*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_OFFSET))(writer, message, ex);
		}

		static ::Newtonsoft::Json::JsonWriterException* Create_1(::System::String* path, ::System::String* message, ::System::Exception* ex)
		{
			return ((::Newtonsoft::Json::JsonWriterException*(*)(::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_1_OFFSET))(path, message, ex);
		}
	};
}
