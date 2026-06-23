#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaBgRowWidget.h"

class Class_2_1824EF69C8E376A3;
class Class_2_426D34B41459A2E5;
class Class_3_4666E61F66433B1E_2;
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaWidgetContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0x1771AEC0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1771ADB0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTERANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x1771B6C0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTEREXCHANGEANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x1771B700)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1771AE40)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1771A830)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1771A910)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYENTERANIMATION_OFFSET UNITYSDK_OFFSET(0x1771AF30)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1771B000)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_REFRESHUPAVATARS_OFFSET UNITYSDK_OFFSET(0x1771B140)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1771A9F0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1771B740)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1771B820)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1771B8B0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1771B940)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1771B9D0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1771BA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaAvatarBgRowWidgetController_TypeDefinitionIndex = 48540;

	class UIGachaAvatarBgRowWidgetController : public ::MoleMole::UIGachaBgRowWidget
	{
	public:
		::Class_2_426D34B41459A2E5* _view; // 0x2C0
		::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController* roleNameplate; // 0x2C8
		::MoleMole::UIGachaWidgetContextBase* _context; // 0x2D0
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* _upAvatars; // 0x2D8

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

		::System::Void RefreshUpAvatars(::Class_3_4666E61F66433B1E_2* gacha, ::System::Boolean rebuildAll)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_REFRESHUPAVATARS_OFFSET))(this, gacha, rebuildAll);
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
