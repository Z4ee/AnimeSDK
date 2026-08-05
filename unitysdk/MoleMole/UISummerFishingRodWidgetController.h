#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5710F441153D033C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1889CDD0)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1889CE40)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1889D130)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1889CFF0)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1889CF00)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1889D300)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1889D400)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1889D260)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1889D440)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1889D4A0)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1889D540)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1889D5D0)
#define MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1889D670)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishingRodWidgetController_TypeDefinitionIndex = 48777;

	class UISummerFishingRodWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5710F441153D033C* get__viewModel()
		{
			return ((::Class_2_5710F441153D033C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void PlayFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGRODWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
