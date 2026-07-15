#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GateLinkInfoState_TypeDefinitionIndex = 74944;

	enum class GateLinkInfoState : ::System::Int32
	{
		None = 0,
		Link = 1,
		LinkInverse = 2,
	};
}
