#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SharpJson { class Lexer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SHARPJSON_JSONDECODER_DECODETEXT_OFFSET UNITYSDK_OFFSET(0x1AC443D0)
#define SHARPJSON_JSONDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x1AC43D30)
#define SHARPJSON_JSONDECODER_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC43CE0)
#define SHARPJSON_JSONDECODER_GET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x1AC43D00)
#define SHARPJSON_JSONDECODER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1AC450E0)
#define SHARPJSON_JSONDECODER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1AC44420)
#define SHARPJSON_JSONDECODER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1AC43EC0)
#define SHARPJSON_JSONDECODER_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC43CF0)
#define SHARPJSON_JSONDECODER_SET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x1AC43D10)
#define SHARPJSON_JSONDECODER_TRIGGERERROR_OFFSET UNITYSDK_OFFSET(0x1AC44B60)
#define SHARPJSON_JSONDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC43D20)

namespace SharpJson
{
	inline static constexpr unsigned int JsonDecoder_TypeDefinitionIndex = 36654;

	class JsonDecoder : public ::System::Object
	{
	public:
		::SharpJson::Lexer* lexer; // 0x10
		::System::String* _errorMessage_k__BackingField; // 0x18
		::System::Boolean _parseNumbersAsFloat_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER__CTOR_OFFSET))(this);
		}

		::System::String* get_errorMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_GET_ERRORMESSAGE_OFFSET))(this);
		}

		::System::Void set_errorMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_SET_ERRORMESSAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_parseNumbersAsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_GET_PARSENUMBERSASFLOAT_OFFSET))(this);
		}

		::System::Void set_parseNumbersAsFloat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_SET_PARSENUMBERSASFLOAT_OFFSET))(this, a1);
		}

		::System::Object* Decode(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_DECODE_OFFSET))(this, a1);
		}

		static ::System::Object* DecodeText(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_DECODETEXT_OFFSET))(a1);
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

		::System::Void TriggerError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_TRIGGERERROR_OFFSET))(this, a1);
		}
	};
}
