#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x166067D0)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x165CC910)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_SET_PATH_OFFSET UNITYSDK_OFFSET(0x16606690)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16606700)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16606750)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x166066A0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonWriterException_TypeDefinitionIndex = 9275;

	class JsonWriterException : public ::Newtonsoft::Json::JsonException
	{
	public:
		::System::String* _Path_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_SET_PATH_OFFSET))(this, a1);
		}

		static ::Newtonsoft::Json::JsonWriterException* Create(::Newtonsoft::Json::JsonWriter* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::Newtonsoft::Json::JsonWriterException*(*)(::Newtonsoft::Json::JsonWriter*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::Newtonsoft::Json::JsonWriterException* Create_1(::System::String* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::Newtonsoft::Json::JsonWriterException*(*)(::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_1_OFFSET))(a1, a2, a3);
		}
	};
}
