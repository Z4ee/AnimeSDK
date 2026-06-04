#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace Newtonsoft::Json { class JsonReader; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1880ADD0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1881F570)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x188076D0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18807320)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1881F4B0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1881F520)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1881F450)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializationException_TypeDefinitionIndex = 9270;

	class JsonSerializationException : public ::Newtonsoft::Json::JsonException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		static ::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::JsonReader* a1, ::System::String* a2)
		{
			return ((::Newtonsoft::Json::JsonSerializationException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::JsonSerializationException* Create_1(::Newtonsoft::Json::JsonReader* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::Newtonsoft::Json::JsonSerializationException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_1_OFFSET))(a1, a2, a3);
		}

		static ::Newtonsoft::Json::JsonSerializationException* Create_2(::Newtonsoft::Json::IJsonLineInfo* a1, ::System::String* a2, ::System::String* a3, ::System::Exception* a4)
		{
			return ((::Newtonsoft::Json::JsonSerializationException*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_2_OFFSET))(a1, a2, a3, a4);
		}
	};
}
