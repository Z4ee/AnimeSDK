#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x17A6A4B0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17A69F50)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x17A69BA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x17A69B70)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x17A6A550)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x17A69B40)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x17A6A3E0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17A6A480)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_WRAPPEDNODE_OFFSET UNITYSDK_OFFSET(0x17A69B30)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17A61260)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_WRAPNODE_OFFSET UNITYSDK_OFFSET(0x17A63B40)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A60BD0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlNodeWrapper_TypeDefinitionIndex = 8577;

	class XmlNodeWrapper : public ::System::Object
	{
	public:
		::System::Xml::XmlNode* _node; // 0x10
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _attributes; // 0x18
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _childNodes; // 0x20

		::System::Void _ctor(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER__CTOR_OFFSET))(this, node);
		}

		::System::Object* get_WrappedNode()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_WRAPPEDNODE_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_CHILDNODES_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::XmlNode* node)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_WRAPNODE_OFFSET))(node);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_ATTRIBUTES_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_PARENTNODE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_SET_VALUE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_APPENDCHILD_OFFSET))(this, newChild);
		}

		::System::String* get_NamespaceUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NAMESPACEURI_OFFSET))(this);
		}
	};
}
