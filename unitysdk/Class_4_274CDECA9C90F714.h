#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_274CDECA9C90F714_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1D9D5810)
#define CLASS_4_274CDECA9C90F714_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1D9D57D0)
#define CLASS_4_274CDECA9C90F714_METHOD_4_B193BE3C813F58CC_OFFSET UNITYSDK_OFFSET(0x1D9D5540)
#define CLASS_4_274CDECA9C90F714_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x1D9D5590)
#define CLASS_4_274CDECA9C90F714__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D5580)

inline static constexpr unsigned int Class_4_274CDECA9C90F714_TypeDefinitionIndex = 23012;

class Class_4_274CDECA9C90F714 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::Boolean FDLNJFIELFJ; // 0x28
	::System::Boolean JDDOFLBEPDN; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_B193BE3C813F58CC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_274CDECA9C90F714*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_274CDECA9C90F714*&))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714_METHOD_4_B193BE3C813F58CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_274CDECA9C90F714* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_274CDECA9C90F714*))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_274CDECA9C90F714*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_274CDECA9C90F714*&))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_274CDECA9C90F714* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_274CDECA9C90F714*))((::PBYTE)hIl2Cpp + CLASS_4_274CDECA9C90F714_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};
