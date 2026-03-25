#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SharpJson { class Lexer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SHARPJSON_JSONDECODER_DECODETEXT_OFFSET UNITYSDK_OFFSET(0x1838C820)
#define SHARPJSON_JSONDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x1838C390)
#define SHARPJSON_JSONDECODER_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1838C340)
#define SHARPJSON_JSONDECODER_GET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x1838C360)
#define SHARPJSON_JSONDECODER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1838D350)
#define SHARPJSON_JSONDECODER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1838C870)
#define SHARPJSON_JSONDECODER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1838C520)
#define SHARPJSON_JSONDECODER_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1838C350)
#define SHARPJSON_JSONDECODER_SET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x1838C370)
#define SHARPJSON_JSONDECODER_TRIGGERERROR_OFFSET UNITYSDK_OFFSET(0x1838CD10)
#define SHARPJSON_JSONDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1838C380)

namespace SharpJson
{
	inline static constexpr unsigned int JsonDecoder_TypeDefinitionIndex = 30634;

	class JsonDecoder : public ::System::Object
	{
	public:
		::System::String* _errorMessage_k__BackingField; // 0x10
		::SharpJson::Lexer* lexer; // 0x18
		::System::Boolean _parseNumbersAsFloat_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER__CTOR_OFFSET))(this);
		}

		::System::String* get_errorMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_GET_ERRORMESSAGE_OFFSET))(this);
		}

		::System::Void set_errorMessage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_SET_ERRORMESSAGE_OFFSET))(this, value);
		}

		::System::Boolean get_parseNumbersAsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_GET_PARSENUMBERSASFLOAT_OFFSET))(this);
		}

		::System::Void set_parseNumbersAsFloat(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_SET_PARSENUMBERSASFLOAT_OFFSET))(this, value);
		}

		::System::Object* Decode(::System::String* text)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_DECODE_OFFSET))(this, text);
		}

		static ::System::Object* DecodeText(::System::String* text)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_DECODETEXT_OFFSET))(text);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Object*>* ParseObject()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_PARSEOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Object*>* ParseArray()
		{
			return ((::System::Collections::Generic::IList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_PARSEARRAY_OFFSET))(this);
		}

		::System::Object* ParseValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_PARSEVALUE_OFFSET))(this);
		}

		::System::Void TriggerError(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_TRIGGERERROR_OFFSET))(this, message);
		}
	};
}
