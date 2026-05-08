#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317.h"
#include "unitysdk/MoleMole/UIVirusCollectWidgetController_CollectTabType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7B15B3118FE590CD_11;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVirusSelectRowWidgetController_Data; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x155373A0)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15536A80)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x15537ED0)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15536D80)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15536D00)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHBG_OFFSET UNITYSDK_OFFSET(0x15536F30)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHDATAINFOLIST_OFFSET UNITYSDK_OFFSET(0x15539920)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHDATALOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x15539000)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x15538640)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x155373F0)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0x15536FC0)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHVIRUSINFOLIST_OFFSET UNITYSDK_OFFSET(0x15538C10)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHVIRUS_OFFSET UNITYSDK_OFFSET(0x15538070)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x15536ED0)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15539A90)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15539B70)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15539C00)
#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15539CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusCollectWidgetController_TypeDefinitionIndex = 63557;

	class UIVirusCollectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7B15B3118FE590CD_11* _view; // 0x2B8
		::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 _levelType; // 0x2C0
		::System::Int32 _selectID; // 0x2C4
		::MoleMole::UIVirusCollectWidgetController_CollectTabType _tabType; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIVirusSelectRowWidgetController_Data*>* _dataList; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshWidget(::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, levelType);
		}

		::System::Void RefreshBg(::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317 levelType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8019553DE28C70A1_Enum_3_D1D49B5EF8F4C317))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHBG_OFFSET))(this, levelType);
		}

		::System::Void OnClickTab(::System::Int32 tabType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONCLICKTAB_OFFSET))(this, tabType);
		}

		::System::Void RefreshTab(::MoleMole::UIVirusCollectWidgetController_CollectTabType tabType, ::System::Int32 selectID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirusCollectWidgetController_CollectTabType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHTAB_OFFSET))(this, tabType, selectID);
		}

		::System::Void RefreshList(::MoleMole::UIVirusCollectWidgetController_CollectTabType tabType, ::System::Int32 selectID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVirusCollectWidgetController_CollectTabType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHLIST_OFFSET))(this, tabType, selectID);
		}

		::System::Void OnSelectItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_ONSELECTITEM_OFFSET))(this, index);
		}

		::System::Void RefreshVirus(::System::Int32 virusID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHVIRUS_OFFSET))(this, virusID);
		}

		::System::Void RefreshVirusInfoList(::System::Int32 virusID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHVIRUSINFOLIST_OFFSET))(this, virusID);
		}

		::System::Void RefreshData(::System::Int32 dataID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHDATA_OFFSET))(this, dataID);
		}

		::System::Void RefreshDataLockProgress(::System::Int32 dataID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHDATALOCKPROGRESS_OFFSET))(this, dataID);
		}

		::System::Void RefreshDataInfoList(::System::Int32 dataID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_REFRESHDATAINFOLIST_OFFSET))(this, dataID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
