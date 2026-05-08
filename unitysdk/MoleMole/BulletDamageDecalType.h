#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int BulletDamageDecalType_TypeDefinitionIndex = 72927;

	enum class BulletDamageDecalType : ::System::Int32
	{
		SingleBulletHole = 3,
		Unknown = 0,
		ShotgunPelletHole = 4,
	};
}
