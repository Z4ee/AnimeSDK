#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_1A7B8403EF127C96_OFFSET UNITYSDK_OFFSET(0x17028660)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_45AE92BFBB994368_OFFSET UNITYSDK_OFFSET(0x17028590)
#define RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17028610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTurnBasedGameModeState_TypeDefinitionIndex = 21777;

	class ByInTurnBasedGameModeState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GameModeState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_45AE92BFBB994368(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTurnBasedGameModeState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTurnBasedGameModeState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_45AE92BFBB994368_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A7B8403EF127C96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTURNBASEDGAMEMODESTATE_METHOD_4_1A7B8403EF127C96_OFFSET))(a1, a2);
		}
	};
}
