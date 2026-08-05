#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_B7347D66A12B211D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovTalentRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x141034D0)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14103540)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x14103820)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x141035E0)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x141036A0)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x14103B60)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_SETSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x141039E0)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14103C20)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14103C30)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x14103CD0)
#define MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14103D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentRowWidgetController_TypeDefinitionIndex = 42635;

	class UIZenkovTalentRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B7347D66A12B211D* get__viewModel()
		{
			return ((::Class_2_B7347D66A12B211D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIZenkovTalentRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovTalentRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void SetShowDetail(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_SETSHOWDETAIL_OFFSET))(this, flag);
		}

		::System::Void SetColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER_SETCOLOR_OFFSET))(this, color);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
