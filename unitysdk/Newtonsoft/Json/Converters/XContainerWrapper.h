#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Linq { class XContainer; }
namespace System::Xml::Linq { class XObject; }

#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x1BE775E0)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x1BE76C30)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x1BE76B60)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1BE77220)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_WRAPNODE_OFFSET UNITYSDK_OFFSET(0x1BE76420)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE76BD0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XContainerWrapper_TypeDefinitionIndex = 9783;

	class XContainerWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _childNodes; // 0x18

		::System::Void _ctor(::System::Xml::Linq::XContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER__CTOR_OFFSET))(this, a1);
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

		static ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::Linq::XObject* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::Xml::Linq::XObject*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_WRAPNODE_OFFSET))(a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_APPENDCHILD_OFFSET))(this, a1);
		}
	};
}
