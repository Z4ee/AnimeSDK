#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7EA7D57439149524;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_GETMEDALINDEX_OFFSET UNITYSDK_OFFSET(0x15B0E680)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15B0EBA0)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15B0E2A0)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15B0EC30)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B0E0D0)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15B0E230)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_REFRESHFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x15B0E390)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0ECB0)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x15B0ED10)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15B0ED40)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15B0EDD0)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15B0EE70)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B0EF00)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15B0EF90)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMedalWidgetController_TypeDefinitionIndex = 70860;

	class UIZenkovMedalWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7EA7D57439149524* _view; // 0x2C0
		::System::Action* CloseCallback; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshFadeInAnimation(::System::Int32 FromMedal, ::System::Int32 ToMedal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_REFRESHFADEINANIMATION_OFFSET))(this, FromMedal, ToMedal);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 GetMedalIndex(::System::Int32 medalID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_GETMEDALINDEX_OFFSET))(this, medalID);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
