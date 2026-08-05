#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_87;
class Class_2_D4013B1655644290;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D36AF0)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D36B80)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x17D370F0)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D37180)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D36920)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D36A80)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D37200)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D37210)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D372A0)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D37340)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D373D0)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D37460)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickSetButtonWidgetChildWindowController_TypeDefinitionIndex = 69561;

	class UIQuickSetButtonWidgetChildWindowController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_D4013B1655644290* _view; // 0x2F0
		::System::Action_2<::System::Int32, ::Class_2_208CC9941471731A_87*>* clickHandle; // 0x2F8
		::Class_2_208CC9941471731A_87* unlockCfg; // 0x300
		::System::Int32 index; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnSkinBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
