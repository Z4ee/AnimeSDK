#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_15B5E2EA11C53410_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1985C7D0)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1985C830)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1985D4C0)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONSETLANGUAGEVOICE_OFFSET UNITYSDK_OFFSET(0x1985D6D0)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1985D550)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1985C7E0)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1985D5C0)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1985D680)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1985D950)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x1985D9E0)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1985DA80)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1985DB10)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1985DB20)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1985DB30)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginLanguageSetPopWindowController_TypeDefinitionIndex = 53231;

	class UILoginLanguageSetPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_15B5E2EA11C53410_1* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _settingWidgetRowList; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnSetLanguageVoice(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER_ONSETLANGUAGEVOICE_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__7_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER__ONUIOPEN_B__7_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
