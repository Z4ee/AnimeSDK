#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_B3BE3A775F46A81F_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16CA7910)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16CA7980)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16CA7BA0)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16CA7C40)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA7DC0)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__3_0_OFFSET UNITYSDK_OFFSET(0x16CA7DD0)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16CA8150)
#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16CA81F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchMapRowWidgetController_TypeDefinitionIndex = 49762;

	class UICoopMatchMapRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B3BE3A775F46A81F_1* get__viewModel()
		{
			return ((::Class_2_B3BE3A775F46A81F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, questId);
		}

		::System::Void _OnCreateViewModel_b__3_0(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__3_0_OFFSET))(this, focus);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
