#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_449;
class Class_2_CE2F8792D782D9CA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBuffSelectRowWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1955CE80)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1955C9E0)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONTOGGLEVALUE_OFFSET UNITYSDK_OFFSET(0x1955D490)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1955CA70)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1955C860)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1955C8C0)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_PRASEBUFFDATA_ACTIVITYOVAMAINBATTLESELECTBUFF_OFFSET UNITYSDK_OFFSET(0x1955DBA0)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_REGISTERONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1955DE20)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_SETMAXSELECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1955DD60)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_SETQUEST_1_OFFSET UNITYSDK_OFFSET(0x1955DDC0)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_SETQUEST_OFFSET UNITYSDK_OFFSET(0x1955DB40)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_SHOWBUFF_OFFSET UNITYSDK_OFFSET(0x1955CBF0)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_UPDATESELECT_OFFSET UNITYSDK_OFFSET(0x1955D270)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1955DE70)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1955DFE0)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1955E070)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1955E100)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1955E190)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarActivitySelectInfoArea_FoldWidgetController_TypeDefinitionIndex = 49926;

	class UIAvatarActivitySelectInfoArea_FoldWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_CE2F8792D782D9CA* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralBuffSelectRowWidgetController*>* buffs; // 0x2C8
		::MoleMole::UIGeneralToggleWidgetController* toggle; // 0x2D0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>* _selectInfoItemDatas; // 0x2D8
		::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>* OnValueChange; // 0x2E0
		::System::Collections::Generic::List_1<::System::Int32>* selects; // 0x2E8
		::System::Int32 maxSelectCount; // 0x2F0
		::System::Int32 curSelectCount; // 0x2F4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_SHOWBUFF_OFFSET))(this);
		}

		::System::Void OnClick(::System::Boolean isSelect, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONCLICK_OFFSET))(this, isSelect, index);
		}

		::System::Void UpdateSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_UPDATESELECT_OFFSET))(this);
		}

		::System::Void OnToggleValue(::System::Boolean value, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_ONTOGGLEVALUE_OFFSET))(this, value, init);
		}

		::System::Void SetQuest(::System::Int32 quest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_SETQUEST_OFFSET))(this, quest);
		}

		::System::Void SetMaxSelectCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_SETMAXSELECTCOUNT_OFFSET))(this, count);
		}

		::System::Void SetQuest_1(::System::Int32 quest, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>* ls)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_SETQUEST_1_OFFSET))(this, quest, ls);
		}

		::System::Void RegisterOnValueChange(::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>* OnSelects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_REGISTERONVALUECHANGE_OFFSET))(this, OnSelects);
		}

		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>* PraseBuffData_ActivityOvaMainBattleSelectBuff(::System::Int32 questID)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER_PRASEBUFFDATA_ACTIVITYOVAMAINBATTLESELECTBUFF_OFFSET))(questID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
