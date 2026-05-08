#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterDamageDecalType_TypeDefinitionIndex = 68528;

	enum class CharacterDamageDecalType : ::System::Int32
	{
		SingleBulletHole = 2,
		SharpWeapon = 0,
		Unknown = -1,
		BluntWeapon = 1,
		ShotgunPelletHole = 3,
	};
}
