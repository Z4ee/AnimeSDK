#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_FD6531B7A1455C0E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BCA680)
#define MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BCA6F0)
#define MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BCA790)
#define MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCAA10)
#define MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BCAA70)
#define MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BCAB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaOptAPanelWidgetController_TypeDefinitionIndex = 40838;

	class UIGachaOptAPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_FD6531B7A1455C0E* get__viewModel()
		{
			return ((::Class_2_FD6531B7A1455C0E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
