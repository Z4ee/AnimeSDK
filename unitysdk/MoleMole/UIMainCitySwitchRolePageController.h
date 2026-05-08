#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_A11CB4C08EF906E4;
class Class_2_C8393BDF0FB18A03;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainCitySwitchRoleSwitchPanelWidgetController; }
namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }
namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETANDSELECTSKINNEWBIEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x147BA380)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETDEFAULTTABINDEX_OFFSET UNITYSDK_OFFSET(0x147BACF0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x147BA090)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GET_TOPANIM_OFFSET UNITYSDK_OFFSET(0x147B9940)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x147B9930)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ISSKINSWITCHMUIPLOCKED_OFFSET UNITYSDK_OFFSET(0x147BA4D0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x147BA600)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147BB100)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x147BB200)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONNEWBIECLOSE_OFFSET UNITYSDK_OFFSET(0x147BA3F0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x147BB050)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONPRECHECKSWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0x147BB390)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x147BB270)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147BB190)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147B9960)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147BABE0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_REFRESHRUNTIMEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x147B9F10)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_SHOWORHIDEWIDGET_OFFSET UNITYSDK_OFFSET(0x147BAB30)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_TRYTRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x147BB0C0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147BB7D0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x147BB890)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147BB920)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x147BB9B0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x147BBA40)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x147BBA50)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147BBA60)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147BBA70)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147BBA80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRolePageController_TypeDefinitionIndex = 49904;

	class UIMainCitySwitchRolePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_C8393BDF0FB18A03* _view; // 0x310
		::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController* _timePanel; // 0x318
		::MoleMole::UIMainCitySwitchRoleSwitchPanelWidgetController* _switchPanel; // 0x320
		::MoleMole::UIPlayerSkinSwitchWidgetController* _skinSwitchPanel; // 0x328
		::System::Boolean _cancelNew; // 0x330
		::System::Int32 _curIndex; // 0x334
		::System::Int32 m_skinSwitchGuide; // 0x338
		::System::Collections::Generic::List_1<::System::Int32>* m_skinSwitchGuideList; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* get_TopAnim()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GET_TOPANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Void OnNewbieClose(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONNEWBIECLOSE_OFFSET))(this, args);
		}

		::System::Boolean IsSkinSwitchMuipLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ISSKINSWITCHMUIPLOCKED_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void ShowOrHideWidget(::MoleMole::UIBaseController* ctrl, ::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_SHOWORHIDEWIDGET_OFFSET))(this, ctrl, show);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Int32 GetDefaultTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETDEFAULTTABINDEX_OFFSET))(this);
		}

		::System::Void TryTriggerNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_TRYTRIGGERNEWBIE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetAndSelectSkinNewbieGameObject(::System::Int32 targetSkinID, ::System::String* param)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_GETANDSELECTSKINNEWBIEGAMEOBJECT_OFFSET))(this, targetSkinID, param);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnPreCheckSwitchAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_ONPRECHECKSWITCHAVATAR_OFFSET))(this);
		}

		::System::Void RefreshRuntimeInputAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER_REFRESHRUNTIMEINPUTACTION_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
