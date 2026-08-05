#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8806DA59B0F93016;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19F0AA40)
#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19F0AAB0)
#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0AB70)
#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19F0ABD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookEntranceTipsWidgetController_TypeDefinitionIndex = 43713;

	class UIHandBookEntranceTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_8806DA59B0F93016* get__viewModel()
		{
			return ((::Class_2_8806DA59B0F93016*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
