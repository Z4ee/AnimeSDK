#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaBgRowWidget.h"

class Class_2_1824EF69C8E376A3;
class Class_2_426D34B41459A2E5;
class Class_3_AE02BC8285203464_17;
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaWidgetContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0x157A20A0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157A1F90)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTERANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x157A28A0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTEREXCHANGEANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x157A28E0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157A2020)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157A1A10)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157A1AF0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYENTERANIMATION_OFFSET UNITYSDK_OFFSET(0x157A2110)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x157A21E0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_REFRESHUPAVATARS_OFFSET UNITYSDK_OFFSET(0x157A2320)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x157A1BD0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x157A2920)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157A2A00)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157A2A90)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157A2B20)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157A2BB0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x157A2C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaAvatarBgRowWidgetController_TypeDefinitionIndex = 38210;

	class UIGachaAvatarBgRowWidgetController : public ::MoleMole::UIGachaBgRowWidget
	{
	public:
		::Class_2_426D34B41459A2E5* _view; // 0x2B8
		::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController* roleNameplate; // 0x2C0
		::MoleMole::UIGachaWidgetContextBase* _context; // 0x2C8
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* _upAvatars; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean IsPlayingAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET))(this);
		}

		::System::Void PlayEnterAnimation(::System::String* extensionName, ::System::Action* enterCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYENTERANIMATION_OFFSET))(this, extensionName, enterCallback);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshUpAvatars(::Class_3_AE02BC8285203464_17* gacha, ::System::Boolean rebuildAll)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_17*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_REFRESHUPAVATARS_OFFSET))(this, gacha, rebuildAll);
		}

		::System::Void OnEnterAnimationEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTERANIMATIONEND_OFFSET))(this);
		}

		::System::Void OnEnterExchangeAnimationEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTEREXCHANGEANIMATIONEND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}
	};
}
