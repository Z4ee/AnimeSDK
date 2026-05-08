#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_DD6DE862D987A0F6;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15CB02F0)
#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15CB0360)
#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB0420)
#define MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15CB0480)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookEntranceTipsWidgetController_TypeDefinitionIndex = 52973;

	class UIHandBookEntranceTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_DD6DE862D987A0F6* get__viewModel()
		{
			return ((::Class_2_DD6DE862D987A0F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKENTRANCETIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
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
