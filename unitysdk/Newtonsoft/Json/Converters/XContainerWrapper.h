#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Linq { class XContainer; }
namespace System::Xml::Linq { class XObject; }

#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x16432A80)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x164322E0)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x16432210)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x164326D0)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_WRAPNODE_OFFSET UNITYSDK_OFFSET(0x16431AC0)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x16432280)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XContainerWrapper_TypeDefinitionIndex = 8443;

	class XContainerWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _childNodes; // 0x18

		::System::Void _ctor(::System::Xml::Linq::XContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER__CTOR_OFFSET))(this, container);
		}

		::System::Xml::Linq::XContainer* get_Container()
		{
			return ((::System::Xml::Linq::XContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CONTAINER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CHILDNODES_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_PARENTNODE_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::Linq::XObject* node)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::Xml::Linq::XObject*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_WRAPNODE_OFFSET))(node);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_APPENDCHILD_OFFSET))(this, newChild);
		}
	};
}
