#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhase.h"

class Class_2_8CF02C3C8507EA90;

#define RPG_CLIENT_GAMEPHASE_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xA41F440)
#define RPG_CLIENT_GAMEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA41F480)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhase_TypeDefinitionIndex = 56370;

	class GamePhase : public ::RPG::Client::BasePhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASE__CTOR_OFFSET))(this);
		}

		::Class_2_8CF02C3C8507EA90* get_GameContext()
		{
			return ((::Class_2_8CF02C3C8507EA90*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASE_GET_GAMECONTEXT_OFFSET))(this);
		}
	};
}
