#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterDamageDecalType_TypeDefinitionIndex = 80704;

	enum class CharacterDamageDecalType : ::System::Int32
	{
		SharpWeapon = 0,
		ShotgunPelletHole = 3,
		BluntWeapon = 1,
		Unknown = -1,
		SingleBulletHole = 2,
	};
}
