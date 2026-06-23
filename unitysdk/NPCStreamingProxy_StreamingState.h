#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NPCStreamingProxy_StreamingState_TypeDefinitionIndex = 68138;

enum class NPCStreamingProxy_StreamingState : ::System::Byte
{
	Unloaded = 0x0,
	Loaded = 0x2,
	Loading = 0x1,
};
