#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XmlNodeWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Xml { class XmlElement; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17A615D0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x17A61610)
#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x17A61500)
#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A61150)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlElementWrapper_TypeDefinitionIndex = 8574;

	class XmlElementWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper
	{
	public:
		::System::Xml::XmlElement* _element; // 0x28

		::System::Void _ctor(::System::Xml::XmlElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER__CTOR_OFFSET))(this, element);
		}

		::System::Void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET))(this, attribute);
		}

		::System::String* GetPrefixOfNamespace(::System::String* namespaceUri)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET))(this, namespaceUri);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
