#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CatGodInteractCountType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_3A31B1679E500164_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x193733D0)
#define CLASS_4_3A31B1679E500164_METHOD_4_6C55233E7345A091_OFFSET UNITYSDK_OFFSET(0x193734B0)
#define CLASS_4_3A31B1679E500164_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x19373780)
#define CLASS_4_3A31B1679E500164_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x19373800)
#define CLASS_4_3A31B1679E500164__CTOR_OFFSET UNITYSDK_OFFSET(0x19373450)

inline static constexpr unsigned int Class_4_3A31B1679E500164_TypeDefinitionIndex = 9892;

class Class_4_3A31B1679E500164 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x20
	::System::Boolean Field_4_1; // 0x28
	::RPG::GameCore::CompareType Field_4_2; // 0x2C
	::RPG::Client::CatGodInteractCountType Field_4_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3A31B1679E500164__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3A31B1679E500164*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3A31B1679E500164*&))((::PBYTE)hIl2Cpp + CLASS_4_3A31B1679E500164_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_6C55233E7345A091(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3A31B1679E500164* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3A31B1679E500164*))((::PBYTE)hIl2Cpp + CLASS_4_3A31B1679E500164_METHOD_4_6C55233E7345A091_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_3A31B1679E500164*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_3A31B1679E500164*&))((::PBYTE)hIl2Cpp + CLASS_4_3A31B1679E500164_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_3A31B1679E500164* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_3A31B1679E500164*))((::PBYTE)hIl2Cpp + CLASS_4_3A31B1679E500164_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};
