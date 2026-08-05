#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_3BC6B2FC73104388;
class Class_2_E46C7200C98EA660;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x112D3040)
#define MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x112D30B0)
#define MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x112D3150)
#define MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x112D32C0)
#define MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x112D3210)
#define MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x112D3360)
#define MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x112D3370)
#define MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x112D3410)
#define MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x112D34B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBuildingRowWidgetController_TypeDefinitionIndex = 50862;

	class UIZenkovBuildingRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_3BC6B2FC73104388* get__viewModel()
		{
			return ((::Class_2_3BC6B2FC73104388*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::Class_2_E46C7200C98EA660* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E46C7200C98EA660*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
