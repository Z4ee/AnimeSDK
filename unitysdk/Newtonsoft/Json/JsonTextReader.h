#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonReader.h"
#include "unitysdk/Newtonsoft/Json/ReadType.h"
#include "unitysdk/Newtonsoft/Json/Utilities/StringBuffer.h"
#include "unitysdk/Newtonsoft/Json/Utilities/StringReference.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json { class JsonReaderException; }
namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }
namespace Newtonsoft::Json::Utilities { class PropertyNameTable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class TextReader; }

#define NEWTONSOFT_JSON_JSONTEXTREADER_BLOCKCOPYCHARS_OFFSET UNITYSDK_OFFSET(0x18823290)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CLEARRECENTSTRING_OFFSET UNITYSDK_OFFSET(0x18828BE0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18829840)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CREATEUNEXPECTEDCHARACTEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x188266D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18824600)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENDCOMMENT_OFFSET UNITYSDK_OFFSET(0x18829590)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFERNOTEMPTY_OFFSET UNITYSDK_OFFSET(0x18822570)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFER_OFFSET UNITYSDK_OFFSET(0x18823AD0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSURECHARS_OFFSET UNITYSDK_OFFSET(0x18823730)
#define NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x18829A10)
#define NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x18829A40)
#define NEWTONSOFT_JSON_JSONTEXTREADER_HANDLENULL_OFFSET UNITYSDK_OFFSET(0x18826420)
#define NEWTONSOFT_JSON_JSONTEXTREADER_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x18829A00)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ISSEPARATOR_OFFSET UNITYSDK_OFFSET(0x18829720)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEWITHTRAILINGSEPARATOR_OFFSET UNITYSDK_OFFSET(0x18827A70)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUE_OFFSET UNITYSDK_OFFSET(0x188295C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ONNEWLINE_OFFSET UNITYSDK_OFFSET(0x18822650)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSECOMMENT_OFFSET UNITYSDK_OFFSET(0x188247A0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x188291E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEFALSE_OFFSET UNITYSDK_OFFSET(0x18829100)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENULL_OFFSET UNITYSDK_OFFSET(0x188287C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNAN_OFFSET UNITYSDK_OFFSET(0x18827CF0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x188269C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x18827B50)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x18826B60)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x18824190)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPOSTVALUE_OFFSET UNITYSDK_OFFSET(0x18824300)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18828C00)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x18822660)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSETRUE_OFFSET UNITYSDK_OFFSET(0x18829020)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x188294D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNICODE_OFFSET UNITYSDK_OFFSET(0x18828860)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNQUOTEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x18828E90)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x18823BC0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURN_OFFSET UNITYSDK_OFFSET(0x18826790)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSLINEFEED_OFFSET UNITYSDK_OFFSET(0x18826840)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSVALUECOMMA_OFFSET UNITYSDK_OFFSET(0x188265C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18827E90)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASBYTES_OFFSET UNITYSDK_OFFSET(0x18825D40)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x18828560)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIME_OFFSET UNITYSDK_OFFSET(0x18825360)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDECIMAL_OFFSET UNITYSDK_OFFSET(0x18828630)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDOUBLE_OFFSET UNITYSDK_OFFSET(0x18828700)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASINT32_OFFSET UNITYSDK_OFFSET(0x18824B90)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASSTRING_OFFSET UNITYSDK_OFFSET(0x18825D10)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READCHARS_OFFSET UNITYSDK_OFFSET(0x188237A0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_1_OFFSET UNITYSDK_OFFSET(0x188232C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_OFFSET UNITYSDK_OFFSET(0x188232B0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READFINISHED_OFFSET UNITYSDK_OFFSET(0x18826860)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNULLCHAR_OFFSET UNITYSDK_OFFSET(0x188263D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x188289A0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x18824C50)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x18822A50)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x18825420)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x18823800)
#define NEWTONSOFT_JSON_JSONTEXTREADER_SET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x18822520)
#define NEWTONSOFT_JSON_JSONTEXTREADER_SHIFTBUFFERIFNEEDED_OFFSET UNITYSDK_OFFSET(0x18822980)
#define NEWTONSOFT_JSON_JSONTEXTREADER_VALIDIDENTIFIERCHAR_OFFSET UNITYSDK_OFFSET(0x18828E60)
#define NEWTONSOFT_JSON_JSONTEXTREADER_WRITECHARTOBUFFER_OFFSET UNITYSDK_OFFSET(0x18828950)
#define NEWTONSOFT_JSON_JSONTEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1881AA20)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonTextReader_TypeDefinitionIndex = 9259;

	class JsonTextReader : public ::Newtonsoft::Json::JsonReader
	{
	public:
		::Newtonsoft::Json::Utilities::StringBuffer _stringBuffer; // 0x70
		::Newtonsoft::Json::IArrayPool_1<::System::Char>* _arrayPool; // 0x80
		::Il2CppArray<::System::Char>* _chars; // 0x88
		::System::IO::TextReader* _reader; // 0x90
		::Newtonsoft::Json::Utilities::PropertyNameTable* NameTable; // 0x98
		::Newtonsoft::Json::Utilities::StringReference _stringReference; // 0xA0
		::System::Int32 _lineNumber; // 0xB0
		::System::Int32 _lineStartPos; // 0xB4
		::System::Boolean _isEndOfFile; // 0xB8
		::System::Int32 _charsUsed; // 0xBC
		::System::Int32 _charPos; // 0xC0

		::System::Void _ctor(::System::IO::TextReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER__CTOR_OFFSET))(this, a1);
		}

		::System::Void set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_SET_ARRAYPOOL_OFFSET))(this, a1);
		}

		::System::Void EnsureBufferNotEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFERNOTEMPTY_OFFSET))(this);
		}

		::System::Void OnNewLine(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ONNEWLINE_OFFSET))(this, a1);
		}

		::System::Void ParseString(::System::Char a1, ::Newtonsoft::Json::ReadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSESTRING_OFFSET))(this, a1, a2);
		}

		static ::System::Void BlockCopyChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Char>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_BLOCKCOPYCHARS_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void ShiftBufferIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_SHIFTBUFFERIFNEEDED_OFFSET))(this);
		}

		::System::Int32 ReadData(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_OFFSET))(this, a1);
		}

		::System::Int32 ReadData_1(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean EnsureChars(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSURECHARS_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReadChars(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READCHARS_OFFSET))(this, a1, a2);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READ_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> ReadAsInt32()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASINT32_OFFSET))(this);
		}

		::System::Nullable_1<::System::DateTime> ReadAsDateTime()
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIME_OFFSET))(this);
		}

		::System::String* ReadAsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadAsBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASBYTES_OFFSET))(this);
		}

		::System::Object* ReadStringValue(::Newtonsoft::Json::ReadType a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGVALUE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::JsonReaderException* CreateUnexpectedCharacterException(::System::Char a1)
		{
			return ((::Newtonsoft::Json::JsonReaderException*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CREATEUNEXPECTEDCHARACTEREXCEPTION_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> ReadAsBoolean()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASBOOLEAN_OFFSET))(this);
		}

		::System::Void ProcessValueComma()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSVALUECOMMA_OFFSET))(this);
		}

		::System::Object* ReadNumberValue(::Newtonsoft::Json::ReadType a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERVALUE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEOFFSET_OFFSET))(this);
		}

		::System::Nullable_1<::System::Decimal> ReadAsDecimal()
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDECIMAL_OFFSET))(this);
		}

		::System::Nullable_1<::System::Double> ReadAsDouble()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDOUBLE_OFFSET))(this);
		}

		::System::Void HandleNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_HANDLENULL_OFFSET))(this);
		}

		::System::Void ReadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READFINISHED_OFFSET))(this);
		}

		::System::Boolean ReadNullChar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNULLCHAR_OFFSET))(this);
		}

		::System::Void EnsureBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFER_OFFSET))(this);
		}

		::System::Void ReadStringIntoBuffer(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGINTOBUFFER_OFFSET))(this, a1);
		}

		::System::Void WriteCharToBuffer(::System::Char a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_WRITECHARTOBUFFER_OFFSET))(this, a1, a2, a3);
		}

		::System::Char ParseUnicode()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNICODE_OFFSET))(this);
		}

		::System::Void ReadNumberIntoBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERINTOBUFFER_OFFSET))(this);
		}

		::System::Void ClearRecentString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CLEARRECENTSTRING_OFFSET))(this);
		}

		::System::Boolean ParsePostValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPOSTVALUE_OFFSET))(this);
		}

		::System::Boolean ParseObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEOBJECT_OFFSET))(this);
		}

		::System::Boolean ParseProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPROPERTY_OFFSET))(this);
		}

		::System::Boolean ValidIdentifierChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_VALIDIDENTIFIERCHAR_OFFSET))(this, a1);
		}

		::System::Void ParseUnquotedProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNQUOTEDPROPERTY_OFFSET))(this);
		}

		::System::Boolean ParseValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEVALUE_OFFSET))(this);
		}

		::System::Void ProcessLineFeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSLINEFEED_OFFSET))(this);
		}

		::System::Void ProcessCarriageReturn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURN_OFFSET))(this, a1);
		}

		::System::Boolean EatWhitespace(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_EATWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void ParseConstructor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSECONSTRUCTOR_OFFSET))(this);
		}

		::System::Void ParseNumber(::Newtonsoft::Json::ReadType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBER_OFFSET))(this, a1);
		}

		::System::Void ParseComment(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSECOMMENT_OFFSET))(this, a1);
		}

		::System::Void EndComment(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENDCOMMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MatchValue(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUE_OFFSET))(this, a1);
		}

		::System::Boolean MatchValueWithTrailingSeparator(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEWITHTRAILINGSEPARATOR_OFFSET))(this, a1);
		}

		::System::Boolean IsSeparator(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ISSEPARATOR_OFFSET))(this, a1);
		}

		::System::Void ParseTrue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSETRUE_OFFSET))(this);
		}

		::System::Void ParseNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENULL_OFFSET))(this);
		}

		::System::Void ParseUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNDEFINED_OFFSET))(this);
		}

		::System::Void ParseFalse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEFALSE_OFFSET))(this);
		}

		::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITY_OFFSET))(this, a1);
		}

		::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITY_OFFSET))(this, a1);
		}

		::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::ReadType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNAN_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CLOSE_OFFSET))(this);
		}

		::System::Boolean HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINEPOSITION_OFFSET))(this);
		}
	};
}
