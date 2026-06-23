#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAbyssMapIconBaseController.h"
#include "unitysdk/MoleMole/UIAbyssMapIconBaseController_Style.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_6D7C85C80B72DE4B_1;
namespace MoleMole { class MonoUIStyleColorConfig; }
namespace MoleMole { class UIAbyssMapIconWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_INITSTYLEINFO_OFFSET UNITYSDK_OFFSET(0x15E39640)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E39820)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E398B0)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E395D0)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E397B0)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_SETAFFIXICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x15E39980)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_SETICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x15E39930)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_SETMUTEICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x15E39A90)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x15E3A0D0)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3A460)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E3A540)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E3A5D0)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E3A660)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E3A6F0)
#define MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_SETMUTEICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x15E3A780)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssMapMergeIconWidgetController_TypeDefinitionIndex = 50129;

	class UIAbyssMapMergeIconWidgetController : public ::MoleMole::UIAbyssMapIconBaseController
	{
	public:
		::Class_2_6D7C85C80B72DE4B_1* _view; // 0x2C8
		::MoleMole::MonoUIStyleColorConfig* _cacheColorConfig; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssMapIconWidgetController*>* _cacheCtrls; // 0x2D8
		::System::Boolean isMoreTwo; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitStyleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_INITSTYLEINFO_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetIconInternal(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_SETICONINTERNAL_OFFSET))(this, iconPath);
		}

		::System::Void SetAffixIconInternal(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_SETAFFIXICONINTERNAL_OFFSET))(this, iconPath);
		}

		::System::Void SetMuteIconInternal(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::Color>>* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::Color>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_SETMUTEICONINTERNAL_OFFSET))(this, iconPath);
		}

		::System::Void SwitchStyleInternal(::MoleMole::UIAbyssMapIconBaseController_Style style, ::UnityEngine::Color baseColor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssMapIconBaseController_Style, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_OFFSET))(this, style, baseColor);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetMuteIconInternal(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::Color>>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::Color>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPMERGEICONWIDGETCONTROLLER___BASE_SETMUTEICONINTERNAL_OFFSET))(this, P0);
		}
	};
}
