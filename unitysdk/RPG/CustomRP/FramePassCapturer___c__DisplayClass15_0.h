#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1857B9E0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___C__DISPLAYCLASS15_0___STARTCAPTUREFRAMEANDPARAMS_B__0_OFFSET UNITYSDK_OFFSET(0x1857B9F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer___c__DisplayClass15_0_TypeDefinitionIndex = 36940;

	class FramePassCapturer___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Int32 width; // 0x10
		::System::Boolean readbackEnded; // 0x14
		::System::Int32 height; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __StartCaptureFrameAndParams_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER___C__DISPLAYCLASS15_0___STARTCAPTUREFRAMEANDPARAMS_B__0_OFFSET))(this, a1);
		}
	};
}
