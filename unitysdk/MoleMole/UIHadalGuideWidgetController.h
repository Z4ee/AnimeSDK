#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_12BBA24BA7419E86;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalTabRowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16700340)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x167001A0)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167003D0)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16700000)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16700130)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_SETHADALGUIDEWIDGET_OFFSET UNITYSDK_OFFSET(0x16700450)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167006F0)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16700750)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x167007E0)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16700880)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16700910)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167009A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalGuideWidgetController_TypeDefinitionIndex = 58901;

	class UIHadalGuideWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_12BBA24BA7419E86* _view; // 0x2C0
		::MoleMole::UIHadalTabRowWidgetController* HadalTabRow; // 0x2C8
		::MoleMole::UIHadalTabRowWidgetController* MemoryBattleTabRow; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetHadalGuideWidget(::System::Action_1<::Class_1_D375C91CCE5D3999*>* clickAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_D375C91CCE5D3999*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_SETHADALGUIDEWIDGET_OFFSET))(this, clickAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
