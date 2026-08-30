#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_6F6C5816AD7218F2_OFFSET UNITYSDK_OFFSET(0x1BBD3B60)
#define RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_A13BE7CB4B378D97_OFFSET UNITYSDK_OFFSET(0x1BBD3990)
#define RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_A2C07643C1F62845_OFFSET UNITYSDK_OFFSET(0x1BBD3B90)
#define RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_A95F28C65DA98926_OFFSET UNITYSDK_OFFSET(0x1BBD39D0)
#define RPG_GAMECORE_BYCURRENTTURNSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD39C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentTurnState_TypeDefinitionIndex = 23276;

	class ByCurrentTurnState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TurnState>* TurnStates; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A13BE7CB4B378D97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentTurnState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentTurnState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_A13BE7CB4B378D97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A95F28C65DA98926(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_A95F28C65DA98926_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F6C5816AD7218F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTurnState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTurnState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_6F6C5816AD7218F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2C07643C1F62845(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_A2C07643C1F62845_OFFSET))(a1, a2);
		}
	};
}
