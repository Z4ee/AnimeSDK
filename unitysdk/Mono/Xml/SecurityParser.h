#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Xml/MiniParser.h"

namespace Mono::Xml { class MiniParser_IAttrList; }
namespace System { class String; }
namespace System::Collections { class Stack; }
namespace System::Security { class SecurityElement; }

#define MONO_XML_SECURITYPARSER_LOADXML_OFFSET UNITYSDK_OFFSET(0x1E54D0F0)
#define MONO_XML_SECURITYPARSER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x1E54D4E0)
#define MONO_XML_SECURITYPARSER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E54D450)
#define MONO_XML_SECURITYPARSER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x1E54D570)
#define MONO_XML_SECURITYPARSER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E54D1F0)
#define MONO_XML_SECURITYPARSER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x1E54D1E0)
#define MONO_XML_SECURITYPARSER_READ_OFFSET UNITYSDK_OFFSET(0x1E54D150)
#define MONO_XML_SECURITYPARSER_TOXML_OFFSET UNITYSDK_OFFSET(0x1E54D140)
#define MONO_XML_SECURITYPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E54CFF0)

namespace Mono::Xml
{
	inline static constexpr unsigned int SecurityParser_TypeDefinitionIndex = 2270;

	class SecurityParser : public ::Mono::Xml::MiniParser
	{
	public:
		::System::Security::SecurityElement* current; // 0x28
		::System::Security::SecurityElement* root; // 0x30
		::System::Collections::Stack* stack; // 0x38
		::System::String* xmldoc; // 0x40
		::System::Int32 pos; // 0x48

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

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_READ_OFFSET))(this);
		}

		::System::Void OnStartParsing(::Mono::Xml::MiniParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::MiniParser*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONSTARTPARSING_OFFSET))(this, parser);
		}

		::System::Void OnStartElement(::System::String* name, ::Mono::Xml::MiniParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::MiniParser_IAttrList*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONSTARTELEMENT_OFFSET))(this, name, attrs);
		}

		::System::Void OnEndElement(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONENDELEMENT_OFFSET))(this, name);
		}

		::System::Void OnChars(::System::String* ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONCHARS_OFFSET))(this, ch);
		}

		::System::Void OnEndParsing(::Mono::Xml::MiniParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::MiniParser*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONENDPARSING_OFFSET))(this, parser);
		}
	};
}
