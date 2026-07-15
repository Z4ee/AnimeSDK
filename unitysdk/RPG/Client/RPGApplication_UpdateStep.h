#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RPGApplication_UpdateStep_TypeDefinitionIndex = 66364;

	enum class RPGApplication_UpdateStep : ::System::Int32
	{
		BeforeUpdate = 0,
		Update = 1,
		AfterUpdate = 2,
		LateUpdate = 3,
		AfterLateUpdate = 4,
	};
}
