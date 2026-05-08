#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/Function_FunctionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75FDD0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathParser_ParamInfo_TypeDefinitionIndex = 1652;

	class XPathParser_ParamInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Xml::XPath::XPathResultType>* argTypes; // 0x10
		::System::Int32 maxargs; // 0x18
		::MS::Internal::Xml::XPath::Function_FunctionType ftype; // 0x1C
		::System::Int32 minargs; // 0x20

		::System::Void _ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype, ::System::Int32 minargs, ::System::Int32 maxargs, ::Il2CppArray<::System::Xml::XPath::XPathResultType>* argTypes)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::Function_FunctionType, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Xml::XPath::XPathResultType>*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARAMINFO__CTOR_OFFSET))(this, ftype, minargs, maxargs, argTypes);
		}
	};
}
