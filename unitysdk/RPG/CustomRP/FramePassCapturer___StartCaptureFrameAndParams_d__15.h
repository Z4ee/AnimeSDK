#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class FramePassCapturer___c__DisplayClass15_0; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1857C0C0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1857C3D0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1857C430)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1857C3E0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1857C0B0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1857B850)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer___StartCaptureFrameAndParams_d__15_TypeDefinitionIndex = 36944;

	class FramePassCapturer___StartCaptureFrameAndParams_d__15 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::RenderTexture* _tex_5__2; // 0x18
		::RPG::CustomRP::FramePassCapturer___c__DisplayClass15_0* __8__1; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 height; // 0x2C
		::System::Int32 _i_5__3; // 0x30
		::System::Int32 width; // 0x34

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER___STARTCAPTUREFRAMEANDPARAMS_D__15__CTOR_OFFSET))(this, a1);
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
