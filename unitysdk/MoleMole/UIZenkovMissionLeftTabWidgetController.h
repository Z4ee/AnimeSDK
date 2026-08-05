#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_4B6CBCE9018BD479;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovMissionLeftTabWidgetController_Data; }
namespace MoleMole { class UIZenkovMissionLeftTabWidgetController_ZkMapViewData; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x11A1C9E0)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GETMAPID_OFFSET UNITYSDK_OFFSET(0x11A1CC40)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11A1C470)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x11A1CDD0)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11A1C4E0)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11A1C580)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0x11A1CE70)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0x11A1C7D0)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11A1C640)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_UPDATEBACKGROUND_OFFSET UNITYSDK_OFFSET(0x11A1CB90)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1CF10)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11A1CF20)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11A1CFC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionLeftTabWidgetController_TypeDefinitionIndex = 53494;

	class UIZenkovMissionLeftTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_4B6CBCE9018BD479* get__viewModel()
		{
			return ((::Class_2_4B6CBCE9018BD479*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIZenkovMissionLeftTabWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovMissionLeftTabWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::MoleMole::UIZenkovMissionLeftTabWidgetController_ZkMapViewData* GetData()
		{
			return ((::MoleMole::UIZenkovMissionLeftTabWidgetController_ZkMapViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GETDATA_OFFSET))(this);
		}

		::System::Void UpdateBackground(::System::Boolean needFrameAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_UPDATEBACKGROUND_OFFSET))(this, needFrameAnim);
		}

		::System::Int32 GetMapId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GETMAPID_OFFSET))(this);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ISLOCKED_OFFSET))(this);
		}

		::System::Void RefreshMissionPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHMISSIONPOPUP_OFFSET))(this);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
