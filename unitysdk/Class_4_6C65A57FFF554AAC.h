#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_6C65A57FFF554AAC_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x199795A0)
#define CLASS_4_6C65A57FFF554AAC_METHOD_4_411F5B05FB2FEB16_OFFSET UNITYSDK_OFFSET(0x19979200)
#define CLASS_4_6C65A57FFF554AAC_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x19979500)
#define CLASS_4_6C65A57FFF554AAC_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x19979320)
#define CLASS_4_6C65A57FFF554AAC__CTOR_OFFSET UNITYSDK_OFFSET(0x199792A0)

inline static constexpr unsigned int Class_4_6C65A57FFF554AAC_TypeDefinitionIndex = 22783;

class Class_4_6C65A57FFF554AAC : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::System::Boolean Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6C65A57FFF554AAC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_411F5B05FB2FEB16(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_6C65A57FFF554AAC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_6C65A57FFF554AAC*&))((::PBYTE)hIl2Cpp + CLASS_4_6C65A57FFF554AAC_METHOD_4_411F5B05FB2FEB16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_6C65A57FFF554AAC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_6C65A57FFF554AAC*))((::PBYTE)hIl2Cpp + CLASS_4_6C65A57FFF554AAC_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_6C65A57FFF554AAC*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C65A57FFF554AAC*&))((::PBYTE)hIl2Cpp + CLASS_4_6C65A57FFF554AAC_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_6C65A57FFF554AAC* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_6C65A57FFF554AAC*))((::PBYTE)hIl2Cpp + CLASS_4_6C65A57FFF554AAC_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};
