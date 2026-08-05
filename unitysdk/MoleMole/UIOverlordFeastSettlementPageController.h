#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_B1555FA59A3F87CE;
class Class_2_E5647DC44B7DAB4A;
class Class_3_3991DF63D5D8AE7B_1;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIOverlordFeastLevelWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_CREATEFUNC_OFFSET UNITYSDK_OFFSET(0x18442450)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x18442F20)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18441680)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18441690)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x18442190)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x18442510)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18441A40)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18441720)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x18442560)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18443090)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER__ONUIDESTROY_G__SHOULDOPENMAINPAGE_8_0_OFFSET UNITYSDK_OFFSET(0x18441DC0)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184430A0)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x18443130)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18443140)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18443150)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastSettlementPageController_TypeDefinitionIndex = 70331;

	class UIOverlordFeastSettlementPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_E5647DC44B7DAB4A* _view; // 0x318
		::Class_2_B1555FA59A3F87CE* _model; // 0x320
		::MoleMole::UIOverlordFeastLevelWidgetController* _levelIconWidget; // 0x328
		::System::Single prvProgress; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateFunc(::Enum_3_DBF2701137F18AA6 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_CREATEFUNC_OFFSET))(this, arg1, arg2);
		}

		::System::Void OnOKBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void SetData(::Class_3_3991DF63D5D8AE7B_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_3991DF63D5D8AE7B_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_SETDATA_OFFSET))(this, rsp);
		}

		::System::Single GetProgress(::System::Int32 level, ::System::Int32 sales)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_GETPROGRESS_OFFSET))(this, level, sales);
		}

		::System::Boolean _OnUIDestroy_g__ShouldOpenMainPage_8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER__ONUIDESTROY_G__SHOULDOPENMAINPAGE_8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
