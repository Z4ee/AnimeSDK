#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardEffectType_TypeDefinitionIndex = 23591;

	enum class FateRinCaseBoardEffectType : ::System::Int32
	{
		None = 0,
		AvatarSwitch = 1,
		AvatarShow = 2,
		AvatarHide = 3,
		GrailShow = 4,
		TeamShow = 5,
		HouguMaybeShow = 6,
		HouguShow = 7,
		NameShow = 8,
		NameRefresh = 9,
		LineShow = 10,
		MasterTagShow = 11,
		MasterTagHide = 12,
	};
}
