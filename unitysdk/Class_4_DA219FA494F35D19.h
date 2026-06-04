#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ElationPointReadType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_DA219FA494F35D19_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x191DBC20)
#define CLASS_4_DA219FA494F35D19_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x191DBF30)
#define CLASS_4_DA219FA494F35D19_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x191DBFB0)
#define CLASS_4_DA219FA494F35D19_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x191DBCF0)
#define CLASS_4_DA219FA494F35D19__CTOR_OFFSET UNITYSDK_OFFSET(0x191DBCA0)

inline static constexpr unsigned int Class_4_DA219FA494F35D19_TypeDefinitionIndex = 21541;

class Class_4_DA219FA494F35D19 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x20
	::RPG::GameCore::CompareType Field_4_1; // 0x28
	::RPG::GameCore::ElationPointReadType Field_4_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DA219FA494F35D19__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_DA219FA494F35D19*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_DA219FA494F35D19*&))((::PBYTE)hIl2Cpp + CLASS_4_DA219FA494F35D19_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_DA219FA494F35D19* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_DA219FA494F35D19*))((::PBYTE)hIl2Cpp + CLASS_4_DA219FA494F35D19_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_DA219FA494F35D19*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_DA219FA494F35D19*&))((::PBYTE)hIl2Cpp + CLASS_4_DA219FA494F35D19_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_DA219FA494F35D19* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_DA219FA494F35D19*))((::PBYTE)hIl2Cpp + CLASS_4_DA219FA494F35D19_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};
