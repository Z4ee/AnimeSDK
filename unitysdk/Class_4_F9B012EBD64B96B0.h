#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesPredicateItemCondition; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_F9B012EBD64B96B0_METHOD_4_02FDD26BEE186CA3_OFFSET UNITYSDK_OFFSET(0x1D703BC0)
#define CLASS_4_F9B012EBD64B96B0_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1D703DC0)
#define CLASS_4_F9B012EBD64B96B0_METHOD_4_6739D2F380E7A5A2_OFFSET UNITYSDK_OFFSET(0x1D703B70)
#define CLASS_4_F9B012EBD64B96B0_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1D703D80)
#define CLASS_4_F9B012EBD64B96B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D703BB0)

inline static constexpr unsigned int Class_4_F9B012EBD64B96B0_TypeDefinitionIndex = 21262;

class Class_4_F9B012EBD64B96B0 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::ChenLingFesPredicateItemCondition* LGPMCJDBDIA; // 0x20
	::RPG::GameCore::ChenLingFesPredicateItemCondition* EKIJFPIPCKF; // 0x28
	::RPG::GameCore::LogicOperationType NDJKPABPJHO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_6739D2F380E7A5A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F9B012EBD64B96B0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F9B012EBD64B96B0*&))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0_METHOD_4_6739D2F380E7A5A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_02FDD26BEE186CA3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F9B012EBD64B96B0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F9B012EBD64B96B0*))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0_METHOD_4_02FDD26BEE186CA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_F9B012EBD64B96B0*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F9B012EBD64B96B0*&))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_F9B012EBD64B96B0* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F9B012EBD64B96B0*))((::PBYTE)hIl2Cpp + CLASS_4_F9B012EBD64B96B0_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};
