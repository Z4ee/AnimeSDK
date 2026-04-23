#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Xml { class SmallXmlParser_AttrListImpl; }
namespace Mono::Xml { class SmallXmlParser_IContentHandler; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections { class Stack; }
namespace System::IO { class TextReader; }
namespace System::Text { class StringBuilder; }

#define MONO_XML_SMALLXMLPARSER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x177D1DC0)
#define MONO_XML_SMALLXMLPARSER_ERROR_OFFSET UNITYSDK_OFFSET(0x177D0150)
#define MONO_XML_SMALLXMLPARSER_EXPECT_OFFSET UNITYSDK_OFFSET(0x177D0A80)
#define MONO_XML_SMALLXMLPARSER_HANDLEBUFFEREDCONTENT_OFFSET UNITYSDK_OFFSET(0x177D1C40)
#define MONO_XML_SMALLXMLPARSER_HANDLEWHITESPACES_OFFSET UNITYSDK_OFFSET(0x177D0740)
#define MONO_XML_SMALLXMLPARSER_ISNAMECHAR_OFFSET UNITYSDK_OFFSET(0x177D04D0)
#define MONO_XML_SMALLXMLPARSER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x177D0560)
#define MONO_XML_SMALLXMLPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x177CFB20)
#define MONO_XML_SMALLXMLPARSER_PEEK_OFFSET UNITYSDK_OFFSET(0x177D0A50)
#define MONO_XML_SMALLXMLPARSER_READATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x177D23C0)
#define MONO_XML_SMALLXMLPARSER_READCDATASECTION_OFFSET UNITYSDK_OFFSET(0x177D1F20)
#define MONO_XML_SMALLXMLPARSER_READCHARACTERREFERENCE_OFFSET UNITYSDK_OFFSET(0x177D26A0)
#define MONO_XML_SMALLXMLPARSER_READCHARACTERS_OFFSET UNITYSDK_OFFSET(0x177D2580)
#define MONO_XML_SMALLXMLPARSER_READCOMMENT_OFFSET UNITYSDK_OFFSET(0x177D2260)
#define MONO_XML_SMALLXMLPARSER_READCONTENT_OFFSET UNITYSDK_OFFSET(0x177D1260)
#define MONO_XML_SMALLXMLPARSER_READNAME_OFFSET UNITYSDK_OFFSET(0x177D0F90)
#define MONO_XML_SMALLXMLPARSER_READREFERENCE_OFFSET UNITYSDK_OFFSET(0x177D0D50)
#define MONO_XML_SMALLXMLPARSER_READUNTIL_OFFSET UNITYSDK_OFFSET(0x177D0B70)
#define MONO_XML_SMALLXMLPARSER_READ_OFFSET UNITYSDK_OFFSET(0x177D0A00)
#define MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_1_OFFSET UNITYSDK_OFFSET(0x177D0650)
#define MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x177D0580)
#define MONO_XML_SMALLXMLPARSER_UNEXPECTEDENDERROR_OFFSET UNITYSDK_OFFSET(0x177D03B0)
#define MONO_XML_SMALLXMLPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x177CF9A0)

namespace Mono::Xml
{
	inline static constexpr unsigned int SmallXmlParser_TypeDefinitionIndex = 24;

	class SmallXmlParser : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* nameBuffer; // 0x10
		::System::Collections::Stack* xmlSpaces; // 0x18
		::System::IO::TextReader* reader; // 0x20
		::System::String* xmlSpace; // 0x28
		::Mono::Xml::SmallXmlParser_AttrListImpl* attributes; // 0x30
		::Mono::Xml::SmallXmlParser_IContentHandler* handler; // 0x38
		::System::Collections::Stack* elementNames; // 0x40
		::System::Text::StringBuilder* buffer; // 0x48
		::System::Boolean isWhitespace; // 0x50
		::System::Boolean resetColumn; // 0x51
		::System::Int32 line; // 0x54
		::System::Int32 column; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER__CTOR_OFFSET))(this);
		}

		::System::Exception* Error(::System::String* msg)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ERROR_OFFSET))(this, msg);
		}

		::System::Exception* UnexpectedEndError()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_UNEXPECTEDENDERROR_OFFSET))(this);
		}

		::System::Boolean IsNameChar(::System::Char c, ::System::Boolean start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ISNAMECHAR_OFFSET))(this, c, start);
		}

		::System::Boolean IsWhitespace(::System::Int32 c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ISWHITESPACE_OFFSET))(this, c);
		}

		::System::Void SkipWhitespaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_OFFSET))(this);
		}

		::System::Void HandleWhitespaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_HANDLEWHITESPACES_OFFSET))(this);
		}

		::System::Void SkipWhitespaces_1(::System::Boolean expected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_1_OFFSET))(this, expected);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READ_OFFSET))(this);
		}

		::System::Void Expect(::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_EXPECT_OFFSET))(this, c);
		}

		::System::String* ReadUntil(::System::Char until, ::System::Boolean handleReferences)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READUNTIL_OFFSET))(this, until, handleReferences);
		}

		::System::String* ReadName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READNAME_OFFSET))(this);
		}

		::System::Void Parse(::System::IO::TextReader* input, ::Mono::Xml::SmallXmlParser_IContentHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*, ::Mono::Xml::SmallXmlParser_IContentHandler*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_PARSE_OFFSET))(this, input, handler);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_CLEANUP_OFFSET))(this);
		}

		::System::Void ReadContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCONTENT_OFFSET))(this);
		}

		::System::Void HandleBufferedContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_HANDLEBUFFEREDCONTENT_OFFSET))(this);
		}

		::System::Void ReadCharacters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCHARACTERS_OFFSET))(this);
		}

		::System::Void ReadReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READREFERENCE_OFFSET))(this);
		}

		::System::Int32 ReadCharacterReference()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCHARACTERREFERENCE_OFFSET))(this);
		}

		::System::Void ReadAttribute(::Mono::Xml::SmallXmlParser_AttrListImpl* a)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_AttrListImpl*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READATTRIBUTE_OFFSET))(this, a);
		}

		::System::Void ReadCDATASection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCDATASECTION_OFFSET))(this);
		}

		::System::Void ReadComment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCOMMENT_OFFSET))(this);
		}
	};
}
