#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_F1842E4D13729459_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_CLOSEBYSCALE_OFFSET UNITYSDK_OFFSET(0x15E95790)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E9AD70)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E9ABC0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E9AE00)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E9AAF0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E9AB50)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_PLAYANIMANDCLOSE_OFFSET UNITYSDK_OFFSET(0x15E9ACE0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_REGONCLOSEDEALLOCATE_OFFSET UNITYSDK_OFFSET(0x15E96EA0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SETBUBBLEINDEX_OFFSET UNITYSDK_OFFSET(0x15E96E50)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SHOWBYSCALE_OFFSET UNITYSDK_OFFSET(0x15E9AC30)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SHOWWAVE_OFFSET UNITYSDK_OFFSET(0x15E96EF0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9AE80)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E9AF20)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E9AFB0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E9B050)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E9B0E0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E9B170)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotWaveItemWidgetController_TypeDefinitionIndex = 78201;

	class UIActivityHotpotWaveItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_F1842E4D13729459_1* _view; // 0x2B8
		::System::Int32 _bubbleIndex; // 0x2C0
		::System::Action_1<::MoleMole::UIActivityHotpotWaveItemWidgetController*>* _onDeallocate; // 0x2C8
		::System::String* anim; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetBubbleIndex(::System::Int32 bubbleIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SETBUBBLEINDEX_OFFSET))(this, bubbleIndex);
		}

		::System::Void ShowWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SHOWWAVE_OFFSET))(this);
		}

		::System::Void RegOnCloseDeallocate(::System::Action_1<::MoleMole::UIActivityHotpotWaveItemWidgetController*>* onDeallocate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIActivityHotpotWaveItemWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_REGONCLOSEDEALLOCATE_OFFSET))(this, onDeallocate);
		}

		::Cysharp::Threading::Tasks::UniTask PlayAnimAndClose()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_PLAYANIMANDCLOSE_OFFSET))(this);
		}

		::System::Void CloseByScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_CLOSEBYSCALE_OFFSET))(this);
		}

		::System::Void ShowByScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SHOWBYSCALE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
