#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_63EECC8F6D37AC35;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x140CF920)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x140CF990)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x140CFA30)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140CFBF0)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x140CFC50)
#define MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x140CFCF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideSellingShowOrderWidgetController_TypeDefinitionIndex = 61217;

	class UISummerTideSellingShowOrderWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_63EECC8F6D37AC35* get__viewModel()
		{
			return ((::Class_2_63EECC8F6D37AC35*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGSHOWORDERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
