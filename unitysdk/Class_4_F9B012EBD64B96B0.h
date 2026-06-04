#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesPredicateItemCondition; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_F9B012EBD64B96B0_METHOD_4_02FDD26BEE186CA3_OFFSET UNITYSDK_OFFSET(0x19992500)
#define CLASS_4_F9B012EBD64B96B0_METHOD_4_5C65AE94D5D93795_OFFSET UNITYSDK_OFFSET(0x19992420)
#define CLASS_4_F9B012EBD64B96B0_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x199926C0)
#define CLASS_4_F9B012EBD64B96B0_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x19992740)
#define CLASS_4_F9B012EBD64B96B0__CTOR_OFFSET UNITYSDK_OFFSET(0x199924A0)

inline static constexpr unsigned int Class_4_F9B012EBD64B96B0_TypeDefinitionIndex = 20312;

class Class_4_F9B012EBD64B96B0 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::ChenLingFesPredicateItemCondition* Field_4_0; // 0x20
	::RPG::GameCore::ChenLingFesPredicateItemCondition* Field_4_1; // 0x28
	::RPG::GameCore::LogicOperationType Field_4_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_5C65AE94D5D93795(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F9B012EBD64B96B0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F9B012EBD64B96B0*&))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0_METHOD_4_5C65AE94D5D93795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_02FDD26BEE186CA3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F9B012EBD64B96B0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F9B012EBD64B96B0*))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0_METHOD_4_02FDD26BEE186CA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_F9B012EBD64B96B0*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F9B012EBD64B96B0*&))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_F9B012EBD64B96B0* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F9B012EBD64B96B0*))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};
