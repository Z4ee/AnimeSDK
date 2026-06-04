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

#define MONO_XML_SMALLXMLPARSER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1858C4E0)
#define MONO_XML_SMALLXMLPARSER_ERROR_OFFSET UNITYSDK_OFFSET(0x1858A140)
#define MONO_XML_SMALLXMLPARSER_EXPECT_OFFSET UNITYSDK_OFFSET(0x1858AAC0)
#define MONO_XML_SMALLXMLPARSER_HANDLEBUFFEREDCONTENT_OFFSET UNITYSDK_OFFSET(0x1858C330)
#define MONO_XML_SMALLXMLPARSER_HANDLEWHITESPACES_OFFSET UNITYSDK_OFFSET(0x1858A7A0)
#define MONO_XML_SMALLXMLPARSER_ISNAMECHAR_OFFSET UNITYSDK_OFFSET(0x1858A4C0)
#define MONO_XML_SMALLXMLPARSER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1858A5C0)
#define MONO_XML_SMALLXMLPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x18589A90)
#define MONO_XML_SMALLXMLPARSER_PEEK_OFFSET UNITYSDK_OFFSET(0x1858AA90)
#define MONO_XML_SMALLXMLPARSER_READATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1858CD60)
#define MONO_XML_SMALLXMLPARSER_READCDATASECTION_OFFSET UNITYSDK_OFFSET(0x1858C640)
#define MONO_XML_SMALLXMLPARSER_READCHARACTERREFERENCE_OFFSET UNITYSDK_OFFSET(0x1858D270)
#define MONO_XML_SMALLXMLPARSER_READCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1858CFE0)
#define MONO_XML_SMALLXMLPARSER_READCOMMENT_OFFSET UNITYSDK_OFFSET(0x1858CC00)
#define MONO_XML_SMALLXMLPARSER_READCONTENT_OFFSET UNITYSDK_OFFSET(0x1858B950)
#define MONO_XML_SMALLXMLPARSER_READNAME_OFFSET UNITYSDK_OFFSET(0x1858B570)
#define MONO_XML_SMALLXMLPARSER_READREFERENCE_OFFSET UNITYSDK_OFFSET(0x1858B080)
#define MONO_XML_SMALLXMLPARSER_READUNTIL_OFFSET UNITYSDK_OFFSET(0x1858ABB0)
#define MONO_XML_SMALLXMLPARSER_READ_OFFSET UNITYSDK_OFFSET(0x1858AA40)
#define MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_1_OFFSET UNITYSDK_OFFSET(0x1858A6B0)
#define MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x1858A5E0)
#define MONO_XML_SMALLXMLPARSER_UNEXPECTEDENDERROR_OFFSET UNITYSDK_OFFSET(0x1858A3A0)
#define MONO_XML_SMALLXMLPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x18589910)

namespace Mono::Xml
{
	inline static constexpr unsigned int SmallXmlParser_TypeDefinitionIndex = 24;

	class SmallXmlParser : public ::System::Object
	{
	public:
		::System::Collections::Stack* elementNames; // 0x10
		::System::Collections::Stack* xmlSpaces; // 0x18
		::Mono::Xml::SmallXmlParser_AttrListImpl* attributes; // 0x20
		::Mono::Xml::SmallXmlParser_IContentHandler* handler; // 0x28
		::System::String* xmlSpace; // 0x30
		::Il2CppArray<::System::Char>* nameBuffer; // 0x38
		::System::IO::TextReader* reader; // 0x40
		::System::Text::StringBuilder* buffer; // 0x48
		::System::Int32 line; // 0x50
		::System::Int32 column; // 0x54
		::System::Boolean isWhitespace; // 0x58
		::System::Boolean resetColumn; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER__CTOR_OFFSET))(this);
		}

		::System::Exception* Error(::System::String* a1)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ERROR_OFFSET))(this, a1);
		}

		::System::Exception* UnexpectedEndError()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_UNEXPECTEDENDERROR_OFFSET))(this);
		}

		::System::Boolean IsNameChar(::System::Char a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ISNAMECHAR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsWhitespace(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ISWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void SkipWhitespaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_OFFSET))(this);
		}

		::System::Void HandleWhitespaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_HANDLEWHITESPACES_OFFSET))(this);
		}

		::System::Void SkipWhitespaces_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_1_OFFSET))(this, a1);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READ_OFFSET))(this);
		}

		::System::Void Expect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_EXPECT_OFFSET))(this, a1);
		}

		::System::String* ReadUntil(::System::Char a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READUNTIL_OFFSET))(this, a1, a2);
		}

		::System::String* ReadName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READNAME_OFFSET))(this);
		}

		::System::Void Parse(::System::IO::TextReader* a1, ::Mono::Xml::SmallXmlParser_IContentHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*, ::Mono::Xml::SmallXmlParser_IContentHandler*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_PARSE_OFFSET))(this, a1, a2);
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

		::System::Void ReadAttribute(::Mono::Xml::SmallXmlParser_AttrListImpl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_AttrListImpl*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READATTRIBUTE_OFFSET))(this, a1);
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
