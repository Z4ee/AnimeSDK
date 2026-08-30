#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FramePassCapturer_CaptureTarget.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CaptureGlobalMutationDesc.h"

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C6AC910)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C6ACAA0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C6ACB00)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C6ACAB0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6AC8F0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTUREFRAMEANDPARAMS_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AC480)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer__CaptureFrameAndParams_d__12_TypeDefinitionIndex = 36941;

	class FramePassCapturer__CaptureFrameAndParams_d__12 : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::CaptureGlobalMutationDesc _desc_5__2; // 0x10
		::System::Object* __2__current; // 0x30
		::System::Int32 width; // 0x38
		::System::Int32 __1__state; // 0x3C
		::RPG::CustomRP::FramePassCapturer_CaptureTarget target; // 0x40
		::System::Int32 height; // 0x44

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
