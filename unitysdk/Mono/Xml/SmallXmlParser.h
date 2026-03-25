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

#define MONO_XML_SMALLXMLPARSER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x161A61D0)
#define MONO_XML_SMALLXMLPARSER_ERROR_OFFSET UNITYSDK_OFFSET(0x161A4560)
#define MONO_XML_SMALLXMLPARSER_EXPECT_OFFSET UNITYSDK_OFFSET(0x161A4E90)
#define MONO_XML_SMALLXMLPARSER_HANDLEBUFFEREDCONTENT_OFFSET UNITYSDK_OFFSET(0x161A6050)
#define MONO_XML_SMALLXMLPARSER_HANDLEWHITESPACES_OFFSET UNITYSDK_OFFSET(0x161A4B50)
#define MONO_XML_SMALLXMLPARSER_ISNAMECHAR_OFFSET UNITYSDK_OFFSET(0x161A48E0)
#define MONO_XML_SMALLXMLPARSER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x161A4970)
#define MONO_XML_SMALLXMLPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x161A3F30)
#define MONO_XML_SMALLXMLPARSER_PEEK_OFFSET UNITYSDK_OFFSET(0x161A4E60)
#define MONO_XML_SMALLXMLPARSER_READATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x161A67D0)
#define MONO_XML_SMALLXMLPARSER_READCDATASECTION_OFFSET UNITYSDK_OFFSET(0x161A6330)
#define MONO_XML_SMALLXMLPARSER_READCHARACTERREFERENCE_OFFSET UNITYSDK_OFFSET(0x161A6AB0)
#define MONO_XML_SMALLXMLPARSER_READCHARACTERS_OFFSET UNITYSDK_OFFSET(0x161A6990)
#define MONO_XML_SMALLXMLPARSER_READCOMMENT_OFFSET UNITYSDK_OFFSET(0x161A6670)
#define MONO_XML_SMALLXMLPARSER_READCONTENT_OFFSET UNITYSDK_OFFSET(0x161A5670)
#define MONO_XML_SMALLXMLPARSER_READNAME_OFFSET UNITYSDK_OFFSET(0x161A53A0)
#define MONO_XML_SMALLXMLPARSER_READREFERENCE_OFFSET UNITYSDK_OFFSET(0x161A5160)
#define MONO_XML_SMALLXMLPARSER_READUNTIL_OFFSET UNITYSDK_OFFSET(0x161A4F80)
#define MONO_XML_SMALLXMLPARSER_READ_OFFSET UNITYSDK_OFFSET(0x161A4E10)
#define MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_1_OFFSET UNITYSDK_OFFSET(0x161A4A60)
#define MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x161A4990)
#define MONO_XML_SMALLXMLPARSER_UNEXPECTEDENDERROR_OFFSET UNITYSDK_OFFSET(0x161A47C0)
#define MONO_XML_SMALLXMLPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x161A3DB0)

namespace Mono::Xml
{
	inline static constexpr unsigned int SmallXmlParser_TypeDefinitionIndex = 24;

	class SmallXmlParser : public ::System::Object
	{
	public:
		::System::Collections::Stack* elementNames; // 0x10
		::Il2CppArray<::System::Char>* nameBuffer; // 0x18
		::Mono::Xml::SmallXmlParser_IContentHandler* handler; // 0x20
		::Mono::Xml::SmallXmlParser_AttrListImpl* attributes; // 0x28
		::System::Collections::Stack* xmlSpaces; // 0x30
		::System::String* xmlSpace; // 0x38
		::System::Text::StringBuilder* buffer; // 0x40
		::System::IO::TextReader* reader; // 0x48
		::System::Int32 line; // 0x50
		::System::Int32 column; // 0x54
		::System::Boolean resetColumn; // 0x58
		::System::Boolean isWhitespace; // 0x59

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
