#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1F0C3293D9525543;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovSeasonRankWidgetController_Context; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_GETMEDALINDEX_OFFSET UNITYSDK_OFFSET(0x10F14180)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10F13DC0)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10F13880)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10F13E50)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10F137B0)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10F13810)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x10F14090)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x10F13ED0)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_REFRESHRANKICON_1_OFFSET UNITYSDK_OFFSET(0x10F13A10)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_REFRESHRANKICON_OFFSET UNITYSDK_OFFSET(0x10F13CE0)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10F146A0)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER__ONSHOW_B__7_0_OFFSET UNITYSDK_OFFSET(0x10F14700)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10F148B0)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10F14940)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10F149E0)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10F14A70)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10F14B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonRankWidgetController_TypeDefinitionIndex = 47563;

	class UIZenkovSeasonRankWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1F0C3293D9525543* _view; // 0x2C0
		::MoleMole::UIZenkovSeasonRankWidgetController_Context* _context; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshRankIcon(::System::Int32 fromMedal, ::System::Int32 toMedal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_REFRESHRANKICON_OFFSET))(this, fromMedal, toMedal);
		}

		::System::Void PlayFadeOutAnimation(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET))(this, callback);
		}

		::System::Void PlayFadeInAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_PLAYFADEINANIMATION_OFFSET))(this);
		}

		::System::Void RefreshRankIcon_1(::System::Int32 medalID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_REFRESHRANKICON_1_OFFSET))(this, medalID);
		}

		::System::Int32 GetMedalIndex(::System::Int32 medalID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER_GETMEDALINDEX_OFFSET))(this, medalID);
		}

		::System::Void _OnShow_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER__ONSHOW_B__7_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
