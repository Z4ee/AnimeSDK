#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FramePassCapturer_CaptureTarget.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CaptureScene; }
namespace System { class String; }

#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18EC4DA0)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18EC56E0)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18EC5740)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18EC56F0)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EC4D80)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC3990)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureScene___CaptureCoroutine_d__18_TypeDefinitionIndex = 35274;

	class CaptureScene___CaptureCoroutine_d__18 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::String* _png_path_5__3; // 0x18
		::System::String* _txt_path_5__4; // 0x20
		::RPG::CustomRP::CaptureScene* __4__this; // 0x28
		::System::String* _folder_5__2; // 0x30
		::System::String* _param_str_5__5; // 0x38
		::RPG::CustomRP::FramePassCapturer_CaptureTarget target; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURECOROUTINE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
