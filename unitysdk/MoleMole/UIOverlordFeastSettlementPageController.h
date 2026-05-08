#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_B1555FA59A3F87CE;
class Class_2_E5647DC44B7DAB4A;
class Class_3_88D140F5E09465E1_4;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIOverlordFeastLevelWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_CREATEFUNC_OFFSET UNITYSDK_OFFSET(0x1611B200)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1611BBB0)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1611A490)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1611A4A0)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1611AF40)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1611B2C0)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1611A850)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1611A530)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1611B310)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1611BD20)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER__ONUIDESTROY_G__SHOULDOPENMAINPAGE_8_0_OFFSET UNITYSDK_OFFSET(0x1611AB70)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1611BD30)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1611BDC0)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1611BDD0)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1611BDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastSettlementPageController_TypeDefinitionIndex = 42123;

	class UIOverlordFeastSettlementPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_E5647DC44B7DAB4A* _view; // 0x310
		::Class_2_B1555FA59A3F87CE* _model; // 0x318
		::MoleMole::UIOverlordFeastLevelWidgetController* _levelIconWidget; // 0x320
		::System::Single prvProgress; // 0x328

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

		::MoleMole::ScrollViewItemWidgetController* CreateFunc(::Enum_3_81A3942BCC6E42B5 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_81A3942BCC6E42B5, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_CREATEFUNC_OFFSET))(this, arg1, arg2);
		}

		::System::Void OnOKBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void SetData(::Class_3_88D140F5E09465E1_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_88D140F5E09465E1_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER_SETDATA_OFFSET))(this, rsp);
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
