#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int BulletDamageDecalType_TypeDefinitionIndex = 41441;

	enum class BulletDamageDecalType : ::System::Int32
	{
		Unknown = 0,
		ShotgunPelletHole = 4,
		SingleBulletHole = 3,
	};
}
