#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkGlobalCallbackLocation_TypeDefinitionIndex = 41939;

enum class AkGlobalCallbackLocation : ::System::Int32
{
	AkGlobalCallbackLocation_Register = 1,
	AkGlobalCallbackLocation_Begin = 2,
	AkGlobalCallbackLocation_PreProcessMessageQueueForRender = 4,
	AkGlobalCallbackLocation_PostMessagesProcessed = 8,
	AkGlobalCallbackLocation_BeginRender = 16,
	AkGlobalCallbackLocation_EndRender = 32,
	AkGlobalCallbackLocation_End = 64,
	AkGlobalCallbackLocation_Term = 128,
	AkGlobalCallbackLocation_Monitor = 256,
	AkGlobalCallbackLocation_MonitorRecap = 512,
	AkGlobalCallbackLocation_Init = 1024,
	AkGlobalCallbackLocation_Suspend = 2048,
	AkGlobalCallbackLocation_WakeupFromSuspend = 4096,
	AkGlobalCallbackLocation_Num = 13,
};
