#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"

#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AF1E0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonoUI3DGamePlayer_TypeDefinitionIndex = 69728;

	class MonoUI3DGamePlayer : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEPLAYER__CTOR_OFFSET))(this);
		}
	};
}
