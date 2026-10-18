#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_274CDECA9C90F714_1_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1CD35680)
#define CLASS_4_274CDECA9C90F714_1_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x1CD35440)
#define CLASS_4_274CDECA9C90F714_1_METHOD_4_CB465EAED8BA1FD8_OFFSET UNITYSDK_OFFSET(0x1CD353A0)
#define CLASS_4_274CDECA9C90F714_1_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1CD35620)
#define CLASS_4_274CDECA9C90F714_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD35400)

inline static constexpr unsigned int Class_4_274CDECA9C90F714_1_TypeDefinitionIndex = 24105;

class Class_4_274CDECA9C90F714_1 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::Boolean FBPONNMOHCG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_CB465EAED8BA1FD8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_274CDECA9C90F714_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_274CDECA9C90F714_1*&))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714_1_METHOD_4_CB465EAED8BA1FD8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_274CDECA9C90F714_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_274CDECA9C90F714_1*))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714_1_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_274CDECA9C90F714_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_274CDECA9C90F714_1*&))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714_1_METHOD_4_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_274CDECA9C90F714_1* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_274CDECA9C90F714_1*))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714_1_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};
