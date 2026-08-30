#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODStreamingLayer_1_HLODTransitionKind.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeExpandStatus.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_HLODTransitionEnterRequest_TypeDefinitionIndex = 73717;

	template <typename T>
	struct SceneItemHLODStreamingLayer_1_HLODTransitionEnterRequest
	{
		::RPG::Client::OpenWorld::SceneItemHLODStreamingLayer_1_HLODTransitionKind<T> Kind; // 0x0
		::System::Boolean ForceProxyEnable; // 0x0
		::System::Boolean DisableProxyOnEnter; // 0x0
	};
}
