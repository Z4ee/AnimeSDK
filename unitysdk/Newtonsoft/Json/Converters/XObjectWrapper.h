#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Linq { class XObject; }

#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x165D88E0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x165D88B0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x165D8850)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x165D8840)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x165D8930)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x165D87B0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x165D88C0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x165D88D0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_WRAPPEDNODE_OFFSET UNITYSDK_OFFSET(0x165D87A0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x165D8940)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x165D4CB0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XObjectWrapper_TypeDefinitionIndex = 9505;

	class XObjectWrapper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>** StaticGet_EmptyChildNodes()
		{
			return (::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>**)Il2CppClass::FromTypeDefinitionIndex(XObjectWrapper_TypeDefinitionIndex)->GetStaticField(0x31AF0);
		}
		::System::Xml::Linq::XObject* _xmlObject; // 0x10

		::System::Void _ctor(::System::Xml::Linq::XObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XObject*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER__CCTOR_OFFSET))();
		}

		::System::Object* get_WrappedNode()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_WRAPPEDNODE_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_CHILDNODES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_ATTRIBUTES_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_PARENTNODE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_VALUE_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_APPENDCHILD_OFFSET))(this, a1);
		}

		::System::String* get_NamespaceUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NAMESPACEURI_OFFSET))(this);
		}
	};
}
