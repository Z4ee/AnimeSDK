#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FramePassCapturer_CaptureTarget.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16A9C510)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A9C650)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A9C6B0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16A9C660)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A9C500)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9BF30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer__CaptureFrameAndParams_d__12_TypeDefinitionIndex = 29248;

	class FramePassCapturer__CaptureFrameAndParams_d__12 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 height; // 0x18
		::RPG::CustomRP::FramePassCapturer_CaptureTarget target; // 0x1C
		::System::Int32 width; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
