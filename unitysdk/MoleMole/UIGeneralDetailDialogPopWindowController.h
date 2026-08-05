#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_1A39E1B51756BF41;
class Class_2_60638234271CCDB8_162;
namespace MoleMole { class GeneralDetailContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x18EB6140)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18EB6130)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_INITIMAGEAREA_OFFSET UNITYSDK_OFFSET(0x18EB6A20)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x18EB6E70)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x18EB6E00)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EB6BC0)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18EB6C50)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EB6D90)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EB6150)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EB6310)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB6FC0)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER__INITIMAGEAREA_G__DOINITIMAGEAREA_15_0_OFFSET UNITYSDK_OFFSET(0x18EB6EE0)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EB6FD0)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18EB7060)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EB7120)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EB7130)
#define MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EB7140)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDetailDialogPopWindowController_TypeDefinitionIndex = 80037;

	class UIGeneralDetailDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_162* _view; // 0x318
		::MoleMole::GeneralDetailContext* _detailContext; // 0x320
		::System::Boolean _isConfirm; // 0x328
		::System::Boolean _isCancel; // 0x329

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONCLICKCONFIRM_OFFSET))(this);
		}

		::System::Void OnCLickCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_ONCLICKCANCEL_OFFSET))(this);
		}

		::System::Void InitImageArea(::MoleMole::GeneralDetailContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GeneralDetailContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER_INITIMAGEAREA_OFFSET))(this, context);
		}

		static ::System::Void _InitImageArea_g__DoInitImageArea_15_0(::System::String* imagePath, ::System::String* imageNameTextKey, ::UnityEngine::RectTransform* imageArea, ::Class_2_1A39E1B51756BF41* image, ::UnityEngine::RectTransform* imageTextRoot, ::UnityEngine::UI::Extension::UILocalizationText* imageText)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::RectTransform*, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::RectTransform*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER__INITIMAGEAREA_G__DOINITIMAGEAREA_15_0_OFFSET))(imagePath, imageNameTextKey, imageArea, image, imageTextRoot, imageText);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
