#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfTargetType_TypeDefinitionIndex = 10036;

	enum class ElfTargetType : ::System::Int32
	{
		Unknown = 0,
		OwnerEntity = 1,
		TargetEntity = 2,
		GameEntity = 3,
		LittleGameEntity = 4,
		EscapeBillEntity = 5,
		WavesEntity = 6,
		OrdersEntity = 7,
	};
}
