#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Xml::Linq { class XText; }

#define NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x165D8C00)
#define NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x165D8B10)
#define NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x165D8B80)
#define NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x165D6140)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XTextWrapper_TypeDefinitionIndex = 9501;

	class XTextWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Void _ctor(::System::Xml::Linq::XText* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XText*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XText* get_Text()
		{
			return ((::System::Xml::Linq::XText*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_TEXT_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_VALUE_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_PARENTNODE_OFFSET))(this);
		}
	};
}
