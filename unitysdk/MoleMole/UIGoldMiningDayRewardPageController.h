#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_C50659C1F7858B0C;
class Class_2_D9B86F043E0024E5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGoldMiningDayStateRewardEffectItemWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x169CF8B0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONALLRECEIVEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x169D0050)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169CF8C0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONGOLDMININGDAYSTATEREWARDGET_OFFSET UNITYSDK_OFFSET(0x169D02E0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x169CFCB0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169CFFE0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169CF950)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_UPDATEBTN_OFFSET UNITYSDK_OFFSET(0x169CFEB0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x169D0430)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169D0440)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x169D04D0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169D04E0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169D04F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayRewardPageController_TypeDefinitionIndex = 77015;

	class UIGoldMiningDayRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_D9B86F043E0024E5* _view; // 0x318
		::Class_1_C50659C1F7858B0C* data; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIGoldMiningDayStateRewardEffectItemWidgetController*>* effectList; // 0x328
		::MoleMole::UIGeneralButtonController* effectGetBtn; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_UPDATEBTN_OFFSET))(this);
		}

		::System::Void OnAllReceiveBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONALLRECEIVEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnGoldMiningDayStateRewardGet(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONGOLDMININGDAYSTATEREWARDGET_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
