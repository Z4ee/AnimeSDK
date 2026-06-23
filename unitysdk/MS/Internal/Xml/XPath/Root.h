#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode_AstType.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

#define MS_INTERNAL_XML_XPATH_ROOT_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1D16FB70)
#define MS_INTERNAL_XML_XPATH_ROOT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D16FB60)
#define MS_INTERNAL_XML_XPATH_ROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16FB50)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Root_TypeDefinitionIndex = 1648;

	class Root : public ::MS::Internal::Xml::XPath::AstNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ROOT__CTOR_OFFSET))(this);
		}

		::MS::Internal::Xml::XPath::AstNode_AstType get_Type()
		{
			return ((::MS::Internal::Xml::XPath::AstNode_AstType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ROOT_GET_TYPE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathResultType get_ReturnType()
		{
			return ((::System::Xml::XPath::XPathResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ROOT_GET_RETURNTYPE_OFFSET))(this);
		}
	};
}
