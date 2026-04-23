#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml::Linq { class XDeclaration; }

#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x17A5E5D0)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x17A5E680)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x17A5E650)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x17A5E6A0)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x17A5E660)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_SET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x17A5E5E0)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5E5F0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XDeclarationWrapper_TypeDefinitionIndex = 8583;

	class XDeclarationWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Xml::Linq::XDeclaration* _Declaration_k__BackingField; // 0x18

		::System::Void _ctor(::System::Xml::Linq::XDeclaration* declaration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDeclaration*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER__CTOR_OFFSET))(this, declaration);
		}

		::System::Xml::Linq::XDeclaration* get_Declaration()
		{
			return ((::System::Xml::Linq::XDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_DECLARATION_OFFSET))(this);
		}

		::System::Void set_Declaration(::System::Xml::Linq::XDeclaration* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDeclaration*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_SET_DECLARATION_OFFSET))(this, value);
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
