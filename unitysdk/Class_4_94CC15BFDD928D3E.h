#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_94CC15BFDD928D3E_METHOD_4_006ABDD1DFAA24CE_OFFSET UNITYSDK_OFFSET(0x1CA51270)
#define CLASS_4_94CC15BFDD928D3E_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1CA51460)
#define CLASS_4_94CC15BFDD928D3E_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1CA51430)
#define CLASS_4_94CC15BFDD928D3E_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x1CA512B0)
#define CLASS_4_94CC15BFDD928D3E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA512A0)

inline static constexpr unsigned int Class_4_94CC15BFDD928D3E_TypeDefinitionIndex = 24038;

class Class_4_94CC15BFDD928D3E : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::ExpeditionBattleFlowStateType EANMENOIJOM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94CC15BFDD928D3E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_006ABDD1DFAA24CE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_94CC15BFDD928D3E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_94CC15BFDD928D3E*&))((::PBYTE)hIl2Cpp + CLASS_4_94CC15BFDD928D3E_METHOD_4_006ABDD1DFAA24CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_94CC15BFDD928D3E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_94CC15BFDD928D3E*))((::PBYTE)hIl2Cpp + CLASS_4_94CC15BFDD928D3E_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_94CC15BFDD928D3E*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_94CC15BFDD928D3E*&))((::PBYTE)hIl2Cpp + CLASS_4_94CC15BFDD928D3E_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_94CC15BFDD928D3E* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_94CC15BFDD928D3E*))((::PBYTE)hIl2Cpp + CLASS_4_94CC15BFDD928D3E_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
