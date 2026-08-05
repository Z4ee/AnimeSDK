#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0F98EC09A480D0AE;
class Class_2_79AE422BA06F6D26_154;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONBANGBOOUAVCLICKCARD_OFFSET UNITYSDK_OFFSET(0x1956E890)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1956E040)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1956E0D0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1956D8A0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1956D9D0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0x1956E150)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1956E5D0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHCARDINFO_OFFSET UNITYSDK_OFFSET(0x1956E220)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1956DBF0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1956E900)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1956E960)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1956E9E0)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1956EA70)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1956EB00)
#define MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1956EB90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUAVCardCollectWidgetController_TypeDefinitionIndex = 56135;

	class UIBangbooUAVCardCollectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_154* _view; // 0x2C0
		::System::Int32 itemid; // 0x2C8
		::System::Boolean isBrief; // 0x2CC
		::Class_2_0F98EC09A480D0AE* dreamModel; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnBangBooUAVClickCard(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_ONBANGBOOUAVCLICKCARD_OFFSET))(this, args);
		}

		::System::Void RefreshCardInfo(::System::Int32 itemid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHCARDINFO_OFFSET))(this, itemid);
		}

		::System::Void RefreshCardCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER_REFRESHCARDCOUNT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__1_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, reference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
