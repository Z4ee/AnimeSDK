#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1C00730466C60BCB_1;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowProgressCircleRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x14675CB0)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14675C20)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14677700)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14675B50)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14675BB0)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x14676BC0)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_PROGRESSBARANIM_OFFSET UNITYSDK_OFFSET(0x14676C30)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_REFRESHTICKICON_OFFSET UNITYSDK_OFFSET(0x14676860)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x14677400)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14677790)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14677870)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14677900)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14677990)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14677A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPhaseProgress02WidgetController_TypeDefinitionIndex = 45261;

	class UIGeneralPhaseProgress02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1C00730466C60BCB_1* _view; // 0x2C0
		::DG::Tweening::Tween* _barHandler; // 0x2C8
		::MoleMole::UIHollowProgressCircleRowWidgetController* _mainIconCircleCtrl; // 0x2D0
		::UnityEngine::Vector3 _mainIconStartPos; // 0x2D8
		::UnityEngine::Vector3 _mainIconTarPos; // 0x2E4
		::System::Single _tarProgressBarRectPosX; // 0x2F0
		::System::Boolean showMainIcon; // 0x2F4
		::System::Collections::Generic::List_1<::MoleMole::UIHollowProgressCircleRowWidgetController*>* progressCircleCache; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitProgressView(::System::Int32 lastLayer, ::System::Int32 currentLayer, ::System::Int32 maxLayer, ::System::Boolean showMainIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET))(this, lastLayer, currentLayer, maxLayer, showMainIcon);
		}

		::System::Void PlayProgressAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET))(this);
		}

		::System::Void ProgressBarAnim(::System::Single tar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_PROGRESSBARANIM_OFFSET))(this, tar);
		}

		::System::Void SetProgress(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, val);
		}

		::System::Void RefreshTickIcon(::System::Single progressOffsetX)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_REFRESHTICKICON_OFFSET))(this, progressOffsetX);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
