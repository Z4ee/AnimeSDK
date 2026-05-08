#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8D47E54A091C56C7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMainCitySidebarSkinItemWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x160FAE20)
#define MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x160FAE90)
#define MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x160FAF30)
#define MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x160FAFF0)
#define MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160FB170)
#define MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x160FB180)
#define MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x160FB220)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarSkinItemWidgetController_TypeDefinitionIndex = 51146;

	class UIMainCitySidebarSkinItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_8D47E54A091C56C7* get__viewModel()
		{
			return ((::Class_2_8D47E54A091C56C7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIMainCitySidebarSkinItemWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarSkinItemWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
