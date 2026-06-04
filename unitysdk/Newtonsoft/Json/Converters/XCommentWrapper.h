#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Xml::Linq { class XComment; }

#define NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1880C770)
#define NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1880C620)
#define NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1880C6F0)
#define NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1880C690)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XCommentWrapper_TypeDefinitionIndex = 9490;

	class XCommentWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Void _ctor(::System::Xml::Linq::XComment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XComment*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XComment* get_Text()
		{
			return ((::System::Xml::Linq::XComment*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_TEXT_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_VALUE_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_PARENTNODE_OFFSET))(this);
		}
	};
}
