#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_CriManaUnityPlayer_RenderEventAction_TypeDefinitionIndex = 38070;

	enum class Player_CriManaUnityPlayer_RenderEventAction : ::System::Int32
	{
		UPDATE = 0,
		INITIALIZE = 256,
		RENDER = 512,
		DESTROY = 768,
	};
}
