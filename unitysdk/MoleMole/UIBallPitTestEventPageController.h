#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_F12FFFAB073B29DC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19A78CE0)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_INITEVENTTYPETEXT_OFFSET UNITYSDK_OFFSET(0x19A78E50)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A78CF0)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19A78D80)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A79040)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A78E90)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A790B0)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x19A790C0)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__ONUIINIT_B__8_1_OFFSET UNITYSDK_OFFSET(0x19A790D0)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__ONUIINIT_B__8_2_OFFSET UNITYSDK_OFFSET(0x19A790E0)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__ONUIINIT_B__8_3_OFFSET UNITYSDK_OFFSET(0x19A790F0)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A79100)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19A79190)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A791A0)
#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A791B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallPitTestEventPageController_TypeDefinitionIndex = 49779;

	class UIBallPitTestEventPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_F12FFFAB073B29DC* _view; // 0x318
		::UnityEngine::UI::Extension::UIButtonEx* btn; // 0x320
		::System::Action_1<::System::Int32>* OnSelectItem; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitEventTypeText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_INITEVENTTYPETEXT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__ONUIINIT_B__8_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__ONUIINIT_B__8_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__ONUIINIT_B__8_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER__ONUIINIT_B__8_3_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
