#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace MoleMole { class MainCityPhotoPopContext; }
namespace MoleMole { class PhotoFrameCustomWidgetView; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_CUSTOMVIEW_OFFSET UNITYSDK_OFFSET(0x16426240)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x164262C0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_PHOTOLOGO_CLOUDGAME_OFFSET UNITYSDK_OFFSET(0x16426440)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_PHOTOLOGO_OFFSET UNITYSDK_OFFSET(0x164263E0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x16426320)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x16426260)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_GET_VERID_TEXT_OFFSET UNITYSDK_OFFSET(0x16426380)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x164283C0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16428310)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONPHOTOPLAYERINFOCHANGE_OFFSET UNITYSDK_OFFSET(0x164265F0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16426AC0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16428370)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164264A0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16426A50)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SETPHOTOLOGO_OFFSET UNITYSDK_OFFSET(0x16428410)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SET_CUSTOMVIEW_OFFSET UNITYSDK_OFFSET(0x16426250)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SHOWNICKNAME_OFFSET UNITYSDK_OFFSET(0x16426BC0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SHOWUID_OFFSET UNITYSDK_OFFSET(0x16427050)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_SHOWWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x16427450)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER_UPDATEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x16426650)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16428B20)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16428B80)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16428B90)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16428C20)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16428CC0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16428CD0)
#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16428D60)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoFrameCustomWidgetController_TypeDefinitionIndex = 67617;

	class PhotoFrameCustomWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::PhotoFrameCustomWidgetView* _CustomView_k__BackingField; // 0x2C0
		::MoleMole::UIControllerContextBase* _context; // 0x2C8

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
