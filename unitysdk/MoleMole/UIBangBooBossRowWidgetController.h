#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_468A4FBF2E9F527C;
class Class_2_EC707217DE7794EF_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_Common_HadalRoom_CardContext; }
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175FA8E0)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x175FA440)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175FA970)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175FA020)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175FA080)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x175FA1E0)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_SETCLICK_OFFSET UNITYSDK_OFFSET(0x175FA600)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175FA9F0)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x175FAA20)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER__ONUIOPEN_B__5_0_OFFSET UNITYSDK_OFFSET(0x175FAA00)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER__UPDATECARD_OFFSET UNITYSDK_OFFSET(0x175FA650)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175FAA40)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x175FAAD0)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175FAB70)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175FAC00)
#define MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175FAC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooBossRowWidgetController_TypeDefinitionIndex = 73746;

	class UIBangBooBossRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_EC707217DE7794EF_7* _view; // 0x2F0
		::MoleMole::UIHadalZone_Common_HadalRoom_CardContext* _cardContext; // 0x2F8
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x300
		::System::Action* callback; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshByContext(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetClick(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER_SETCLICK_OFFSET))(this, callback);
		}

		::System::Void _UpdateCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER__UPDATECARD_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER__ONUIOPEN_B__5_0_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__6_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOBOSSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
