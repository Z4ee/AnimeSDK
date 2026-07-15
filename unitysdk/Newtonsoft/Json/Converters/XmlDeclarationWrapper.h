#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XmlNodeWrapper.h"

namespace System { class String; }
namespace System::Xml { class XmlDeclaration; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x165D8E20)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x165D8E40)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x165D8E00)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x165D8DE0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlDeclarationWrapper_TypeDefinitionIndex = 9490;

	class XmlDeclarationWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper
	{
	public:
		::System::Xml::XmlDeclaration* _declaration; // 0x28

		::System::Void _ctor(::System::Xml::XmlDeclaration* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDeclaration*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_VERSION_OFFSET))(this);
		}

		::System::String* get_Encoding()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_ENCODING_OFFSET))(this);
		}

		::System::String* get_Standalone()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_STANDALONE_OFFSET))(this);
		}
	};
}
