#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExpressionTestCase_AbilityExpressionInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_3310A831794D334B;
class Class_3_DBD52437176D727B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EXPRESSIONTESTCASE_AUTOTEST_OFFSET UNITYSDK_OFFSET(0x135F3A40)
#define EXPRESSIONTESTCASE_CASE1_OFFSET UNITYSDK_OFFSET(0x135F3A80)
#define EXPRESSIONTESTCASE_CASE2_OFFSET UNITYSDK_OFFSET(0x135F40A0)
#define EXPRESSIONTESTCASE_CHECKALLEXPRESSIONVALID_OFFSET UNITYSDK_OFFSET(0x135F54B0)
#define EXPRESSIONTESTCASE_FINDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x135F52F0)
#define EXPRESSIONTESTCASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x135F5960)
#define EXPRESSIONTESTCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x135F5950)

inline static constexpr unsigned int ExpressionTestCase_TypeDefinitionIndex = 61621;

class ExpressionTestCase : public ::System::Object
{
public:
	static ::Class_3_DBD52437176D727B** StaticGet_dynamicExpression()
	{
		return (::Class_3_DBD52437176D727B**)Il2CppClass::FromTypeDefinitionIndex(ExpressionTestCase_TypeDefinitionIndex)->GetStaticField(0x33990);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONTESTCASE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONTESTCASE__CCTOR_OFFSET))();
	}

	static ::System::Void AutoTest()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONTESTCASE_AUTOTEST_OFFSET))();
	}

	static ::System::Void FindExpression(::System::Collections::Generic::List_1<::ExpressionTestCase_AbilityExpressionInfo>*& expressions, ::Class_1_3310A831794D334B* config)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::ExpressionTestCase_AbilityExpressionInfo>*&, ::Class_1_3310A831794D334B*))((::PBYTE)hIl2Cpp + EXPRESSIONTESTCASE_FINDEXPRESSION_OFFSET))(expressions, config);
	}

	static ::System::Void CheckAllExpressionValid()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONTESTCASE_CHECKALLEXPRESSIONVALID_OFFSET))();
	}

	static ::System::Void Case1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONTESTCASE_CASE1_OFFSET))();
	}

	static ::System::Void Case2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONTESTCASE_CASE2_OFFSET))();
	}
};
