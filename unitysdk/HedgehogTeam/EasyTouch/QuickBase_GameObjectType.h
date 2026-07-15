#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickBase_GameObjectType_TypeDefinitionIndex = 38095;

	enum class QuickBase_GameObjectType : ::System::Int32
	{
		Auto = 0,
		Obj_3D = 1,
		Obj_2D = 2,
		UI = 3,
	};
}
