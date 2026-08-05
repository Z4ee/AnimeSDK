#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8DE7EDFCADFCA7A9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRABLevelEnemyRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17E29FE0)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x17E2A5E0)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17E2A050)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17E2A0F0)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E2A330)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17E2A1B0)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2A630)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x17E2A640)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17E2A650)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17E2A6F0)
#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E2A790)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelEnemyRowWidgetController_TypeDefinitionIndex = 51877;

	class UIRABLevelEnemyRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_8DE7EDFCADFCA7A9* get__viewModel()
		{
			return ((::Class_2_8DE7EDFCADFCA7A9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIRABLevelEnemyRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABLevelEnemyRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
