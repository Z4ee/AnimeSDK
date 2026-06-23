#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode.h"
#include "unitysdk/MS/Internal/Xml/XPath/AstNode_AstType.h"
#include "unitysdk/MS/Internal/Xml/XPath/Function_FunctionType.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MS_INTERNAL_XML_XPATH_FUNCTION_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1CA268C0)
#define MS_INTERNAL_XML_XPATH_FUNCTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CA268B0)
#define MS_INTERNAL_XML_XPATH_FUNCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA26960)
#define MS_INTERNAL_XML_XPATH_FUNCTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA26780)
#define MS_INTERNAL_XML_XPATH_FUNCTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CA267F0)
#define MS_INTERNAL_XML_XPATH_FUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA26720)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Function_TypeDefinitionIndex = 1642;

	class Function : public ::MS::Internal::Xml::XPath::AstNode
	{
	public:
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_ReturnTypes()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(Function_TypeDefinitionIndex)->GetStaticField(0x1F50);
		}
		::System::String* prefix; // 0x10
		::System::Collections::ArrayList* argumentList; // 0x18
		::System::String* name; // 0x20
		::MS::Internal::Xml::XPath::Function_FunctionType functionType; // 0x28

		::System::Void _ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype, ::System::Collections::ArrayList* argumentList)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::Function_FunctionType, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION__CTOR_OFFSET))(this, ftype, argumentList);
		}

		::System::Void _ctor_1(::System::String* prefix, ::System::String* name, ::System::Collections::ArrayList* argumentList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION__CTOR_1_OFFSET))(this, prefix, name, argumentList);
		}

		::System::Void _ctor_2(::MS::Internal::Xml::XPath::Function_FunctionType ftype, ::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::Function_FunctionType, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION__CTOR_2_OFFSET))(this, ftype, arg);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION__CCTOR_OFFSET))();
		}

		::MS::Internal::Xml::XPath::AstNode_AstType get_Type()
		{
			return ((::MS::Internal::Xml::XPath::AstNode_AstType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_GET_TYPE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathResultType get_ReturnType()
		{
			return ((::System::Xml::XPath::XPathResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_GET_RETURNTYPE_OFFSET))(this);
		}
	};
}
