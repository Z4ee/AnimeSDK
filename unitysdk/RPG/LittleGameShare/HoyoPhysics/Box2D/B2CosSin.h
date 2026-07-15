#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2CosSin_TypeDefinitionIndex = 35089;

	struct alignas(4) B2CosSin
	{
		::System::Single cosine; // 0x10
		::System::Single sine; // 0x14
	};
}
