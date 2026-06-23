#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_0AB5A84233BDA6F1.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIActivityBattleCommonRecordPopWindowController_RecordType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_184E347E78DEE23B;
namespace MoleMole { class UIActivityBattleCommonRecordPopWindowController_Context; }
namespace MoleMole { class UIActivityBattleCommonRecordPopWindowController_RecordData; }
namespace MoleMole { class UIActivityBattleCommonRecordPopWindowController_RecordInfo; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_GETMEDALRANKICON_OFFSET UNITYSDK_OFFSET(0x12BF3550)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x12BF2870)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x12BF2D30)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BF2880)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BF2A20)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BF2A90)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_REFRESHRECORDDATA_OFFSET UNITYSDK_OFFSET(0x12BF2D80)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_REFRESHRECORDINFOLIST_OFFSET UNITYSDK_OFFSET(0x12BF31E0)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_REFRESHRECORDINFO_OFFSET UNITYSDK_OFFSET(0x12BF32E0)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x12BF2BD0)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF3660)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BF3670)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BF3700)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BF3710)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleCommonRecordPopWindowController_TypeDefinitionIndex = 65928;

	class UIActivityBattleCommonRecordPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_184E347E78DEE23B* _view; // 0x318
		::MoleMole::UIActivityBattleCommonRecordPopWindowController_Context* _context; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnClickTab(::System::Int32 state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET))(this, state);
		}

		::System::Void RefreshState(::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordType state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_REFRESHSTATE_OFFSET))(this, state);
		}

		::System::Void RefreshRecordData(::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordData* recordData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_REFRESHRECORDDATA_OFFSET))(this, recordData);
		}

		::System::Void RefreshRecordInfoList(::System::Collections::Generic::List_1<::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordInfo*>* recordInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_REFRESHRECORDINFOLIST_OFFSET))(this, recordInfoList);
		}

		::System::Void RefreshRecordInfo(::System::Int32 index, ::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordInfo* recordInfoData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_REFRESHRECORDINFO_OFFSET))(this, index, recordInfoData);
		}

		::Foundation::AssetPath GetMedalRankIcon(::Class_4_01F9221F8B6A9296_Enum_3_0AB5A84233BDA6F1 medalRank)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::Class_4_01F9221F8B6A9296_Enum_3_0AB5A84233BDA6F1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_GETMEDALRANKICON_OFFSET))(this, medalRank);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
