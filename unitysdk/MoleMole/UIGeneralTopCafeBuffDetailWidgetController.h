#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_6535CE33BDD95E74;
class Class_2_DFD420F391BEB45E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19602950)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196029E0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19602780)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196028E0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_OPENBUFFDETAILS_OFFSET UNITYSDK_OFFSET(0x19603920)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHBUFFEXTRADESC_OFFSET UNITYSDK_OFFSET(0x19603830)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19602A60)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19603AF0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19603B50)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19603BE0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19603C70)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19603D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTopCafeBuffDetailWidgetController_TypeDefinitionIndex = 61919;

	class UIGeneralTopCafeBuffDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DFD420F391BEB45E* _view; // 0x2C0
		::Enum_3_A3F38457E644339A _rewardBuffGameTag; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_6535CE33BDD95E74*>* _rewardBuffs; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Enum_3_A3F38457E644339A rewardBuffGameTag, ::System::Collections::Generic::List_1<::Class_1_6535CE33BDD95E74*>* rewardBuffs)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A3F38457E644339A, ::System::Collections::Generic::List_1<::Class_1_6535CE33BDD95E74*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, rewardBuffGameTag, rewardBuffs);
		}

		::System::Void RefreshBuffExtraDesc(::System::Boolean show, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHBUFFEXTRADESC_OFFSET))(this, show, text);
		}

		::System::Void OpenBuffDetails()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_OPENBUFFDETAILS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
