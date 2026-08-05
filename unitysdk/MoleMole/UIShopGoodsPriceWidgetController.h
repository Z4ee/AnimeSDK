#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_2D8D455B55CC8E8E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A28150)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A281C0)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15A28260)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A28420)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A28480)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15A28520)

namespace MoleMole
{
	inline static constexpr unsigned int UIShopGoodsPriceWidgetController_TypeDefinitionIndex = 85881;

	class UIShopGoodsPriceWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_2D8D455B55CC8E8E* get__viewModel()
		{
			return ((::Class_2_2D8D455B55CC8E8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
