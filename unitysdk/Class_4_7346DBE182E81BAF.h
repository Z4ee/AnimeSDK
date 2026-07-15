#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_7346DBE182E81BAF_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x1B25FDF0)
#define CLASS_4_7346DBE182E81BAF_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x1B25FD40)
#define CLASS_4_7346DBE182E81BAF_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1B260140)
#define CLASS_4_7346DBE182E81BAF_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1B2600D0)
#define CLASS_4_7346DBE182E81BAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B25FDB0)

inline static constexpr unsigned int Class_4_7346DBE182E81BAF_TypeDefinitionIndex = 23343;

class Class_4_7346DBE182E81BAF : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicString* Field_4_0; // 0x20
	::RPG::GameCore::DynamicFloat* Field_4_1; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_4_2; // 0x30
	::RPG::GameCore::RtModifierPropertyType Field_4_3; // 0x38
	::RPG::GameCore::LogicOperation Field_4_4; // 0x3C
	::RPG::GameCore::CompareType Field_4_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7346DBE182E81BAF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7346DBE182E81BAF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7346DBE182E81BAF*&))((::PBYTE)hIl2Cpp + CLASS_4_7346DBE182E81BAF_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_491DC5019255BE43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7346DBE182E81BAF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7346DBE182E81BAF*))((::PBYTE)hIl2Cpp + CLASS_4_7346DBE182E81BAF_METHOD_4_491DC5019255BE43_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_7346DBE182E81BAF*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_7346DBE182E81BAF*&))((::PBYTE)hIl2Cpp + CLASS_4_7346DBE182E81BAF_METHOD_4_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_7346DBE182E81BAF* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_7346DBE182E81BAF*))((::PBYTE)hIl2Cpp + CLASS_4_7346DBE182E81BAF_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};
