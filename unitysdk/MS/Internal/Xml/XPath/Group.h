#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode_AstType.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

#define MS_INTERNAL_XML_XPATH_GROUP_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1D9310A0)
#define MS_INTERNAL_XML_XPATH_GROUP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D931090)
#define MS_INTERNAL_XML_XPATH_GROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D931080)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Group_TypeDefinitionIndex = 1644;

	class Group : public ::MS::Internal::Xml::XPath::AstNode
	{
	public:
		::MS::Internal::Xml::XPath::AstNode* groupNode; // 0x10

		::System::Void _ctor(::MS::Internal::Xml::XPath::AstNode* groupNode)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUP__CTOR_OFFSET))(this, groupNode);
		}

		::MS::Internal::Xml::XPath::AstNode_AstType get_Type()
		{
			return ((::MS::Internal::Xml::XPath::AstNode_AstType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUP_GET_TYPE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathResultType get_ReturnType()
		{
			return ((::System::Xml::XPath::XPathResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUP_GET_RETURNTYPE_OFFSET))(this);
		}
	};
}
