#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Xml { class MiniParser; }
namespace Mono::Xml { class MiniParser_IAttrList; }
namespace System { class String; }

#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x1E6FFD30)
#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E6FFD20)
#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x1E6FFD40)
#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E6FFD10)
#define MONO_XML_MINIPARSER_HANDLERADAPTER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x1E6FFD00)
#define MONO_XML_MINIPARSER_HANDLERADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FFAD0)

namespace Mono::Xml
{
	inline static constexpr unsigned int MiniParser_HandlerAdapter_TypeDefinitionIndex = 2265;

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
