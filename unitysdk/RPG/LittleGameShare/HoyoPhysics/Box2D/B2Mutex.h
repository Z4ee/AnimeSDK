#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Mutex_TypeDefinitionIndex = 35173;

	struct alignas(8) B2Mutex
	{
		::System::Object* lc; // 0x10
	};
}
