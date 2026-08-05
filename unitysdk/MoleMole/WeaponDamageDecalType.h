#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int WeaponDamageDecalType_TypeDefinitionIndex = 86203;

	enum class WeaponDamageDecalType : ::System::Int32
	{
		SharpWeapon = 1,
		BluntWeapon = 2,
		Unknown = 0,
	};
}
