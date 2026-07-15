#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FrameCapture_CaptureFeature_TypeDefinitionIndex = 36068;

	enum class FrameCapture_CaptureFeature : ::System::Int32
	{
		None = 0,
		NoPP = 1,
		NoTAA = 2,
		Immediate = 4,
		ClearStencil = 8,
		FP16Backbuffer = 16,
		ToneMappingAfterCapture = 32,
		LastFrame = 64,
	};
}
