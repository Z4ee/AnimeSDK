#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_2140EBF640BC9674.h"

class Class_2_063C846A0B9F182E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_GET_PLAYANIMWITHPARENT_OFFSET UNITYSDK_OFFSET(0x14B71A40)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_HANDLEEXTRAUIOPERATION_OFFSET UNITYSDK_OFFSET(0x14B72740)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B71B50)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B71BE0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B71A50)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14B71AB0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x14B726F0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x14B72670)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0x14B72390)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x14B71E80)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14B71C60)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14B72800)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B72860)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B728F0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B72980)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14B72A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTimerWidgetController_TypeDefinitionIndex = 78936;

	class UIInLevelTimerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_063C846A0B9F182E* _view; // 0x2B8
		::System::Boolean pause; // 0x2C0
		::System::Boolean _isLastPaused; // 0x2C1
		::System::Single countDownSeconds; // 0x2C4
		::System::Int32 _lastWorldTimeScaleFlag; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_PlayAnimWithParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_GET_PLAYANIMWITHPARENT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATEAUDIO_OFFSET))(this);
		}

		::System::Void SetFillAmount(::System::Single remainingNormalized)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETFILLAMOUNT_OFFSET))(this, remainingNormalized);
		}

		::System::Void SetTime(::System::Int32 totalS)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETTIME_OFFSET))(this, totalS);
		}

		::System::Void Pause(::System::Boolean pauseState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_PAUSE_OFFSET))(this, pauseState);
		}

		::System::Void HandleExtraUIOperation(::Struct_2_2140EBF640BC9674 data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2140EBF640BC9674))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_HANDLEEXTRAUIOPERATION_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
