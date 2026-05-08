#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BulletHoleUpdateStrategy_TypeDefinitionIndex = 74777;

	enum class BulletHoleUpdateStrategy : ::System::Int32
	{
		None = 0,
		Update_Pos_Once = 1,
		Update_Pos_Always = 2,
	};
}
