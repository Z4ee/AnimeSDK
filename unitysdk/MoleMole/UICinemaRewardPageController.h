#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_4C09D2D53C293955;
class Class_1_8B57604365300A64;
class Class_1_E5C5FCDBF5C3BDAC;
class Class_2_79AE422BA06F6D26_223;
class Class_2_DB3DD38167790643;
namespace MoleMole { class UIActivityGotoMissionRowWidgetController; }
namespace MoleMole { class UICinemaRewardContext; }
namespace MoleMole { class UICinemaRewardLevelWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1803AE40)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCLICKTAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0x1803C560)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1803AE50)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSERVERDATACHANGED_OFFSET UNITYSDK_OFFSET(0x1803B930)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1803B6D0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1803B840)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1803AEE0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1803B660)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0x1803C6B0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHFETCHALLBTN_OFFSET UNITYSDK_OFFSET(0x1803B9E0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x1803B7E0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEFTEXPINFO_OFFSET UNITYSDK_OFFSET(0x1803BFC0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEVELINFO_OFFSET UNITYSDK_OFFSET(0x1803BC10)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHREWARDLIST_OFFSET UNITYSDK_OFFSET(0x1803BAE0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_SORTREWARD_OFFSET UNITYSDK_OFFSET(0x1803C790)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1803C8C0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1803C8D0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1803C960)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1803C970)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1803C980)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1803C990)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaRewardPageController_TypeDefinitionIndex = 66550;

	class UICinemaRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_223* _view; // 0x318
		::Class_1_E5C5FCDBF5C3BDAC* progressBarHandler; // 0x320
		::MoleMole::UICinemaRewardLevelWidgetController* levelWidgetController; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIActivityGotoMissionRowWidgetController*>* accessList; // 0x330
		::Class_1_4C09D2D53C293955* itemIconHandler; // 0x338
		::System::Collections::Generic::List_1<::Class_1_8B57604365300A64*>* rewardList; // 0x340
		::Class_2_DB3DD38167790643* model; // 0x348
		::MoleMole::UICinemaRewardContext* context; // 0x350
		::System::UInt32 nowShowLevel; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnServerDataChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSERVERDATACHANGED_OFFSET))(this);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void RefreshRewardList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHREWARDLIST_OFFSET))(this);
		}

		::System::Void RefreshLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEVELINFO_OFFSET))(this);
		}

		::System::Void RefreshLeftExpInfo(::System::Int32 showItemCount, ::System::Int32 nextNeedCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEFTEXPINFO_OFFSET))(this, showItemCount, nextNeedCount);
		}

		::System::Void RefreshFetchAllBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHFETCHALLBTN_OFFSET))(this);
		}

		::System::Void OnClickTakeAllReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCLICKTAKEALLREWARD_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Int32 SortReward(::Class_1_8B57604365300A64* rewardA, ::Class_1_8B57604365300A64* rewardB)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8B57604365300A64*, ::Class_1_8B57604365300A64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_SORTREWARD_OFFSET))(this, rewardA, rewardB);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
