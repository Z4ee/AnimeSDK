#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml::Linq { class XDeclaration; }

#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x1BE777A0)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1BE77850)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1BE77820)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x1BE77870)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BE77830)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_SET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x1BE777B0)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE777C0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XDeclarationWrapper_TypeDefinitionIndex = 9777;

	class XDeclarationWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Xml::Linq::XDeclaration* _Declaration_k__BackingField; // 0x18

		::System::Void _ctor(::System::Xml::Linq::XDeclaration* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDeclaration*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XDeclaration* get_Declaration()
		{
			return ((::System::Xml::Linq::XDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_DECLARATION_OFFSET))(this);
		}

		::System::Void set_Declaration(::System::Xml::Linq::XDeclaration* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDeclaration*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_SET_DECLARATION_OFFSET))(this, a1);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_VERSION_OFFSET))(this);
		}

		::System::String* get_Encoding()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_ENCODING_OFFSET))(this);
		}

		::System::String* get_Standalone()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_STANDALONE_OFFSET))(this);
		}
	};
}
