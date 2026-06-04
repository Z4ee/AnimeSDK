#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_1309A16363C9CF81_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x19E96D40)
#define CLASS_4_1309A16363C9CF81_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x19E97070)
#define CLASS_4_1309A16363C9CF81_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x19E97100)
#define CLASS_4_1309A16363C9CF81_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x19E96E30)
#define CLASS_4_1309A16363C9CF81__CTOR_OFFSET UNITYSDK_OFFSET(0x19E96DD0)

inline static constexpr unsigned int Class_4_1309A16363C9CF81_TypeDefinitionIndex = 20304;

class Class_4_1309A16363C9CF81 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::String* Field_4_0; // 0x20
	::RPG::GameCore::CompareType Field_4_1; // 0x28
	::RPG::GameCore::ChenLingFesProperty Field_4_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1309A16363C9CF81__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1309A16363C9CF81*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1309A16363C9CF81*&))((::PBYTE)hIl2Cpp + CLASS_4_1309A16363C9CF81_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1309A16363C9CF81* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1309A16363C9CF81*))((::PBYTE)hIl2Cpp + CLASS_4_1309A16363C9CF81_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_1309A16363C9CF81*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1309A16363C9CF81*&))((::PBYTE)hIl2Cpp + CLASS_4_1309A16363C9CF81_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_1309A16363C9CF81* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1309A16363C9CF81*))((::PBYTE)hIl2Cpp + CLASS_4_1309A16363C9CF81_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};
