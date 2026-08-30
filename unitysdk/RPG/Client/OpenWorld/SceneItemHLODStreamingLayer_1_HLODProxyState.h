#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_HLODProxyState_TypeDefinitionIndex = 73714;

	enum class SceneItemHLODStreamingLayer_1_HLODProxyState : ::System::Int32
	{
		None = 0,
		PendingOrLoading = 1,
		Fading = 2,
		Ready = 3,
	};
}
