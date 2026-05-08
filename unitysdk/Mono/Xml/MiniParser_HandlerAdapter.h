#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Xml { class MiniParser; }
namespace Mono::Xml { class MiniParser_IAttrList; }
namespace System { class String; }

#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x1C3B8280)
#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1C3B8270)
#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x1C3B8290)
#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1C3B8260)
#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x1C3B8250)
#define MONO_XML_MINIPARSER_HANDLERADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B8020)

namespace Mono::Xml
{
	inline static constexpr unsigned int MiniParser_HandlerAdapter_TypeDefinitionIndex = 2266;

	class MiniParser_HandlerAdapter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_HANDLERADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void OnStartParsing(::Mono::Xml::MiniParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::MiniParser*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_HANDLERADAPTER_ONSTARTPARSING_OFFSET))(this, parser);
		}

		::System::Void OnStartElement(::System::String* name, ::Mono::Xml::MiniParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::MiniParser_IAttrList*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_HANDLERADAPTER_ONSTARTELEMENT_OFFSET))(this, name, attrs);
		}

		::System::Void OnEndElement(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_HANDLERADAPTER_ONENDELEMENT_OFFSET))(this, name);
		}

		::System::Void OnChars(::System::String* ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_HANDLERADAPTER_ONCHARS_OFFSET))(this, ch);
		}

		::System::Void OnEndParsing(::Mono::Xml::MiniParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::MiniParser*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_HANDLERADAPTER_ONENDPARSING_OFFSET))(this, parser);
		}
	};
}
