#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_B73573A17B462DB2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINounDetailWidgetController_Data; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_GETLOCALIZATIONTEXT_OFFSET UNITYSDK_OFFSET(0x17973A90)
#define MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17973740)
#define MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x179737B0)
#define MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17973850)
#define MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17973910)
#define MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17973B50)
#define MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17973B60)
#define MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17973C00)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailWidgetController_TypeDefinitionIndex = 62460;

	class UINounDetailWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B73573A17B462DB2* get__viewModel()
		{
			return ((::Class_2_B73573A17B462DB2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UINounDetailWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINounDetailWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::UnityEngine::UI::Extension::UILocalizationText* GetLocalizationText()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_GETLOCALIZATIONTEXT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
