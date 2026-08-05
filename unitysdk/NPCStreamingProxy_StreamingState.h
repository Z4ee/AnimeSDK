#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NPCStreamingProxy_StreamingState_TypeDefinitionIndex = 67513;

enum class NPCStreamingProxy_StreamingState : ::System::Byte
{
	Unloaded = 0x0,
	Loading = 0x1,
	Loaded = 0x2,
};
