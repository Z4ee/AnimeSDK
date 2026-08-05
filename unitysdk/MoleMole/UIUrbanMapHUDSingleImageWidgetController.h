#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_18E612FFFCB4C387;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x191684B0)
#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19168520)
#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x191686D0)
#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x191685C0)
#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19168BF0)
#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19168C50)
#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19168CF0)
#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19168D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapHUDSingleImageWidgetController_TypeDefinitionIndex = 79861;

	class UIUrbanMapHUDSingleImageWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_18E612FFFCB4C387* get__viewModel()
		{
			return ((::Class_2_18E612FFFCB4C387*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
