#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class FramePassCapturer___c__DisplayClass15_0; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18140370)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18140690)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x181406F0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x181406A0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18140350)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1813F9C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer___StartCaptureFrameAndParams_d__15_TypeDefinitionIndex = 35018;

	class FramePassCapturer___StartCaptureFrameAndParams_d__15 : public ::System::Object
	{
	public:
		::RPG::CustomRP::FramePassCapturer___c__DisplayClass15_0* __8__1; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::RenderTexture* _tex_5__2; // 0x20
		::System::Int32 width; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Int32 _i_5__3; // 0x30
		::System::Int32 height; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
