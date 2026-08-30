#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CatGodInteractCountType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_0574869B1174019D_METHOD_4_0EE9A132E4098A12_OFFSET UNITYSDK_OFFSET(0x1CD04D30)
#define CLASS_4_0574869B1174019D_METHOD_4_18C3FB2E98626E1C_OFFSET UNITYSDK_OFFSET(0x1CD05050)
#define CLASS_4_0574869B1174019D_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1CD05090)
#define CLASS_4_0574869B1174019D_METHOD_4_6C55233E7345A091_OFFSET UNITYSDK_OFFSET(0x1CD04D80)
#define CLASS_4_0574869B1174019D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD04D70)

inline static constexpr unsigned int Class_4_0574869B1174019D_TypeDefinitionIndex = 10194;

class Class_4_0574869B1174019D : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* GJEAIKIINML; // 0x20
	::System::Boolean OHBLKLKGIOH; // 0x28
	::RPG::Client::CatGodInteractCountType PGNPPEOFCDL; // 0x2C
	::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0574869B1174019D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_0EE9A132E4098A12(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_0574869B1174019D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_0574869B1174019D*&))((::PBYTE)hIl2Cpp + CLASS_4_0574869B1174019D_METHOD_4_0EE9A132E4098A12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_6C55233E7345A091(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_0574869B1174019D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_0574869B1174019D*))((::PBYTE)hIl2Cpp + CLASS_4_0574869B1174019D_METHOD_4_6C55233E7345A091_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_18C3FB2E98626E1C(::SimpleJSON::JSONNode* a1, ::Class_4_0574869B1174019D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_0574869B1174019D*&))((::PBYTE)hIl2Cpp + CLASS_4_0574869B1174019D_METHOD_4_18C3FB2E98626E1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_0574869B1174019D* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_0574869B1174019D*))((::PBYTE)hIl2Cpp + CLASS_4_0574869B1174019D_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
