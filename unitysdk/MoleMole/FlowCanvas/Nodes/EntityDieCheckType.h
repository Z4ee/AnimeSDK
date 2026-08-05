#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EntityDieCheckType_TypeDefinitionIndex = 74748;

	enum class EntityDieCheckType : ::System::Int32
	{
		DeadShot = 2,
		EntityDestroy = 1,
		ZeroHp = 0,
	};
}
