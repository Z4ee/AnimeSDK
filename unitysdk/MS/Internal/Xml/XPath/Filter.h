#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode_AstType.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

#define MS_INTERNAL_XML_XPATH_FILTER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1DD19C00)
#define MS_INTERNAL_XML_XPATH_FILTER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DD19BF0)
#define MS_INTERNAL_XML_XPATH_FILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD19BE0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Filter_TypeDefinitionIndex = 1641;

	class Filter : public ::MS::Internal::Xml::XPath::AstNode
	{
	public:
		::MS::Internal::Xml::XPath::AstNode* condition; // 0x10
		::MS::Internal::Xml::XPath::AstNode* input; // 0x18

		::System::Void _ctor(::MS::Internal::Xml::XPath::AstNode* input, ::MS::Internal::Xml::XPath::AstNode* condition)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTER__CTOR_OFFSET))(this, input, condition);
		}

		::MS::Internal::Xml::XPath::AstNode_AstType get_Type()
		{
			return ((::MS::Internal::Xml::XPath::AstNode_AstType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTER_GET_TYPE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathResultType get_ReturnType()
		{
			return ((::System::Xml::XPath::XPathResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTER_GET_RETURNTYPE_OFFSET))(this);
		}
	};
}
