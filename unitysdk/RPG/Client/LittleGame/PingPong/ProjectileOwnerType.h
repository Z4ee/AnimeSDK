#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int ProjectileOwnerType_TypeDefinitionIndex = 40428;

	enum class ProjectileOwnerType : ::System::Int32
	{
		Racket = 0,
		Enemy = 1,
	};
}
