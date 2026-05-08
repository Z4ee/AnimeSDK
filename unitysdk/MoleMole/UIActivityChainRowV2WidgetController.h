#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_1D6B384C0B7DC7C3;
class Class_2_29F68C41D871E38E;
class Class_2_604149159BD159AA;
class Class_3_AE02BC8285203464_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ADDITEMICONBTNSMALLWIDGET_OFFSET UNITYSDK_OFFSET(0x15E82B70)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E82950)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15E82D30)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E82AF0)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E82740)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E828E0)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_REFRESHRELATEACTIVITYTIME_OFFSET UNITYSDK_OFFSET(0x15E836F0)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x15E82C30)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_SETMISSIONTASKBTNSTATUS_OFFSET UNITYSDK_OFFSET(0x15E83410)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E839E0)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER__REFRESHRELATEACTIVITYTIME_B__9_0_OFFSET UNITYSDK_OFFSET(0x15E839F0)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E83A60)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15E83AF0)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E83B90)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E83C20)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E83CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityChainRowV2WidgetController_TypeDefinitionIndex = 51151;

	class UIActivityChainRowV2WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_29F68C41D871E38E* _view; // 0x2E8
		::Class_2_604149159BD159AA* _uiActivityModel; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::UIItemIconBtnSmallWidgetController* AddItemIconBtnSmallWidget(::Enum_3_81A3942BCC6E42B5 ctrl, ::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::UIItemIconBtnSmallWidgetController*(*)(::PVOID, ::Enum_3_81A3942BCC6E42B5, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ADDITEMICONBTNSMALLWIDGET_OFFSET))(this, ctrl, arg);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshRelateActivityTime(::Class_3_AE02BC8285203464_7* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_REFRESHRELATEACTIVITYTIME_OFFSET))(this, task);
		}

		::System::Void SetMissionTaskBtnStatus(::Class_1_1D6B384C0B7DC7C3* missionTask, ::MoleMole::UIGeneralButtonController* goBtn, ::UnityEngine::Transform* achieveBtn, ::UnityEngine::Transform* number)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1D6B384C0B7DC7C3*, ::MoleMole::UIGeneralButtonController*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER_SETMISSIONTASKBTNSTATUS_OFFSET))(this, missionTask, goBtn, achieveBtn, number);
		}

		::System::Void _RefreshRelateActivityTime_b__9_0(::UnityEngine::UI::Extension::UITimeWidget* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER__REFRESHRELATEACTIVITYTIME_B__9_0_OFFSET))(this, t);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
