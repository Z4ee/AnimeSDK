#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_D563AF4E17C72E56;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovPresetsRoleWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x13526260)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13525EA0)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13525F10)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13525FB0)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x13526070)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x135263D0)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x135263E0)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13526480)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsRoleWidgetController_TypeDefinitionIndex = 83392;

	class UIZenkovPresetsRoleWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_D563AF4E17C72E56* get__viewModel()
		{
			return ((::Class_2_D563AF4E17C72E56*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIZenkovPresetsRoleWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovPresetsRoleWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::MoleMole::UIZenkovPresetsRoleWidgetController_Data* GetData()
		{
			return ((::MoleMole::UIZenkovPresetsRoleWidgetController_Data*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_GETDATA_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
