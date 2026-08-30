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

#define CLASS_4_7346DBE182E81BAF_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x1D6EB0E0)
#define CLASS_4_7346DBE182E81BAF_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x1D6EB030)
#define CLASS_4_7346DBE182E81BAF_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1D6EB430)
#define CLASS_4_7346DBE182E81BAF_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1D6EB3C0)
#define CLASS_4_7346DBE182E81BAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EB0A0)

inline static constexpr unsigned int Class_4_7346DBE182E81BAF_TypeDefinitionIndex = 23923;

class Class_4_7346DBE182E81BAF : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x28
	::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x30
	::RPG::GameCore::RtModifierPropertyType FODBMMCKAEN; // 0x38
	::RPG::GameCore::LogicOperation HJNBDHMFKID; // 0x3C
	::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x40

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
