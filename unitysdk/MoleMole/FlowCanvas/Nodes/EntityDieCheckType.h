#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EntityDieCheckType_TypeDefinitionIndex = 74929;

	enum class EntityDieCheckType : ::System::Int32
	{
		EntityDestroy = 1,
		DeadShot = 2,
		ZeroHp = 0,
	};
}
