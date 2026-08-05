#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_53C3C4DCD38E97B7;
class Class_2_F0D4DDB18AB4637E_Class_1_8C92669D4140023D_1;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18401BC0)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18401C90)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18402260)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18401EA0)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONSETGLOBALDATA_OFFSET UNITYSDK_OFFSET(0x18402420)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18401C30)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_SETGOTICON_OFFSET UNITYSDK_OFFSET(0x184020B0)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18402510)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18402520)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x184025C0)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18402650)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONSETGLOBALDATA_OFFSET UNITYSDK_OFFSET(0x184026F0)
#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18402780)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralClaimItemWidgetController_TypeDefinitionIndex = 55075;

	class UIGeneralClaimItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_F0D4DDB18AB4637E_Class_1_8C92669D4140023D_1* _scrollViewGlobalData; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_53C3C4DCD38E97B7* get__viewModel()
		{
			return ((::Class_2_53C3C4DCD38E97B7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnSetGlobalData(::System::Object* globalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_ONSETGLOBALDATA_OFFSET))(this, globalData);
		}

		::System::Void SetGotIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER_SETGOTICON_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnSetGlobalData(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONSETGLOBALDATA_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
