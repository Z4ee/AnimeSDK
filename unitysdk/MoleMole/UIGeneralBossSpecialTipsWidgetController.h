#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_D90F2B37C5861C3F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMiddleTip; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_FORMATCOUNTDOWNTEXT_OFFSET UNITYSDK_OFFSET(0x1880E200)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_GETDUNGEONTIMERCOUNTDOWNREMAINING_OFFSET UNITYSDK_OFFSET(0x1880E150)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_HIDETIP_OFFSET UNITYSDK_OFFSET(0x1880DF60)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1880D9D0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONGIVENMIDDLETIPSHIDE_OFFSET UNITYSDK_OFFSET(0x1880E0A0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSHIDE_OFFSET UNITYSDK_OFFSET(0x1880DF10)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSSHOW_OFFSET UNITYSDK_OFFSET(0x1880DB00)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1880DA60)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1880D6B0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1880D960)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1880E300)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0x1880DBA0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1880E510)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1880E570)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1880E600)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1880E690)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1880E720)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBossSpecialTipsWidgetController_TypeDefinitionIndex = 54402;

	class UIGeneralBossSpecialTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Boolean* StaticGet_IsShowing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralBossSpecialTipsWidgetController_TypeDefinitionIndex)->GetStaticField(0xEAC0);
		}
		::Class_2_D90F2B37C5861C3F* _view; // 0x2C0
		::MoleMole::UIMiddleTip* _currentTip; // 0x2C8
		::System::Boolean _isCountingDown; // 0x2D0
		::System::Boolean _useDungeonTimerCountdown; // 0x2D1
		::System::Single _countdownEndDungeonTime; // 0x2D4
		::System::Single _countdownRemaining; // 0x2D8
		::System::Single _countdownElapsed; // 0x2DC
		::System::Boolean isShow; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnMiddleTipsShow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSSHOW_OFFSET))(this, args);
		}

		::System::Void OnMiddleTipsHide(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSHIDE_OFFSET))(this, args);
		}

		::System::Void OnGivenMiddleTipsHide(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONGIVENMIDDLETIPSHIDE_OFFSET))(this, args);
		}

		::System::Void ShowTip(::MoleMole::UIMiddleTip* tips)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiddleTip*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_SHOWTIP_OFFSET))(this, tips);
		}

		::System::Void HideTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_HIDETIP_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Int32 GetDungeonTimerCountdownRemaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_GETDUNGEONTIMERCOUNTDOWNREMAINING_OFFSET))(this);
		}

		::System::String* FormatCountdownText(::System::String* message, ::System::Int32 seconds)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_FORMATCOUNTDOWNTEXT_OFFSET))(this, message, seconds);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
