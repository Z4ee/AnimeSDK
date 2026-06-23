#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode_AstType.h"
#include "unitysdk/MS/Internal/Xml/XPath/Axis_AxisType.h"
#include "unitysdk/System/Xml/XPath/XPathNodeType.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

namespace System { class String; }

#define MS_INTERNAL_XML_XPATH_AXIS_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1DD19BD0)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DD19BC0)
#define MS_INTERNAL_XML_XPATH_AXIS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD19B90)
#define MS_INTERNAL_XML_XPATH_AXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD19B60)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Axis_TypeDefinitionIndex = 1639;

	class Axis : public ::MS::Internal::Xml::XPath::AstNode
	{
	public:
		::MS::Internal::Xml::XPath::AstNode* input; // 0x10
		::System::String* name; // 0x18
		::System::String* urn; // 0x20
		::System::String* prefix; // 0x28
		::System::Xml::XPath::XPathNodeType nodeType; // 0x30
		::System::Boolean abbrAxis; // 0x34
		::MS::Internal::Xml::XPath::Axis_AxisType axisType; // 0x38

		::System::Void _ctor(::MS::Internal::Xml::XPath::Axis_AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input, ::System::String* prefix, ::System::String* name, ::System::Xml::XPath::XPathNodeType nodetype)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::Axis_AxisType, ::MS::Internal::Xml::XPath::AstNode*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS__CTOR_OFFSET))(this, axisType, input, prefix, name, nodetype);
		}

		::System::Void _ctor_1(::MS::Internal::Xml::XPath::Axis_AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::Axis_AxisType, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS__CTOR_1_OFFSET))(this, axisType, input);
		}

		::MS::Internal::Xml::XPath::AstNode_AstType get_Type()
		{
			return ((::MS::Internal::Xml::XPath::AstNode_AstType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_TYPE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathResultType get_ReturnType()
		{
			return ((::System::Xml::XPath::XPathResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_RETURNTYPE_OFFSET))(this);
		}
	};
}
