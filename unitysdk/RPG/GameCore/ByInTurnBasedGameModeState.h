#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_0AA49AE794563DC2_OFFSET UNITYSDK_OFFSET(0x1A8D3C30)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_1A7B8403EF127C96_OFFSET UNITYSDK_OFFSET(0x1A8D3AB0)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_2486542621D8AE95_OFFSET UNITYSDK_OFFSET(0x1A8D3C60)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_637B1BF72A350E47_OFFSET UNITYSDK_OFFSET(0x1A8D3A70)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D3AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTurnBasedGameModeState_TypeDefinitionIndex = 22704;

	class ByInTurnBasedGameModeState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GameModeState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_637B1BF72A350E47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTurnBasedGameModeState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTurnBasedGameModeState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_637B1BF72A350E47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A7B8403EF127C96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_1A7B8403EF127C96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0AA49AE794563DC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTurnBasedGameModeState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTurnBasedGameModeState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_0AA49AE794563DC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2486542621D8AE95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_2486542621D8AE95_OFFSET))(a1, a2);
		}
	};
}
