#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoLevelResultPageConfig_DelayType.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController_RankDataItem.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_5_F7314AB7E8654428;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralExpProgressWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_2_8A1D7F4031E20BB3;

#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_EXPLEVELMAP_OFFSET UNITYSDK_OFFSET(0x15A708E0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GAINEXP_OFFSET UNITYSDK_OFFSET(0x15A70CE0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x15A6F810)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x15A6F790)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x15A6FA40)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONFADEINANIMEVENT_1_OFFSET UNITYSDK_OFFSET(0x15A71140)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONFADEINANIMEVENT_OFFSET UNITYSDK_OFFSET(0x15A71090)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A6EED0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_OPENEXPWIDGET_OFFSET UNITYSDK_OFFSET(0x15A6F0C0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x15A6FCA0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ROWDATA_OFFSET UNITYSDK_OFFSET(0x15A6F930)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A71330)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x15A71340)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x15A71370)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A71400)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x15A71410)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerShootResultPageController_TypeDefinitionIndex = 84723;

	class UITriggerShootResultPageController : public ::MoleMole::UIHollowLayerResultPageV2PopWindowController
	{
	public:
		::MoleMole::UIGeneralExpProgressWidgetController* _expWidget; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET))(this);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData RowData(::System::String* key, ::System::String* value)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ROWDATA_OFFSET))(key, value);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET))(this);
		}

		static ::Class_5_F7314AB7E8654428* GameContext()
		{
			return ((::Class_5_F7314AB7E8654428*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GAMECONTEXT_OFFSET))();
		}

		::System::Void OpenExpWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_OPENEXPWIDGET_OFFSET))(this);
		}

		::System::Void OnFadeInAnimEvent(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONFADEINANIMEVENT_OFFSET))(this, args);
		}

		::System::Void OnFadeInAnimEvent_1(::Class_2_8A1D7F4031E20BB3<::MoleMole::MonoLevelResultPageConfig_DelayType, ::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8A1D7F4031E20BB3<::MoleMole::MonoLevelResultPageConfig_DelayType, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONFADEINANIMEVENT_1_OFFSET))(this, args);
		}

		::System::Int32 GainExp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GAINEXP_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ExpLevelMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_EXPLEVELMAP_OFFSET))();
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> __base_GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* __base_GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET))(this);
		}
	};
}
