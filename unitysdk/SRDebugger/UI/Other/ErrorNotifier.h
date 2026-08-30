#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define SRDEBUGGER_UI_OTHER_ERRORNOTIFIER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BDC55E0)
#define SRDEBUGGER_UI_OTHER_ERRORNOTIFIER_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BDC55D0)
#define SRDEBUGGER_UI_OTHER_ERRORNOTIFIER_SHOWERRORWARNING_OFFSET UNITYSDK_OFFSET(0x1BDA51D0)
#define SRDEBUGGER_UI_OTHER_ERRORNOTIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDC5620)
#define SRDEBUGGER_UI_OTHER_ERRORNOTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC56A0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int ErrorNotifier_TypeDefinitionIndex = 37311;

	class ErrorNotifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single DisplayTime; // 0x0
		::UnityEngine::Animator* _animator; // 0x18
		::System::Int32 _triggerHash; // 0x20
		::System::Single _hideTime; // 0x24
		::System::Boolean _isShowing; // 0x28
		::System::Boolean _queueWarning; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_ERRORNOTIFIER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_ERRORNOTIFIER_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_ERRORNOTIFIER_AWAKE_OFFSET))(this);
		}

		::System::Void ShowErrorWarning()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_ERRORNOTIFIER_SHOWERRORWARNING_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_ERRORNOTIFIER_UPDATE_OFFSET))(this);
		}
	};
}
