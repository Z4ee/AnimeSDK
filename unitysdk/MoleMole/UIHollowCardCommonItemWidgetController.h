#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_E053999CF96A442A;
class Class_2_208CC9941471731A_477;
class Class_2_79AE422BA06F6D26_138;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190E76A0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190E7730)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190E75D0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190E7630)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x190E7E50)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x190E77B0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190E82B0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190E8310)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190E83A0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190E8430)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190E84C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardCommonItemWidgetController_TypeDefinitionIndex = 53890;

	class UIHollowCardCommonItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_138* _view; // 0x2C0
		::MoleMole::UIHollowCardOptionsDialogContext* context; // 0x2C8
		::System::Action* onOk; // 0x2D0
		::System::Action* onGiveUp; // 0x2D8
		::Class_1_E053999CF96A442A* currentChoice; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIHollowCardOptionsDialogContext* context, ::Class_1_E053999CF96A442A* choice, ::System::Action* onOk, ::System::Action* onGiveUp)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsDialogContext*, ::Class_1_E053999CF96A442A*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context, choice, onOk, onGiveUp);
		}

		::System::Void RefreshDetail(::MoleMole::UIHollowCardOptionsDialogContext* context, ::Class_2_208CC9941471731A_477* template_)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsDialogContext*, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_REFRESHDETAIL_OFFSET))(this, context, template_);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
