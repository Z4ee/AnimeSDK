#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_C2B07AE0C1DDDAA6_1_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1AF7A660)
#define CLASS_4_C2B07AE0C1DDDAA6_1_METHOD_4_E8248A0562730A66_OFFSET UNITYSDK_OFFSET(0x1AF7A3E0)
#define CLASS_4_C2B07AE0C1DDDAA6_1_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x1AF7A480)
#define CLASS_4_C2B07AE0C1DDDAA6_1_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1AF7A600)
#define CLASS_4_C2B07AE0C1DDDAA6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF7A440)

inline static constexpr unsigned int Class_4_C2B07AE0C1DDDAA6_1_TypeDefinitionIndex = 22191;

class Class_4_C2B07AE0C1DDDAA6_1 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2B07AE0C1DDDAA6_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_E8248A0562730A66(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C2B07AE0C1DDDAA6_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C2B07AE0C1DDDAA6_1*&))((::PBYTE)hIl2Cpp + CLASS_4_C2B07AE0C1DDDAA6_1_METHOD_4_E8248A0562730A66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C2B07AE0C1DDDAA6_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C2B07AE0C1DDDAA6_1*))((::PBYTE)hIl2Cpp + CLASS_4_C2B07AE0C1DDDAA6_1_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_C2B07AE0C1DDDAA6_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C2B07AE0C1DDDAA6_1*&))((::PBYTE)hIl2Cpp + CLASS_4_C2B07AE0C1DDDAA6_1_METHOD_4_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_C2B07AE0C1DDDAA6_1* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C2B07AE0C1DDDAA6_1*))((::PBYTE)hIl2Cpp + CLASS_4_C2B07AE0C1DDDAA6_1_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};
