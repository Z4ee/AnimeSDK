#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_333AF9D5F338A2DD_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x192BE340)
#define CLASS_4_333AF9D5F338A2DD_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x192BDFB0)
#define CLASS_4_333AF9D5F338A2DD_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x192BE2C0)
#define CLASS_4_333AF9D5F338A2DD_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x192BE080)
#define CLASS_4_333AF9D5F338A2DD__CTOR_OFFSET UNITYSDK_OFFSET(0x192BE030)

inline static constexpr unsigned int Class_4_333AF9D5F338A2DD_TypeDefinitionIndex = 21614;

class Class_4_333AF9D5F338A2DD : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::System::String* Field_4_1; // 0x28
	::RPG::GameCore::OrbitAreaState Field_4_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_333AF9D5F338A2DD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_333AF9D5F338A2DD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_333AF9D5F338A2DD*&))((::PBYTE)hIl2Cpp + CLASS_4_333AF9D5F338A2DD_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_333AF9D5F338A2DD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_333AF9D5F338A2DD*))((::PBYTE)hIl2Cpp + CLASS_4_333AF9D5F338A2DD_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_333AF9D5F338A2DD*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_333AF9D5F338A2DD*&))((::PBYTE)hIl2Cpp + CLASS_4_333AF9D5F338A2DD_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_333AF9D5F338A2DD* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_333AF9D5F338A2DD*))((::PBYTE)hIl2Cpp + CLASS_4_333AF9D5F338A2DD_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};
