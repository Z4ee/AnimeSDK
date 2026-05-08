#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_678;
class Class_2_7EE413D34B698ECF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralChapterFinishWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15901C40)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x15901D50)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x15901E50)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15901CD0)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x159018B0)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x159019B0)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15901B70)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15901EF0)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER__ONFADEPLAYFINISH_B__6_0_OFFSET UNITYSDK_OFFSET(0x15901F50)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER__ONFADEPLAYFINISH_B__6_1_OFFSET UNITYSDK_OFFSET(0x15901FB0)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER__ONINTERRUPT_B__8_0_OFFSET UNITYSDK_OFFSET(0x15901FD0)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15901FF0)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x15902080)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15902090)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15902120)
#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x159021B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralChapterFinishWidgetController_TypeDefinitionIndex = 74177;

	class UIGeneralChapterFinishWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7EE413D34B698ECF* _view; // 0x2B8
		::Class_2_208CC9941471731A_678* _template; // 0x2C0
		::MoleMole::UIGeneralChapterFinishWidgetController_Context* _context; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnInterrupt(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_ONINTERRUPT_OFFSET))(this, args);
		}

		::System::Void _OnFadePlayFinish_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER__ONFADEPLAYFINISH_B__6_0_OFFSET))(this);
		}

		::System::Void _OnFadePlayFinish_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER__ONFADEPLAYFINISH_B__6_1_OFFSET))(this);
		}

		::System::Void _OnInterrupt_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER__ONINTERRUPT_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
