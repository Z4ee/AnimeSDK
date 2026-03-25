#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XContainerWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Linq { class XElement; }

#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x16434AA0)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x164349E0)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x16433F80)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ELEMENT_OFFSET UNITYSDK_OFFSET(0x16433E20)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x16434BC0)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x16434B40)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x16434950)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x16434AD0)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x16433E90)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x16432900)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XElementWrapper_TypeDefinitionIndex = 8446;

	class XElementWrapper : public ::Newtonsoft::Json::Converters::XContainerWrapper
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _attributes; // 0x20

		::System::Void _ctor(::System::Xml::Linq::XElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER__CTOR_OFFSET))(this, element);
		}

		::System::Xml::Linq::XElement* get_Element()
		{
			return ((::System::Xml::Linq::XElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ELEMENT_OFFSET))(this);
		}

		::System::Void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET))(this, attribute);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ATTRIBUTES_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_APPENDCHILD_OFFSET))(this, newChild);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* GetPrefixOfNamespace(::System::String* namespaceUri)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET))(this, namespaceUri);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
