#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_923;
class Class_2_74BE238239689640;
class Class_2_9D9172C07F82DDAE;
class Class_2_C1865A61828EE67A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRamenCurrentBuffChildWindowController; }
namespace MoleMole { class UIRamenStoreWidgetController_Context; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_BACKTOMAIN_OFFSET UNITYSDK_OFFSET(0x167543B0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_CLICKPAY_OFFSET UNITYSDK_OFFSET(0x167552A0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_DOEAT_OFFSET UNITYSDK_OFFSET(0x167557A0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x167533E0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x167535A0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167538C0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONEATRAMEN_OFFSET UNITYSDK_OFFSET(0x167558F0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16753D50)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x16753E30)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONRAMENDATACHANGED_OFFSET UNITYSDK_OFFSET(0x16754360)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONSHOWGETRAMENFINISHED_OFFSET UNITYSDK_OFFSET(0x16754E00)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONTIMELINEPERFORMSTART_OFFSET UNITYSDK_OFFSET(0x167548D0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167533F0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16753950)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_POPGOTRAMEN_OFFSET UNITYSDK_OFFSET(0x167544D0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_REFRESHSELECTVIEW_OFFSET UNITYSDK_OFFSET(0x16753F00)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16753C40)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_SELECTRAMEN_OFFSET UNITYSDK_OFFSET(0x16755210)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_SHOWGETRAMENTIP_OFFSET UNITYSDK_OFFSET(0x16754F90)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_STARTSHOWGETRAMENCUTSCENE_OFFSET UNITYSDK_OFFSET(0x16754670)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16755A00)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16755990)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__POPGOTRAMEN_B__12_0_OFFSET UNITYSDK_OFFSET(0x16755A10)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__POPGOTRAMEN_B__12_1_OFFSET UNITYSDK_OFFSET(0x16755A80)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__SHOWGETRAMENTIP_B__16_0_OFFSET UNITYSDK_OFFSET(0x16755CB0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16755D50)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16755DE0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16755E10)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16755E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreWidgetController_TypeDefinitionIndex = 85134;

	class UIRamenStoreWidgetController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Single* StaticGet_S_BLACK_TIME()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreWidgetController_TypeDefinitionIndex)->GetStaticField(0x12E20);
		}
		::System::Boolean _isInRamenPerform; // 0x318
		::Class_2_74BE238239689640* _view; // 0x320
		::Class_2_C1865A61828EE67A* _ramenModel; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* _ramenIDs; // 0x330
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x338
		::System::Int32 _selectedRamenId; // 0x340
		::Class_2_208CC9941471731A_923* _ramenTemplate; // 0x348
		::MoleMole::UIRamenCurrentBuffChildWindowController* _childCtrl; // 0x350
		::MoleMole::UIRamenStoreWidgetController_Context* _context; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnItemChanged(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, eventArgs);
		}

		::System::Void OnRamenDataChanged(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONRAMENDATACHANGED_OFFSET))(this, eventArgs);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void BackToMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_BACKTOMAIN_OFFSET))(this);
		}

		::System::Void PopGotRamen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_POPGOTRAMEN_OFFSET))(this);
		}

		::System::Void StartShowGetRamenCutScene(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_STARTSHOWGETRAMENCUTSCENE_OFFSET))(this, id);
		}

		::System::Void OnTimelinePerformStart(::UnityEngine::Transform* trans, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONTIMELINEPERFORMSTART_OFFSET))(this, trans, id);
		}

		::System::Void OnShowGetRamenFinished(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONSHOWGETRAMENFINISHED_OFFSET))(this, id);
		}

		::System::Void ShowGetRamenTip(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_SHOWGETRAMENTIP_OFFSET))(this, id);
		}

		::System::Void RefreshView(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isInit);
		}

		::System::Void RefreshSelectView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_REFRESHSELECTVIEW_OFFSET))(this);
		}

		::System::Void SelectRamen(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_SELECTRAMEN_OFFSET))(this, idx);
		}

		::System::Void ClickPay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_CLICKPAY_OFFSET))(this);
		}

		::System::Void DoEat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_DOEAT_OFFSET))(this);
		}

		::System::Void OnEatRamen(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_ONEATRAMEN_OFFSET))(this, args);
		}

		::System::Void _PopGotRamen_b__12_0(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__POPGOTRAMEN_B__12_0_OFFSET))(this, _);
		}

		::System::Void _PopGotRamen_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__POPGOTRAMEN_B__12_1_OFFSET))(this);
		}

		::System::Void _ShowGetRamenTip_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER__SHOWGETRAMENTIP_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
