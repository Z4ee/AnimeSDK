#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode_AstType.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

namespace System { class String; }

#define MS_INTERNAL_XML_XPATH_VARIABLE_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1C794B00)
#define MS_INTERNAL_XML_XPATH_VARIABLE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C794AF0)
#define MS_INTERNAL_XML_XPATH_VARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C794AE0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Variable_TypeDefinitionIndex = 1649;

	class Variable : public ::MS::Internal::Xml::XPath::AstNode
	{
	public:
		::System::String* localname; // 0x10
		::System::String* prefix; // 0x18

		::System::Void _ctor(::System::String* name, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLE__CTOR_OFFSET))(this, name, prefix);
		}

		::MS::Internal::Xml::XPath::AstNode_AstType get_Type()
		{
			return ((::MS::Internal::Xml::XPath::AstNode_AstType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLE_GET_TYPE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathResultType get_ReturnType()
		{
			return ((::System::Xml::XPath::XPathResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLE_GET_RETURNTYPE_OFFSET))(this);
		}
	};
}
