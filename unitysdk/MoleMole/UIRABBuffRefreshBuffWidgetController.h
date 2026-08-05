#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_D0FC9C115BBC7179;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A7DEC0)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A7DF30)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16A7DFD0)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7E190)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A7E1F0)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16A7E290)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuffRefreshBuffWidgetController_TypeDefinitionIndex = 67381;

	class UIRABBuffRefreshBuffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_D0FC9C115BBC7179* get__viewModel()
		{
			return ((::Class_2_D0FC9C115BBC7179*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
