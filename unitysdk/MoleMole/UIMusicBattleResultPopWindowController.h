#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController_RankDataItem.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowHollowLayerResultDialogContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_EMPTYROWDATA_OFFSET UNITYSDK_OFFSET(0x16732B90)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x16732CE0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x167324F0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x16732FB0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16732300)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_ROWDATA_OFFSET UNITYSDK_OFFSET(0x16732C20)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16733510)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x16733520)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x16733550)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_INITVIEW_OFFSET UNITYSDK_OFFSET(0x167335E0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167335F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleResultPopWindowController_TypeDefinitionIndex = 55620;

	class UIMusicBattleResultPopWindowController : public ::MoleMole::UIHollowLayerResultPageV2PopWindowController
	{
	public:
		::MoleMole::UIHollowHollowLayerResultDialogContext* context; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_GETMISSIONLIST_OFFSET))(this);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData RowData(::System::String* textkey, ::System::String* value)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_ROWDATA_OFFSET))(textkey, value);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData EmptyRowData()
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_EMPTYROWDATA_OFFSET))();
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> __base_GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* __base_GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void __base_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_INITVIEW_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
