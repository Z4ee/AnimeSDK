#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_48.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/UICampIdlePointPanelWidgetController_InViewState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MonoUITableScrollV2_ScrollParams_SelectAlignType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_B4378B46E0020E85;
class Class_2_DB0FCE9E013F4C7C;
class Class_2_FDFE69FE7B72463B;
class MonoScrollBarEx;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UICampIdleNodeWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_BINDSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x158CA810)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETNODEPREFABBYID_OFFSET UNITYSDK_OFFSET(0x158CB260)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETVIEWSTATEOF_OFFSET UNITYSDK_OFFSET(0x158CA760)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_CONTENTBTN_OFFSET UNITYSDK_OFFSET(0x158CA740)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACEANIMATION_OFFSET UNITYSDK_OFFSET(0x158CA6E0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACE_OFFSET UNITYSDK_OFFSET(0x158CA700)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_POINTPANEL_OFFSET UNITYSDK_OFFSET(0x158CA720)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_INITNODES_OFFSET UNITYSDK_OFFSET(0x158CA8D0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158CBC00)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158CBC90)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158CA680)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x158CBB90)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SCROLLTOID_OFFSET UNITYSDK_OFFSET(0x158CB4B0)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SETPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x158CA880)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_TRYAVOIDOCCULUSION_OFFSET UNITYSDK_OFFSET(0x158CB810)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x158CBD10)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158CBD70)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158CBE00)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158CBE90)
#define MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x158CBF20)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePointPanelWidgetController_TypeDefinitionIndex = 74683;

	class UICampIdlePointPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DB0FCE9E013F4C7C* _view; // 0x2B8
		::Enum_3_0A3761FE34514D6C_48 m_playType; // 0x2C0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UICampIdleNodeWidgetController*>* m_ctrlDict; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* get_DialogSpaceAnimation()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACEANIMATION_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_DialogSpace()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_DIALOGSPACE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadCustomList* get_PointPanel()
		{
			return ((::MoleMole::MonoGamepadCustomList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_POINTPANEL_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_ContentBtn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GET_CONTENTBTN_OFFSET))(this);
		}

		::MoleMole::UICampIdlePointPanelWidgetController_InViewState GetViewStateOf(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::MoleMole::UICampIdlePointPanelWidgetController_InViewState(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETVIEWSTATEOF_OFFSET))(this, rectTransform);
		}

		::System::Void BindScrollBar(::MonoScrollBarEx* bar)
		{
			return ((::System::Void(*)(::PVOID, ::MonoScrollBarEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_BINDSCROLLBAR_OFFSET))(this, bar);
		}

		::System::Void SetPlayType(::Enum_3_0A3761FE34514D6C_48 playType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_48))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SETPLAYTYPE_OFFSET))(this, playType);
		}

		::System::Void InitNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_INITNODES_OFFSET))(this);
		}

		::Enum_3_81A3942BCC6E42B5 GetNodePrefabByID(::System::Int32 id)
		{
			return ((::Enum_3_81A3942BCC6E42B5(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_GETNODEPREFABBYID_OFFSET))(this, id);
		}

		::System::Void ScrollToID(::System::Int32 nodeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_SCROLLTOID_OFFSET))(this, nodeID);
		}

		::System::Void TryAvoidOcculusion(::System::Int32 nodeID, ::MonoUITableScrollV2_ScrollParams_SelectAlignType alignType, ::UnityEngine::Vector2 range)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MonoUITableScrollV2_ScrollParams_SelectAlignType, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_TRYAVOIDOCCULUSION_OFFSET))(this, nodeID, alignType, range);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPOINTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
