#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_4C09D2D53C293955;
class Class_1_9532C712260DD3D3;
class Class_1_E5C5FCDBF5C3BDAC;
class Class_2_680CA39CC66C138B;
class Class_2_D8C4E8DC8CCE7C83;
namespace MoleMole { class UIActivityGotoMissionRowWidgetController; }
namespace MoleMole { class UICinemaRewardLevelWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_GETLEVELASSETPATH_OFFSET UNITYSDK_OFFSET(0x15AA4D10)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15AA4260)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONANTIQUELEVELCHANGE_OFFSET UNITYSDK_OFFSET(0x15AA5D50)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKCOLLECTTASK_OFFSET UNITYSDK_OFFSET(0x15AA5AC0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKCOLLECT_OFFSET UNITYSDK_OFFSET(0x15AA5B60)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x15AA5A80)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKSIDETASK_OFFSET UNITYSDK_OFFSET(0x15AA5C00)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKTAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0x15AA5CA0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15AA4270)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONEXPCHANGE_OFFSET UNITYSDK_OFFSET(0x15AA5D00)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONPERMANENTREWARDUPDATE_OFFSET UNITYSDK_OFFSET(0x15AA5DA0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15AA4C50)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15AA4CA0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15AA4930)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15AA4AF0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHEXP_OFFSET UNITYSDK_OFFSET(0x15AA55A0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHGETALL_OFFSET UNITYSDK_OFFSET(0x15AA4F90)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHGOTOBTN_OFFSET UNITYSDK_OFFSET(0x15AA5780)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x15AA4BF0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHLEFTINFO_OFFSET UNITYSDK_OFFSET(0x15AA4E00)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHREWARDLIST_OFFSET UNITYSDK_OFFSET(0x15AA5020)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_SORTREWARD_OFFSET UNITYSDK_OFFSET(0x15AA59F0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA5E00)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15AA5E90)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15AA5F20)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15AA5F30)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15AA5F40)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15AA5F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueRewardPagePageController_TypeDefinitionIndex = 80714;

	class UIAntiqueRewardPagePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_D8C4E8DC8CCE7C83* _view; // 0x310
		::Class_1_E5C5FCDBF5C3BDAC* _progressBarHandler; // 0x318
		::MoleMole::UICinemaRewardLevelWidgetController* _levelWidgetController; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIActivityGotoMissionRowWidgetController*>* _accessList; // 0x328
		::Class_1_4C09D2D53C293955* _itemIconHandler; // 0x330
		::System::Collections::Generic::List_1<::Class_1_9532C712260DD3D3*>* _rewardList; // 0x338
		::Class_2_680CA39CC66C138B* _model; // 0x340
		::System::Int32 _nowShowLevel; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Foundation::AssetPath GetLevelAssetPath(::System::Int32 num, ::System::Boolean isGold)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_GETLEVELASSETPATH_OFFSET))(this, num, isGold);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void RefreshLeftInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHLEFTINFO_OFFSET))(this);
		}

		::System::Void RefreshExp(::System::Boolean isMaxLevel, ::System::Int32 showItemCount, ::System::Int32 nextNeedCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHEXP_OFFSET))(this, isMaxLevel, showItemCount, nextNeedCount);
		}

		::System::Void RefreshGotoBtn(::System::Boolean isMaxLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHGOTOBTN_OFFSET))(this, isMaxLevel);
		}

		::System::Void RefreshGetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHGETALL_OFFSET))(this);
		}

		::System::Void RefreshRewardList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_REFRESHREWARDLIST_OFFSET))(this);
		}

		::System::Int32 SortReward(::Class_1_9532C712260DD3D3* rewardA, ::Class_1_9532C712260DD3D3* rewardB)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_9532C712260DD3D3*, ::Class_1_9532C712260DD3D3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_SORTREWARD_OFFSET))(this, rewardA, rewardB);
		}

		::System::Void OnClickInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKINFO_OFFSET))(this);
		}

		::System::Void OnClickCollectTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKCOLLECTTASK_OFFSET))(this);
		}

		::System::Void OnClickCollect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKCOLLECT_OFFSET))(this);
		}

		::System::Void OnClickSideTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKSIDETASK_OFFSET))(this);
		}

		::System::Void OnClickTakeAllReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONCLICKTAKEALLREWARD_OFFSET))(this);
		}

		::System::Void OnExpChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONEXPCHANGE_OFFSET))(this, obj);
		}

		::System::Void OnAntiqueLevelChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONANTIQUELEVELCHANGE_OFFSET))(this, obj);
		}

		::System::Void OnPermanentRewardUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER_ONPERMANENTREWARDUPDATE_OFFSET))(this, obj);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
