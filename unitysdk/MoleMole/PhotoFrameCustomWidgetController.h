#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace MoleMole { class MainCityPhotoPopContext; }
namespace MoleMole { class PhotoFrameCustomWidgetView; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_CUSTOMVIEW_OFFSET UNITYSDK_OFFSET(0x15856420)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x158564A0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_PHOTOLOGO_CLOUDGAME_OFFSET UNITYSDK_OFFSET(0x15856620)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_PHOTOLOGO_OFFSET UNITYSDK_OFFSET(0x158565C0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x15856500)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x15856440)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_VERID_TEXT_OFFSET UNITYSDK_OFFSET(0x15856560)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15858460)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x158583B0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONPHOTOPLAYERINFOCHANGE_OFFSET UNITYSDK_OFFSET(0x158567C0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15856C90)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15858410)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15856680)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15856C20)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SETPHOTOLOGO_OFFSET UNITYSDK_OFFSET(0x158584B0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SET_CUSTOMVIEW_OFFSET UNITYSDK_OFFSET(0x15856430)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SHOWNICKNAME_OFFSET UNITYSDK_OFFSET(0x15856D90)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SHOWUID_OFFSET UNITYSDK_OFFSET(0x15857220)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SHOWWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x15857620)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_UPDATEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x15856820)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15858BC0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15858C20)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15858C30)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15858CC0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15858D60)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15858D70)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15858E00)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoFrameCustomWidgetController_TypeDefinitionIndex = 65716;

	class PhotoFrameCustomWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::PhotoFrameCustomWidgetView* _CustomView_k__BackingField; // 0x2B8
		::MoleMole::UIControllerContextBase* _context; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::PhotoFrameCustomWidgetView* get_CustomView()
		{
			return ((::MoleMole::PhotoFrameCustomWidgetView*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_CUSTOMVIEW_OFFSET))(this);
		}

		::System::Void set_CustomView(::MoleMole::PhotoFrameCustomWidgetView* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::PhotoFrameCustomWidgetView*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SET_CUSTOMVIEW_OFFSET))(this, value);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_TextID()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_TEXTID_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_Name()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_StageName()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_STAGENAME_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_VerID_Text()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_VERID_TEXT_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_photoLogo()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_PHOTOLOGO_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_photoLogo_Cloudgame()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_PHOTOLOGO_CLOUDGAME_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnPhotoPlayerInfoChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONPHOTOPLAYERINFOCHANGE_OFFSET))(this, obj);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdatePlayerInfo(::System::Boolean isShowPlayerinfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_UPDATEPLAYERINFO_OFFSET))(this, isShowPlayerinfo);
		}

		::System::Void ShowNickName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SHOWNICKNAME_OFFSET))(this);
		}

		::System::Void ShowUID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SHOWUID_OFFSET))(this);
		}

		::System::Void ShowWithContext(::MoleMole::MainCityPhotoPopContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MainCityPhotoPopContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SHOWWITHCONTEXT_OFFSET))(this, context);
		}

		::System::Void SetPhotoLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SETPHOTOLOGO_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
