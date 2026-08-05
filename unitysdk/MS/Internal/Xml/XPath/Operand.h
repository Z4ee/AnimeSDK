#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode_AstType.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

namespace System { class Object; }
namespace System { class String; }

#define MS_INTERNAL_XML_XPATH_OPERAND_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1DE5B900)
#define MS_INTERNAL_XML_XPATH_OPERAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DE5B8F0)
#define MS_INTERNAL_XML_XPATH_OPERAND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE5B8C0)
#define MS_INTERNAL_XML_XPATH_OPERAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5B8B0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Operand_TypeDefinitionIndex = 1645;

	class Operand : public ::MS::Internal::Xml::XPath::AstNode
	{
	public:
		::System::Object* val; // 0x10
		::System::Xml::XPath::XPathResultType type; // 0x18

		::System::Void _ctor(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERAND__CTOR_OFFSET))(this, val);
		}

		::System::Void _ctor_1(::System::Double val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERAND__CTOR_1_OFFSET))(this, val);
		}

		::MS::Internal::Xml::XPath::AstNode_AstType get_Type()
		{
			return ((::MS::Internal::Xml::XPath::AstNode_AstType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERAND_GET_TYPE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathResultType get_ReturnType()
		{
			return ((::System::Xml::XPath::XPathResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERAND_GET_RETURNTYPE_OFFSET))(this);
		}
	};
}
