#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_CF2D46484282B629;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIInterKnotCourseChapterWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17243900)
#define MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17243970)
#define MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17243A10)
#define MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17243AD0)
#define MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17243D00)
#define MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17243D10)
#define MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17243DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotCourseChapterWidgetController_TypeDefinitionIndex = 62571;

	class UIInterKnotCourseChapterWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_CF2D46484282B629* get__viewModel()
		{
			return ((::Class_2_CF2D46484282B629*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIInterKnotCourseChapterWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInterKnotCourseChapterWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
