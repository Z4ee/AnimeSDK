#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkMIDIEventTypes_TypeDefinitionIndex = 41956;

enum class AkMIDIEventTypes : ::System::Int32
{
	NOTE_OFF = 128,
	NOTE_ON = 144,
	NOTE_AFTERTOUCH = 160,
	CONTROLLER = 176,
	PROGRAM_CHANGE = 192,
	CHANNEL_AFTERTOUCH = 208,
	PITCH_BEND = 224,
	SYSEX = 240,
	ESCAPE = 247,
	META = 255,
};
