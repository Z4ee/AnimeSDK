#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Linq { class XObject; }

#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x17A60700)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17A606D0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x17A60670)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x17A60660)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x17A60750)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x17A60630)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x17A606E0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17A606F0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_WRAPPEDNODE_OFFSET UNITYSDK_OFFSET(0x17A60620)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A60760)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5D140)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XObjectWrapper_TypeDefinitionIndex = 8590;

	class XObjectWrapper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>** StaticGet_EmptyChildNodes()
		{
			return (::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>**)Il2CppClass::FromTypeDefinitionIndex(XObjectWrapper_TypeDefinitionIndex)->GetStaticField(0x33B10);
		}
		::System::Xml::Linq::XObject* _xmlObject; // 0x10

		::System::Void _ctor(::System::Xml::Linq::XObject* xmlObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XObject*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER__CTOR_OFFSET))(this, xmlObject);
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

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_APPENDCHILD_OFFSET))(this, newChild);
		}

		::System::String* get_NamespaceUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NAMESPACEURI_OFFSET))(this);
		}
	};
}
