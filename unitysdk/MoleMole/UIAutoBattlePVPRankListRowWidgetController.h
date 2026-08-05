#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_2_79F6D62CE30E3F8E_164;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18014E10)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18014F20)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x18014B70)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18014EA0)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180149C0)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18014DA0)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET UNITYSDK_OFFSET(0x18014C10)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18015AA0)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18015AB0)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18015B40)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18015BE0)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18015C70)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18015D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPRankListRowWidgetController_TypeDefinitionIndex = 67948;

	class UIAutoBattlePVPRankListRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_164* _view; // 0x2F0
		::System::Boolean _allowShowPlatform; // 0x2F8
		::System::Boolean _canSwitchPlatformInfo; // 0x2F9
		::Class_2_2F3C7D4EFC74D485* _model; // 0x300
		::UnityEngine::UI::Extension::UILocalizationText* displayNameText; // 0x308
		::Class_1_BE6BF7909AD9D940* _brief; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void ShowPlatformUI(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
