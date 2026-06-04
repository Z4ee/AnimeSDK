#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XmlNodeWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Xml { class XmlElement; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18810460)
#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x188104A0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x18810380)
#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1880FFC0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlElementWrapper_TypeDefinitionIndex = 9477;

	class XmlElementWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper
	{
	public:
		::System::Xml::XmlElement* _element; // 0x28

		::System::Void _ctor(::System::Xml::XmlElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET))(this, a1);
		}

		::System::String* GetPrefixOfNamespace(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
