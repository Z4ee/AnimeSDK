#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBangBooUAVCardItemCollectPageController_BangbooTabType.h"
#include "unitysdk/MoleMole/UIBangBooUAVCardItemCollectPageController_TabData.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_0F98EC09A480D0AE;
class Class_2_79AE422BA06F6D26_119;
namespace MoleMole { class UIBangbooUAVCardCollectWidgetController; }
namespace MoleMole { class UIBangbooUAVWeaponCollectWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A200B60)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_INITREWARDBTN_OFFSET UNITYSDK_OFFSET(0x187C2C50)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0x187C2F30)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A200B70)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONTABSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x187C3320)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187C2EA0)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A200C00)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0x187C2B80)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187C3430)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187C34A0)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187C3530)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187C3540)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVCardItemCollectPageController_TypeDefinitionIndex = 56680;

	class UIBangBooUAVCardItemCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_119* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIBangBooUAVCardItemCollectPageController_TabData>* typeTabs; // 0x320
		::Class_2_0F98EC09A480D0AE* dreamModel; // 0x328
		::MoleMole::UIBangbooUAVWeaponCollectWidgetController* weaponWidget; // 0x330
		::MoleMole::UIBangbooUAVCardCollectWidgetController* cardWidget; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Void InitRewardBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_INITREWARDBTN_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_INITTAB_OFFSET))(this);
		}

		::System::Void OnTabSelectHandle(::MoleMole::UIBangBooUAVCardItemCollectPageController_BangbooTabType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangBooUAVCardItemCollectPageController_BangbooTabType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER_ONTABSELECTHANDLE_OFFSET))(this, type);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
