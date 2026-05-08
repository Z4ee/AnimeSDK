#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_9A3C6D4059C90B52;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_GET_ONCLICKACTION_OFFSET UNITYSDK_OFFSET(0x12F24150)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12F237A0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x12F23BD0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12F23810)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x12F23F30)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12F23C70)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F23A10)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_SETONCLICK_OFFSET UNITYSDK_OFFSET(0x12F24100)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_SET_ONCLICKACTION_OFFSET UNITYSDK_OFFSET(0x12F24160)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F24170)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12F24180)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x12F241D0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12F24260)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F24300)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPropWidgetController_TypeDefinitionIndex = 61888;

	class UIAbyssS2MapRefreshPropWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Int32 _cacheIndex; // 0x2E8
		::System::Action_2<::System::Boolean, ::System::Int32>* _OnClickAction_k__BackingField; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_9A3C6D4059C90B52* get__viewModel()
		{
			return ((::Class_2_9A3C6D4059C90B52*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetOnClick(::System::Action_2<::System::Boolean, ::System::Int32>* onClickItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_SETONCLICK_OFFSET))(this, onClickItem);
		}

		::System::Action_2<::System::Boolean, ::System::Int32>* get_OnClickAction()
		{
			return ((::System::Action_2<::System::Boolean, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_GET_ONCLICKACTION_OFFSET))(this);
		}

		::System::Void set_OnClickAction(::System::Action_2<::System::Boolean, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_SET_ONCLICKACTION_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
