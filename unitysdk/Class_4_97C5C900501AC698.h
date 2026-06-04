#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_97C5C900501AC698_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x19EB1980)
#define CLASS_4_97C5C900501AC698_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x19EB1900)
#define CLASS_4_97C5C900501AC698_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x19EB1730)
#define CLASS_4_97C5C900501AC698_METHOD_4_F50D6F293391C101_OFFSET UNITYSDK_OFFSET(0x19EB1660)
#define CLASS_4_97C5C900501AC698__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB16E0)

inline static constexpr unsigned int Class_4_97C5C900501AC698_TypeDefinitionIndex = 22879;

class Class_4_97C5C900501AC698 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::RPG::GameCore::RtBehaviorFlag Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97C5C900501AC698__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_F50D6F293391C101(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_97C5C900501AC698*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_97C5C900501AC698*&))((::PBYTE)hIl2Cpp + CLASS_4_97C5C900501AC698_METHOD_4_F50D6F293391C101_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_97C5C900501AC698* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_97C5C900501AC698*))((::PBYTE)hIl2Cpp + CLASS_4_97C5C900501AC698_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_97C5C900501AC698*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_97C5C900501AC698*&))((::PBYTE)hIl2Cpp + CLASS_4_97C5C900501AC698_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_97C5C900501AC698* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_97C5C900501AC698*))((::PBYTE)hIl2Cpp + CLASS_4_97C5C900501AC698_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};
