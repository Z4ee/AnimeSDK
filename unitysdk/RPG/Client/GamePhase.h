#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhase.h"

class Class_2_B7D28807473A6079;

#define RPG_CLIENT_GAMEPHASE_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x192D7090)
#define RPG_CLIENT_GAMEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x192D70D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhase_TypeDefinitionIndex = 58390;

	class GamePhase : public ::RPG::Client::BasePhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASE__CTOR_OFFSET))(this);
		}

		::Class_2_B7D28807473A6079* get_GameContext()
		{
			return ((::Class_2_B7D28807473A6079*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASE_GET_GAMECONTEXT_OFFSET))(this);
		}
	};
}
