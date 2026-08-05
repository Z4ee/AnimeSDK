#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_21A3280FF4BD0943;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIInterKnotForumLevelRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17C15D90)
#define MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17C15E00)
#define MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17C15EA0)
#define MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17C15F60)
#define MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C160E0)
#define MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17C160F0)
#define MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17C16190)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotForumLevelRowWidgetController_TypeDefinitionIndex = 65839;

	class UIInterKnotForumLevelRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_21A3280FF4BD0943* get__viewModel()
		{
			return ((::Class_2_21A3280FF4BD0943*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIInterKnotForumLevelRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInterKnotForumLevelRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
