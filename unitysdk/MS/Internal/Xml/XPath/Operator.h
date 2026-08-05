#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode_AstType.h"
#include "unitysdk/MS/Internal/Xml/XPath/Operator_Op.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

#define MS_INTERNAL_XML_XPATH_OPERATOR_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1D555CC0)
#define MS_INTERNAL_XML_XPATH_OPERATOR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D555CB0)
#define MS_INTERNAL_XML_XPATH_OPERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D555CE0)
#define MS_INTERNAL_XML_XPATH_OPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D555CA0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Operator_TypeDefinitionIndex = 1646;

	class Operator : public ::MS::Internal::Xml::XPath::AstNode
	{
	public:
		static ::Il2CppArray<::MS::Internal::Xml::XPath::Operator_Op>** StaticGet_invertOp()
		{
			return (::Il2CppArray<::MS::Internal::Xml::XPath::Operator_Op>**)Il2CppClass::FromTypeDefinitionIndex(Operator_TypeDefinitionIndex)->GetStaticField(0x1E10);
		}
		::MS::Internal::Xml::XPath::AstNode* opnd1; // 0x10
		::MS::Internal::Xml::XPath::AstNode* opnd2; // 0x18
		::MS::Internal::Xml::XPath::Operator_Op opType; // 0x20

		::System::Void _ctor(::MS::Internal::Xml::XPath::Operator_Op op, ::MS::Internal::Xml::XPath::AstNode* opnd1, ::MS::Internal::Xml::XPath::AstNode* opnd2)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::Operator_Op, ::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR__CTOR_OFFSET))(this, op, opnd1, opnd2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR__CCTOR_OFFSET))();
		}

		::MS::Internal::Xml::XPath::AstNode_AstType get_Type()
		{
			return ((::MS::Internal::Xml::XPath::AstNode_AstType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_GET_TYPE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathResultType get_ReturnType()
		{
			return ((::System::Xml::XPath::XPathResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_GET_RETURNTYPE_OFFSET))(this);
		}
	};
}
