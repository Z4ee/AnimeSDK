#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x165E9430)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x165E8B30)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x165E8520)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x165E8490)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x165E9550)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x165E8400)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x165E9270)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x165E93A0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_WRAPPEDNODE_OFFSET UNITYSDK_OFFSET(0x165E83F0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x165D97F0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_WRAPNODE_OFFSET UNITYSDK_OFFSET(0x165DDE10)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x165D8DF0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlNodeWrapper_TypeDefinitionIndex = 9492;

	class XmlNodeWrapper : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _attributes; // 0x10
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _childNodes; // 0x18
		::System::Xml::XmlNode* _node; // 0x20

		::System::Void _ctor(::System::Xml::XmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER__CTOR_OFFSET))(this, a1);
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

		static ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::XmlNode* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_WRAPNODE_OFFSET))(a1);
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

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_SET_VALUE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_APPENDCHILD_OFFSET))(this, a1);
		}

		::System::String* get_NamespaceUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NAMESPACEURI_OFFSET))(this);
		}
	};
}
