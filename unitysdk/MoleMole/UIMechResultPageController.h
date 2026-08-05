#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController_RankDataItem.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_EMPTYROWDATA_OFFSET UNITYSDK_OFFSET(0x18334CF0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x18334B70)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x18334D80)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18334AD0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x183351A0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER_ROWDATA_OFFSET UNITYSDK_OFFSET(0x18334BE0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18335DE0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x18335DF0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x18335E20)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18335EB0)
#define MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x18335EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechResultPageController_TypeDefinitionIndex = 41196;

	class UIMechResultPageController : public ::MoleMole::UIHollowLayerResultPageV2PopWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET))(this);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData RowData(::System::String* key, ::System::String* value)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_ROWDATA_OFFSET))(key, value);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData EmptyRowData()
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_EMPTYROWDATA_OFFSET))();
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> __base_GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* __base_GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET))(this);
		}
	};
}
