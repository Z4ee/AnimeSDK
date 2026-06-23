#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaBgRowWidget.h"

class Class_2_175B5875BC5A4D3B;
class Class_2_37C94C86ECA05C77;
class Class_2_7D65EA87A8CD817B;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaWidgetContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_CREATEFRAMETEXTUREPLAYER_OFFSET UNITYSDK_OFFSET(0x16F595D0)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_CREATEVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x16F59320)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F58B40)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16F58960)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F58BD0)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F58890)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F588F0)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_REFRESHSCREENPLAYERS_OFFSET UNITYSDK_OFFSET(0x16F58D80)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16F58AF0)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16F598E0)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F59A90)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER__REFRESHSCREENPLAYERS_G__INITPLAYERANDPLAY_7_0_OFFSET UNITYSDK_OFFSET(0x16F59270)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F59AF0)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16F59B80)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F59C20)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F59CB0)
#define MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F59D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaCommonBgRowWidgetController_TypeDefinitionIndex = 71237;

	class UIGachaCommonBgRowWidgetController : public ::MoleMole::UIGachaBgRowWidget
	{
	public:
		::Class_2_7D65EA87A8CD817B* _view; // 0x2C0
		::Class_2_37C94C86ECA05C77* _uiConfig; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* _screenPlayers; // 0x2D0
		::System::Boolean _screenPlayersInitialized; // 0x2D8
		::MoleMole::UIGachaWidgetContextBase* _contextBase; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshScreenPlayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_REFRESHSCREENPLAYERS_OFFSET))(this);
		}

		::Class_2_175B5875BC5A4D3B* CreateVideoPlayer(::UnityEngine::UI::Graphic* target, ::System::Int32 group, ::System::Boolean playImmediately)
		{
			return ((::Class_2_175B5875BC5A4D3B*(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_CREATEVIDEOPLAYER_OFFSET))(this, target, group, playImmediately);
		}

		::Class_2_175B5875BC5A4D3B* CreateFrameTexturePlayer(::UnityEngine::UI::Graphic* target, ::System::Int32 group, ::System::Boolean playImmediately)
		{
			return ((::Class_2_175B5875BC5A4D3B*(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_CREATEFRAMETEXTUREPLAYER_OFFSET))(this, target, group, playImmediately);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void _RefreshScreenPlayers_g__InitPlayerAndPlay_7_0(::System::Int32 type, ::System::Int32 group, ::UnityEngine::UI::Graphic* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER__REFRESHSCREENPLAYERS_G__INITPLAYERANDPLAY_7_0_OFFSET))(this, type, group, target);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHACOMMONBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
