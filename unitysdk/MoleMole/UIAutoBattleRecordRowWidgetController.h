#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_36;
class Class_1_B61C4EDDF0AF60D0;
class Class_2_26C85AD7ACF3604D;
class Class_3_09CC5D2676B783CA;
class Class_3_C3224B683B002127;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_CREATEARCADELIST_OFFSET UNITYSDK_OFFSET(0x1955C230)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_CREATEBANGBOOWIDGETROW_OFFSET UNITYSDK_OFFSET(0x1955BCD0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1955A920)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONDETAILBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1955BE10)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONGETFIGHTRECORDPLAYERLIST_OFFSET UNITYSDK_OFFSET(0x1955C010)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1955AA30)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1955A9B0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1955A6A0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_REBUILDEQUIPLIST_OFFSET UNITYSDK_OFFSET(0x1955B8B0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_REFRESHEMPTY_OFFSET UNITYSDK_OFFSET(0x1955B7C0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CREATEARCADELIST_G__CREATEINFO_12_1_OFFSET UNITYSDK_OFFSET(0x1955C400)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CREATEARCADELIST_G__GETGAMEICONPATH_12_0_OFFSET UNITYSDK_OFFSET(0x1955C4D0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1955C4C0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1955C610)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1955C6A0)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1955C740)
#define MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1955C7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRecordRowWidgetController_TypeDefinitionIndex = 87453;

	class UIAutoBattleRecordRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_26C85AD7ACF3604D* _view; // 0x2F0
		::System::Int32 _index; // 0x2F8
		::Class_3_C3224B683B002127* _info; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateBangbooWidgetRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_CREATEBANGBOOWIDGETROW_OFFSET))(this, arg);
		}

		::System::Void RefreshEmpty(::System::Boolean allEmpty, ::System::Boolean partialEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_REFRESHEMPTY_OFFSET))(this, allEmpty, partialEmpty);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* RebuildEquipList(::System::Collections::Generic::List_1<::System::Int32>* originList, ::System::Int32 num)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_REBUILDEQUIPLIST_OFFSET))(originList, num);
		}

		::System::Void OnDetailBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONDETAILBTNCLICK_OFFSET))(this);
		}

		::System::Void OnGetFightRecordPlayerList(::Class_0_16E4307DCC419505_36* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_ONGETFIGHTRECORDPLAYERLIST_OFFSET))(this, obj);
		}

		static ::System::Collections::Generic::List_1<::Class_1_B61C4EDDF0AF60D0*>* CreateArcadeList(::System::Collections::Generic::List_1<::Class_3_09CC5D2676B783CA*>* list)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_B61C4EDDF0AF60D0*>*(*)(::System::Collections::Generic::List_1<::Class_3_09CC5D2676B783CA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER_CREATEARCADELIST_OFFSET))(list);
		}

		static ::System::String* _CreateArcadeList_g__GetGameIconPath_12_0(::Class_3_09CC5D2676B783CA* brief, ::System::Boolean& isFrameTexture)
		{
			return ((::System::String*(*)(::Class_3_09CC5D2676B783CA*, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CREATEARCADELIST_G__GETGAMEICONPATH_12_0_OFFSET))(brief, isFrameTexture);
		}

		static ::Class_1_B61C4EDDF0AF60D0* _CreateArcadeList_g__CreateInfo_12_1(::System::UInt32 uid, ::Class_3_09CC5D2676B783CA* brief)
		{
			return ((::Class_1_B61C4EDDF0AF60D0*(*)(::System::UInt32, ::Class_3_09CC5D2676B783CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER__CREATEARCADELIST_G__CREATEINFO_12_1_OFFSET))(uid, brief);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
