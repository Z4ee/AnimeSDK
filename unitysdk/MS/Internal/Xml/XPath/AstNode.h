#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode_AstType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

#define MS_INTERNAL_XML_XPATH_ASTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58D9F0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int AstNode_TypeDefinitionIndex = 1638;

	class AstNode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ASTNODE__CTOR_OFFSET))(this);
		}
	};
}
