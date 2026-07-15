#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EnviroCharaType_TypeDefinitionIndex = 66644;

	enum class EnviroCharaType : ::System::Int32
	{
		NoSet = 0,
		SetOnce = 1,
		EveryFrame = 2,
		Auto = 3,
		Scene = 4,
	};
}
