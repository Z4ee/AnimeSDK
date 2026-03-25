#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Xml/SmallXmlParser.h"

namespace Mono::Xml { class SmallXmlParser_IAttrList; }
namespace System { class String; }
namespace System::Collections { class Stack; }
namespace System::Security { class SecurityElement; }

#define MONO_XML_SECURITYPARSER_LOADXML_OFFSET UNITYSDK_OFFSET(0x16184CC0)
#define MONO_XML_SECURITYPARSER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x161A4460)
#define MONO_XML_SECURITYPARSER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x161A43F0)
#define MONO_XML_SECURITYPARSER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x161A44F0)
#define MONO_XML_SECURITYPARSER_ONIGNORABLEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x161A4180)
#define MONO_XML_SECURITYPARSER_ONPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x161A4170)
#define MONO_XML_SECURITYPARSER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x161A4190)
#define MONO_XML_SECURITYPARSER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x161A4160)
#define MONO_XML_SECURITYPARSER_TOXML_OFFSET UNITYSDK_OFFSET(0x161A4150)
#define MONO_XML_SECURITYPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x16184C50)

namespace Mono::Xml
{
	inline static constexpr unsigned int SecurityParser_TypeDefinitionIndex = 23;

	class SecurityParser : public ::Mono::Xml::SmallXmlParser
	{
	public:
		::System::Collections::Stack* stack; // 0x60
		::System::Security::SecurityElement* current; // 0x68
		::System::Security::SecurityElement* root; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER__CTOR_OFFSET))(this);
		}

		::System::Void LoadXml(::System::String* xml)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_LOADXML_OFFSET))(this, xml);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_TOXML_OFFSET))(this);
		}

		::System::Void OnStartParsing(::Mono::Xml::SmallXmlParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONSTARTPARSING_OFFSET))(this, parser);
		}

		::System::Void OnProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void OnIgnorableWhitespace(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONIGNORABLEWHITESPACE_OFFSET))(this, s);
		}

		::System::Void OnStartElement(::System::String* name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONSTARTELEMENT_OFFSET))(this, name, attrs);
		}

		::System::Void OnEndElement(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONENDELEMENT_OFFSET))(this, name);
		}

		::System::Void OnChars(::System::String* ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONCHARS_OFFSET))(this, ch);
		}

		::System::Void OnEndParsing(::Mono::Xml::SmallXmlParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONENDPARSING_OFFSET))(this, parser);
		}
	};
}
