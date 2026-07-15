#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2ManifoldFcn; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactRegister_TypeDefinitionIndex = 35081;

	struct alignas(8) B2ContactRegister
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2ManifoldFcn* fcn; // 0x10
		::System::Boolean primary; // 0x18
	};
}
