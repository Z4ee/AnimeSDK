#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_EventType_TypeDefinitionIndex = 44199;

	enum class AbyssS2_EventType : ::System::Int32
	{
		OnArea_Finish = 1,
		OnArea_OnSelected = 3,
		OnMap_ReGen = 10,
		OnArea_RoomReady = 2,
		None = 0,
	};
}
