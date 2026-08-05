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

#define NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1F7FA7D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_ENSUREWRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x1F7FB560)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1F7FA7A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x1F7FA260)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_BASE64ENCODER_OFFSET UNITYSDK_OFFSET(0x1F7FA1E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTATION_OFFSET UNITYSDK_OFFSET(0x1F7FA2E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTCHAR_OFFSET UNITYSDK_OFFSET(0x1F7FA590)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1F7FA360)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTENAME_OFFSET UNITYSDK_OFFSET(0x1F7FA5C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1F7FAF40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x1F7FA270)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTATION_OFFSET UNITYSDK_OFFSET(0x1F7FA2F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTCHAR_OFFSET UNITYSDK_OFFSET(0x1F7FA5A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1F7FA370)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTENAME_OFFSET UNITYSDK_OFFSET(0x1F7FA5D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_UPDATECHARESCAPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1F7FA4C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1F7FCFD0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x1F7FAAC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEESCAPEDSTRING_OFFSET UNITYSDK_OFFSET(0x1F7FACD0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTSPACE_OFFSET UNITYSDK_OFFSET(0x1F7FB1F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1F7FB010)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_1_OFFSET UNITYSDK_OFFSET(0x1F7FB800)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET UNITYSDK_OFFSET(0x1F7FB630)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1F7FB260)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x1F7FADA0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F7FABB0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1F7FB3A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x1F7FA990)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1F7FA9F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x1F7FA930)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1F7FB300)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEDELIMITER_OFFSET UNITYSDK_OFFSET(0x1F7FB1C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F7FB220)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_10_OFFSET UNITYSDK_OFFSET(0x1F7FBEB0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_11_OFFSET UNITYSDK_OFFSET(0x1F7FBFD0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_12_OFFSET UNITYSDK_OFFSET(0x1F7FC070)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_13_OFFSET UNITYSDK_OFFSET(0x1F7FC0E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_14_OFFSET UNITYSDK_OFFSET(0x1F7FC170)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_15_OFFSET UNITYSDK_OFFSET(0x1F7FC1E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_16_OFFSET UNITYSDK_OFFSET(0x1F7FC280)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_17_OFFSET UNITYSDK_OFFSET(0x1F7FC330)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_18_OFFSET UNITYSDK_OFFSET(0x1F7FC630)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_19_OFFSET UNITYSDK_OFFSET(0x1F7FC8C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1F7FB3D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_20_OFFSET UNITYSDK_OFFSET(0x1F7FCBE0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_21_OFFSET UNITYSDK_OFFSET(0x1F7FCCD0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_22_OFFSET UNITYSDK_OFFSET(0x1F7FCDD0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_2_OFFSET UNITYSDK_OFFSET(0x1F7FB590)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_3_OFFSET UNITYSDK_OFFSET(0x1F7FB6B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_4_OFFSET UNITYSDK_OFFSET(0x1F7FB720)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_5_OFFSET UNITYSDK_OFFSET(0x1F7FB7C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_6_OFFSET UNITYSDK_OFFSET(0x1F7FBA80)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_7_OFFSET UNITYSDK_OFFSET(0x1F7FBB30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_8_OFFSET UNITYSDK_OFFSET(0x1F7FBCA0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_9_OFFSET UNITYSDK_OFFSET(0x1F7FBD50)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1F7FB250)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1F7FD080)
#define NEWTONSOFT_JSON_JSONTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FA5E0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonTextWriter_TypeDefinitionIndex = 7017;

	class JsonTextWriter : public ::Newtonsoft::Json::JsonWriter
	{
	public:
		::Newtonsoft::Json::IArrayPool_1<::System::Char>* _arrayPool; // 0x60
		::Il2CppArray<::System::Boolean>* _charEscapeFlags; // 0x68
		::Il2CppArray<::System::Char>* _writeBuffer; // 0x70
		::Il2CppArray<::System::Char>* _indentChars; // 0x78
		::Newtonsoft::Json::Utilities::Base64Encoder* _base64Encoder; // 0x80
		::System::IO::TextWriter* _writer; // 0x88
		::System::Char _quoteChar; // 0x90
		::System::Char _indentChar; // 0x92
		::System::Boolean _quoteName; // 0x94
		::System::Int32 _indentation; // 0x98

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
