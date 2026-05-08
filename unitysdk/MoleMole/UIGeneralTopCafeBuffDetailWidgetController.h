#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_6535CE33BDD95E74;
class Class_2_C4034DE00200CC5D_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F93E70)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F93F00)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F93CA0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F93E00)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_OPENBUFFDETAILS_OFFSET UNITYSDK_OFFSET(0x15F94D50)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHBUFFEXTRADESC_OFFSET UNITYSDK_OFFSET(0x15F94BF0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15F93F80)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F94ED0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F94F30)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F94FC0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F95050)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F950E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTopCafeBuffDetailWidgetController_TypeDefinitionIndex = 62966;

	class UIGeneralTopCafeBuffDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C4034DE00200CC5D_1* _view; // 0x2B8
		::Enum_3_A3F38457E644339A _rewardBuffGameTag; // 0x2C0
		::System::Collections::Generic::List_1<::Class_1_6535CE33BDD95E74*>* _rewardBuffs; // 0x2C8

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
