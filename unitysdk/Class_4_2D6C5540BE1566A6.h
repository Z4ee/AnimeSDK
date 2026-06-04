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

#define CLASS_4_2D6C5540BE1566A6_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x1936C670)
#define CLASS_4_2D6C5540BE1566A6_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x1936C2F0)
#define CLASS_4_2D6C5540BE1566A6_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x1936C1D0)
#define CLASS_4_2D6C5540BE1566A6_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x1936C5D0)
#define CLASS_4_2D6C5540BE1566A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1936C270)

inline static constexpr unsigned int Class_4_2D6C5540BE1566A6_TypeDefinitionIndex = 22876;

class Class_4_2D6C5540BE1566A6 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicString* Field_4_0; // 0x20
	::RPG::GameCore::DynamicFloat* Field_4_1; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_4_2; // 0x30
	::RPG::GameCore::CompareType Field_4_3; // 0x38
	::RPG::GameCore::LogicOperation Field_4_4; // 0x3C
	::RPG::GameCore::RtModifierPropertyType Field_4_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D6C5540BE1566A6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2D6C5540BE1566A6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2D6C5540BE1566A6*&))((::PBYTE)hIl2Cpp + CLASS_4_2D6C5540BE1566A6_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_491DC5019255BE43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2D6C5540BE1566A6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2D6C5540BE1566A6*))((::PBYTE)hIl2Cpp + CLASS_4_2D6C5540BE1566A6_METHOD_4_491DC5019255BE43_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_2D6C5540BE1566A6*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2D6C5540BE1566A6*&))((::PBYTE)hIl2Cpp + CLASS_4_2D6C5540BE1566A6_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_2D6C5540BE1566A6* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2D6C5540BE1566A6*))((::PBYTE)hIl2Cpp + CLASS_4_2D6C5540BE1566A6_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};
