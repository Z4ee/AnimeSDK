#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/Newtonsoft/Json/JsonWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }
namespace Newtonsoft::Json::Utilities { class Base64Encoder; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class TextWriter; }

#define NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E3BAA60)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_ENSUREWRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E3BB7B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E3BAA30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x1E3BA4C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_BASE64ENCODER_OFFSET UNITYSDK_OFFSET(0x1E3BA450)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTATION_OFFSET UNITYSDK_OFFSET(0x1E3BA540)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTCHAR_OFFSET UNITYSDK_OFFSET(0x1E3BA810)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1E3BA5C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTENAME_OFFSET UNITYSDK_OFFSET(0x1E3BA840)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1E3BB1B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x1E3BA4D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTATION_OFFSET UNITYSDK_OFFSET(0x1E3BA550)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTCHAR_OFFSET UNITYSDK_OFFSET(0x1E3BA820)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1E3BA5D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTENAME_OFFSET UNITYSDK_OFFSET(0x1E3BA850)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_UPDATECHARESCAPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1E3BA740)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1E3BD180)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x1E3BAD40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEESCAPEDSTRING_OFFSET UNITYSDK_OFFSET(0x1E3BAF40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTSPACE_OFFSET UNITYSDK_OFFSET(0x1E3BB470)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1E3BB280)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_1_OFFSET UNITYSDK_OFFSET(0x1E3BBA30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET UNITYSDK_OFFSET(0x1E3BB870)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1E3BB4E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x1E3BB010)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E3BAE20)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1E3BB600)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x1E3BAC20)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BAC80)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x1E3BABC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1E3BB570)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEDELIMITER_OFFSET UNITYSDK_OFFSET(0x1E3BB440)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E3BB4A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_10_OFFSET UNITYSDK_OFFSET(0x1E3BC0E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_11_OFFSET UNITYSDK_OFFSET(0x1E3BC1F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_12_OFFSET UNITYSDK_OFFSET(0x1E3BC290)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_13_OFFSET UNITYSDK_OFFSET(0x1E3BC300)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_14_OFFSET UNITYSDK_OFFSET(0x1E3BC390)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_15_OFFSET UNITYSDK_OFFSET(0x1E3BC400)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_16_OFFSET UNITYSDK_OFFSET(0x1E3BC490)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_17_OFFSET UNITYSDK_OFFSET(0x1E3BC530)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_18_OFFSET UNITYSDK_OFFSET(0x1E3BC820)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_19_OFFSET UNITYSDK_OFFSET(0x1E3BCA90)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1E3BB630)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_20_OFFSET UNITYSDK_OFFSET(0x1E3BCDB0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_21_OFFSET UNITYSDK_OFFSET(0x1E3BCE90)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_22_OFFSET UNITYSDK_OFFSET(0x1E3BCF80)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_2_OFFSET UNITYSDK_OFFSET(0x1E3BB7E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_3_OFFSET UNITYSDK_OFFSET(0x1E3BB8F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_4_OFFSET UNITYSDK_OFFSET(0x1E3BB950)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_5_OFFSET UNITYSDK_OFFSET(0x1E3BB9F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_6_OFFSET UNITYSDK_OFFSET(0x1E3BBCB0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_7_OFFSET UNITYSDK_OFFSET(0x1E3BBD60)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_8_OFFSET UNITYSDK_OFFSET(0x1E3BBED0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_9_OFFSET UNITYSDK_OFFSET(0x1E3BBF80)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1E3BB4D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1E3BD220)
#define NEWTONSOFT_JSON_JSONTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BA860)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonTextWriter_TypeDefinitionIndex = 7013;

	class JsonTextWriter : public ::Newtonsoft::Json::JsonWriter
	{
	public:
		::Il2CppArray<::System::Boolean>* _charEscapeFlags; // 0x60
		::Il2CppArray<::System::Char>* _writeBuffer; // 0x68
		::System::IO::TextWriter* _writer; // 0x70
		::Newtonsoft::Json::Utilities::Base64Encoder* _base64Encoder; // 0x78
		::Il2CppArray<::System::Char>* _indentChars; // 0x80
		::Newtonsoft::Json::IArrayPool_1<::System::Char>* _arrayPool; // 0x88
		::System::Int32 _indentation; // 0x90
		::System::Char _indentChar; // 0x94
		::System::Boolean _quoteName; // 0x96
		::System::Char _quoteChar; // 0x98

		::System::Void _ctor(::System::IO::TextWriter* textWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER__CTOR_OFFSET))(this, textWriter);
		}

		::Newtonsoft::Json::Utilities::Base64Encoder* get_Base64Encoder()
		{
			return ((::Newtonsoft::Json::Utilities::Base64Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_BASE64ENCODER_OFFSET))(this);
		}

		::Newtonsoft::Json::IArrayPool_1<::System::Char>* get_ArrayPool()
		{
			return ((::Newtonsoft::Json::IArrayPool_1<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_ARRAYPOOL_OFFSET))(this);
		}

		::System::Void set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<::System::Char>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_ARRAYPOOL_OFFSET))(this, value);
		}

		::System::Int32 get_Indentation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTATION_OFFSET))(this);
		}

		::System::Void set_Indentation(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTATION_OFFSET))(this, value);
		}

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Void set_QuoteChar(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTECHAR_OFFSET))(this, value);
		}

		::System::Char get_IndentChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTCHAR_OFFSET))(this);
		}

		::System::Void set_IndentChar(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTCHAR_OFFSET))(this, value);
		}

		::System::Boolean get_QuoteName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTENAME_OFFSET))(this);
		}

		::System::Void set_QuoteName(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTENAME_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteStartObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTOBJECT_OFFSET))(this);
		}

		::System::Void WriteStartArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTARRAY_OFFSET))(this);
		}

		::System::Void WriteStartConstructor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(this, name);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEEND_OFFSET))(this, token);
		}

		::System::Void WritePropertyName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_OFFSET))(this, name);
		}

		::System::Void WritePropertyName_1(::System::String* name, ::System::Boolean escape)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_1_OFFSET))(this, name, escape);
		}

		::System::Void OnStringEscapeHandlingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET))(this);
		}

		::System::Void UpdateCharEscapeFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_UPDATECHARESCAPEFLAGS_OFFSET))(this);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENT_OFFSET))(this);
		}

		::System::Void WriteValueDelimiter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEDELIMITER_OFFSET))(this);
		}

		::System::Void WriteIndentSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTSPACE_OFFSET))(this);
		}

		::System::Void WriteValueInternal(::System::String* value, ::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNAL_OFFSET))(this, value, token);
		}

		::System::Void WriteValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void WriteNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENULL_OFFSET))(this);
		}

		::System::Void WriteUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEUNDEFINED_OFFSET))(this);
		}

		::System::Void WriteRaw(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAW_OFFSET))(this, json);
		}

		::System::Void WriteValue_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_1_OFFSET))(this, value);
		}

		::System::Void WriteEscapedString(::System::String* value, ::System::Boolean quote)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEESCAPEDSTRING_OFFSET))(this, value, quote);
		}

		::System::Void WriteValue_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_2_OFFSET))(this, value);
		}

		::System::Void WriteValue_3(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_3_OFFSET))(this, value);
		}

		::System::Void WriteValue_4(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_4_OFFSET))(this, value);
		}

		::System::Void WriteValue_5(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_5_OFFSET))(this, value);
		}

		::System::Void WriteValue_6(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_6_OFFSET))(this, value);
		}

		::System::Void WriteValue_7(::System::Nullable_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_7_OFFSET))(this, value);
		}

		::System::Void WriteValue_8(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_8_OFFSET))(this, value);
		}

		::System::Void WriteValue_9(::System::Nullable_1<::System::Double> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_9_OFFSET))(this, value);
		}

		::System::Void WriteValue_10(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_10_OFFSET))(this, value);
		}

		::System::Void WriteValue_11(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_11_OFFSET))(this, value);
		}

		::System::Void WriteValue_12(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_12_OFFSET))(this, value);
		}

		::System::Void WriteValue_13(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_13_OFFSET))(this, value);
		}

		::System::Void WriteValue_14(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_14_OFFSET))(this, value);
		}

		::System::Void WriteValue_15(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_15_OFFSET))(this, value);
		}

		::System::Void WriteValue_16(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_16_OFFSET))(this, value);
		}

		::System::Void WriteValue_17(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_17_OFFSET))(this, value);
		}

		::System::Void WriteValue_18(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_18_OFFSET))(this, value);
		}

		::System::Void WriteValue_19(::System::DateTimeOffset value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_19_OFFSET))(this, value);
		}

		::System::Void WriteValue_20(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_20_OFFSET))(this, value);
		}

		::System::Void WriteValue_21(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_21_OFFSET))(this, value);
		}

		::System::Void WriteValue_22(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_22_OFFSET))(this, value);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void EnsureWriteBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_ENSUREWRITEBUFFER_OFFSET))(this);
		}

		::System::Void WriteIntegerValue(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET))(this, value);
		}

		::System::Void WriteIntegerValue_1(::System::UInt64 uvalue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_1_OFFSET))(this, uvalue);
		}
	};
}
