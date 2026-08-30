#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3F28033F34305C46;

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_HLODTransitionContext_TypeDefinitionIndex = 73716;

	template <typename T>
	struct SceneItemHLODStreamingLayer_1_HLODTransitionContext
	{
		::Class_1_3F28033F34305C46* CommonCtx; // 0x0
		::System::Boolean IsMainThread; // 0x0
		::System::Boolean ForceStreaming; // 0x0
		::System::Boolean DelayWatch; // 0x0
	};
}
