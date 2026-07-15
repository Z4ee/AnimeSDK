#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_MovieEventSyncMode_TypeDefinitionIndex = 38061;

	enum class Player_MovieEventSyncMode : ::System::Int32
	{
		FrameTime = 0,
		PlayBackTime = 1,
	};
}
