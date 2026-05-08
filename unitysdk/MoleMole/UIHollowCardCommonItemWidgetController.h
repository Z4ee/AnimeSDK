#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_E053999CF96A442A;
class Class_2_208CC9941471731A_131;
class Class_2_79AE422BA06F6D26_201;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1637B160)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1637B1F0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1637B090)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1637B0F0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x1637B940)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1637B270)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1637BD90)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1637BDF0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1637BE80)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1637BF10)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1637BFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardCommonItemWidgetController_TypeDefinitionIndex = 63519;

	class UIHollowCardCommonItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_201* _view; // 0x2B8
		::MoleMole::UIHollowCardOptionsDialogContext* context; // 0x2C0
		::System::Action* onOk; // 0x2C8
		::System::Action* onGiveUp; // 0x2D0
		::Class_1_E053999CF96A442A* currentChoice; // 0x2D8

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

		::System::Void RefreshDetail(::MoleMole::UIHollowCardOptionsDialogContext* context, ::Class_2_208CC9941471731A_131* template_)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsDialogContext*, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_REFRESHDETAIL_OFFSET))(this, context, template_);
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
