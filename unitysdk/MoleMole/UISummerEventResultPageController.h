#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController_RankDataItem.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class SummerEventResultContextV2; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x10D49DA0)
#define MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x10D49E20)
#define MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10D49BA0)
#define MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D49E80)
#define MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER__ONUIOPEN_B__1_0_OFFSET UNITYSDK_OFFSET(0x10D49E90)
#define MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x10D49EC0)
#define MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x10D49EF0)
#define MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10D49F80)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventResultPageController_TypeDefinitionIndex = 66989;

	class UISummerEventResultPageController : public ::MoleMole::UIHollowLayerResultPageV2PopWindowController
	{
	public:
		::MoleMole::SummerEventResultContextV2* _context; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER__ONUIOPEN_B__1_0_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> __base_GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* __base_GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
