#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/Axis_AxisType.h"
#include "unitysdk/MS/Internal/Xml/XPath/XPathScanner_LexKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XPath/XPathNodeType.h"
#include "unitysdk/System/Xml/XPath/XPathResultType.h"

namespace MS::Internal::Xml::XPath { class AstNode; }
namespace MS::Internal::Xml::XPath { class XPathScanner; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }

#define MS_INTERNAL_XML_XPATH_XPATHPARSER_CHECKNODESET_OFFSET UNITYSDK_OFFSET(0x19D2B8F0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_CHECKTOKEN_OFFSET UNITYSDK_OFFSET(0x19D2CC20)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_CREATEAXESTABLE_OFFSET UNITYSDK_OFFSET(0x19D2E3D0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_CREATEFUNCTIONTABLE_OFFSET UNITYSDK_OFFSET(0x19D2DB40)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_GETAXIS_OFFSET UNITYSDK_OFFSET(0x19D2C6B0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_ISNODETYPE_OFFSET UNITYSDK_OFFSET(0x19D2B960)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_ISPRIMARYEXPR_OFFSET UNITYSDK_OFFSET(0x19D2BA90)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_ISSTEP_OFFSET UNITYSDK_OFFSET(0x19D2C350)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_NEXTLEX_OFFSET UNITYSDK_OFFSET(0x19D2AEA0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEADDITIVEEXPR_OFFSET UNITYSDK_OFFSET(0x19D2B160)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEANDEXPR_OFFSET UNITYSDK_OFFSET(0x19D2ACD0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEEQUALITYEXPR_OFFSET UNITYSDK_OFFSET(0x19D2AEC0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEEXPRESION_OFFSET UNITYSDK_OFFSET(0x19D2AB20)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEFILTEREXPR_OFFSET UNITYSDK_OFFSET(0x19D2BB20)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSELOCATIONPATH_OFFSET UNITYSDK_OFFSET(0x19D2BC90)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEMETHOD_OFFSET UNITYSDK_OFFSET(0x19D2CC90)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEMULTIPLICATIVEEXPR_OFFSET UNITYSDK_OFFSET(0x19D2B220)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSENODETEST_OFFSET UNITYSDK_OFFSET(0x19D2C7E0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEOREXPR_OFFSET UNITYSDK_OFFSET(0x19D2AB90)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPATHEXPR_OFFSET UNITYSDK_OFFSET(0x19D2B6D0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPREDICATE_OFFSET UNITYSDK_OFFSET(0x19D2C100)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPRIMARYEXPR_OFFSET UNITYSDK_OFFSET(0x19D2BDD0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSERELATIONALEXPR_OFFSET UNITYSDK_OFFSET(0x19D2AF80)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSERELATIVELOCATIONPATH_OFFSET UNITYSDK_OFFSET(0x19D2BBB0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSESTEP_OFFSET UNITYSDK_OFFSET(0x19D2C380)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEUNARYEXPR_OFFSET UNITYSDK_OFFSET(0x19D2B430)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEUNIONEXPR_OFFSET UNITYSDK_OFFSET(0x19D2B520)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEXPATHEXPRESION_OFFSET UNITYSDK_OFFSET(0x19D2A920)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PASSTOKEN_OFFSET UNITYSDK_OFFSET(0x19D2C2E0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_TESTOP_OFFSET UNITYSDK_OFFSET(0x19D2AE10)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D2E6D0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D2A910)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathParser_TypeDefinitionIndex = 1651;

	class XPathParser : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_temparray6()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E20);
		}
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_temparray8()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E28);
		}
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_temparray1()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E30);
		}
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_temparray9()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E38);
		}
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_temparray4()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E40);
		}
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_temparray7()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E48);
		}
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_temparray5()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E50);
		}
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_temparray3()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E58);
		}
		static ::System::Collections::Hashtable** StaticGet_AxesTable()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E60);
		}
		static ::Il2CppArray<::System::Xml::XPath::XPathResultType>** StaticGet_temparray2()
		{
			return (::Il2CppArray<::System::Xml::XPath::XPathResultType>**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E68);
		}
		static ::System::Collections::Hashtable** StaticGet_functionTable()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(XPathParser_TypeDefinitionIndex)->GetStaticField(0x1E70);
		}
		::MS::Internal::Xml::XPath::XPathScanner* scanner; // 0x10
		::System::Int32 parseDepth; // 0x18

		::System::Void _ctor(::MS::Internal::Xml::XPath::XPathScanner* scanner)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::XPathScanner*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER__CTOR_OFFSET))(this, scanner);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER__CCTOR_OFFSET))();
		}

		static ::MS::Internal::Xml::XPath::AstNode* ParseXPathExpresion(::System::String* xpathExpresion)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEXPATHEXPRESION_OFFSET))(xpathExpresion);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseExpresion(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEEXPRESION_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseOrExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEOREXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseAndExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEANDEXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseEqualityExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEEQUALITYEXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseRelationalExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSERELATIONALEXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseAdditiveExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEADDITIVEEXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseMultiplicativeExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEMULTIPLICATIVEEXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseUnaryExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEUNARYEXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseUnionExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEUNIONEXPR_OFFSET))(this, qyInput);
		}

		static ::System::Boolean IsNodeType(::MS::Internal::Xml::XPath::XPathScanner* scaner)
		{
			return ((::System::Boolean(*)(::MS::Internal::Xml::XPath::XPathScanner*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_ISNODETYPE_OFFSET))(scaner);
		}

		::MS::Internal::Xml::XPath::AstNode* ParsePathExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPATHEXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseFilterExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEFILTEREXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParsePredicate(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPREDICATE_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseLocationPath(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSELOCATIONPATH_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseRelativeLocationPath(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSERELATIVELOCATIONPATH_OFFSET))(this, qyInput);
		}

		static ::System::Boolean IsStep(::MS::Internal::Xml::XPath::XPathScanner_LexKind lexKind)
		{
			return ((::System::Boolean(*)(::MS::Internal::Xml::XPath::XPathScanner_LexKind))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_ISSTEP_OFFSET))(lexKind);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseStep(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSESTEP_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseNodeTest(::MS::Internal::Xml::XPath::AstNode* qyInput, ::MS::Internal::Xml::XPath::Axis_AxisType axisType, ::System::Xml::XPath::XPathNodeType nodeType)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::Axis_AxisType, ::System::Xml::XPath::XPathNodeType))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSENODETEST_OFFSET))(this, qyInput, axisType, nodeType);
		}

		static ::System::Boolean IsPrimaryExpr(::MS::Internal::Xml::XPath::XPathScanner* scanner)
		{
			return ((::System::Boolean(*)(::MS::Internal::Xml::XPath::XPathScanner*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_ISPRIMARYEXPR_OFFSET))(scanner);
		}

		::MS::Internal::Xml::XPath::AstNode* ParsePrimaryExpr(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPRIMARYEXPR_OFFSET))(this, qyInput);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseMethod(::MS::Internal::Xml::XPath::AstNode* qyInput)
		{
			return ((::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID, ::MS::Internal::Xml::XPath::AstNode*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEMETHOD_OFFSET))(this, qyInput);
		}

		::System::Void CheckToken(::MS::Internal::Xml::XPath::XPathScanner_LexKind t)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::XPathScanner_LexKind))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_CHECKTOKEN_OFFSET))(this, t);
		}

		::System::Void PassToken(::MS::Internal::Xml::XPath::XPathScanner_LexKind t)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::XPathScanner_LexKind))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PASSTOKEN_OFFSET))(this, t);
		}

		::System::Void NextLex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_NEXTLEX_OFFSET))(this);
		}

		::System::Boolean TestOp(::System::String* op)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_TESTOP_OFFSET))(this, op);
		}

		::System::Void CheckNodeSet(::System::Xml::XPath::XPathResultType t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XPath::XPathResultType))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_CHECKNODESET_OFFSET))(this, t);
		}

		static ::System::Collections::Hashtable* CreateFunctionTable()
		{
			return ((::System::Collections::Hashtable*(*)())((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_CREATEFUNCTIONTABLE_OFFSET))();
		}

		static ::System::Collections::Hashtable* CreateAxesTable()
		{
			return ((::System::Collections::Hashtable*(*)())((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_CREATEAXESTABLE_OFFSET))();
		}

		::MS::Internal::Xml::XPath::Axis_AxisType GetAxis(::MS::Internal::Xml::XPath::XPathScanner* scaner)
		{
			return ((::MS::Internal::Xml::XPath::Axis_AxisType(*)(::PVOID, ::MS::Internal::Xml::XPath::XPathScanner*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_GETAXIS_OFFSET))(this, scaner);
		}
	};
}
