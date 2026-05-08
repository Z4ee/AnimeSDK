#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EventAndReceivers_EventType_TypeDefinitionIndex = 48565;

enum class EventAndReceivers_EventType : ::System::Int32
{
	Drag = 2,
	Scroll = 8,
	Pointers = 4,
	Drop = 16,
};
