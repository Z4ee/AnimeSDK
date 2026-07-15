#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FramePassCapturer_CaptureTarget.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16BEC380)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16BEC4C0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16BEC520)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16BEC4D0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BEC370)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x16BEBF00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer__CaptureFrameAndParams_d__12_TypeDefinitionIndex = 36082;

	class FramePassCapturer__CaptureFrameAndParams_d__12 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C
		::System::Int32 __1__state; // 0x20
		::RPG::CustomRP::FramePassCapturer_CaptureTarget target; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12__CTOR_OFFSET))(this, a1);
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
