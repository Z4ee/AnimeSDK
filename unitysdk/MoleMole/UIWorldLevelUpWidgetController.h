#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E9BF1A81C797C171;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWorldLevelUpWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E3B9D0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x11E3BAE0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x11E3BBE0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E3BA60)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E3B0C0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E3B1D0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11E3B2C0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E3BC80)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__ONFADEPLAYFINISH_B__6_0_OFFSET UNITYSDK_OFFSET(0x11E3BCE0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__ONFADEPLAYFINISH_B__6_1_OFFSET UNITYSDK_OFFSET(0x11E3BD50)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__ONINTERRUPT_B__8_0_OFFSET UNITYSDK_OFFSET(0x11E3BD70)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E3BD90)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x11E3BE20)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E3BE30)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E3BEC0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E3BF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorldLevelUpWidgetController_TypeDefinitionIndex = 41568;

	class UIWorldLevelUpWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E9BF1A81C797C171* _view; // 0x2C0
		::MoleMole::UIWorldLevelUpWidgetController_Context* _context; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnInterrupt(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONINTERRUPT_OFFSET))(this, args);
		}

		::System::Void _OnFadePlayFinish_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__ONFADEPLAYFINISH_B__6_0_OFFSET))(this);
		}

		::System::Void _OnFadePlayFinish_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__ONFADEPLAYFINISH_B__6_1_OFFSET))(this);
		}

		::System::Void _OnInterrupt_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__ONINTERRUPT_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
