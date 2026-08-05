#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopTeachTabWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19AA58A0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x19AA5910)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19AA5CA0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19AA78A0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19AA5D60)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19AA77F0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19AA59B0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19AA5E20)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA7AC0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x19AA7AD0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19AA7AE0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19AA7B80)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19AA7C10)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19AA7CB0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19AA7D50)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachTabWidgetController_TypeDefinitionIndex = 41003;

	class UICoopTeachTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MoleMole::UICoopTeachTabWidgetController_Data* _cacheCtx; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_2* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::MoleMole::UICoopTeachTabWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopTeachTabWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
