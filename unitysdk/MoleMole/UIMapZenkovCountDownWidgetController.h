#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_0C733E34D80A5104;
class Class_3_1EA5936EA10EA317_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17AEF7E0)
#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x17AEF770)
#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17AEF850)
#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17AEFAB0)
#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17AEF8F0)
#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17AEFB10)
#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF05E0)
#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17AF0640)
#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17AF06E0)
#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17AF0770)

namespace MoleMole
{
	inline static constexpr unsigned int UIMapZenkovCountDownWidgetController_TypeDefinitionIndex = 80938;

	class UIMapZenkovCountDownWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _timerBlinkActive; // 0x2C0
		::System::Single lastLeftTime; // 0x2C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_1EA5936EA10EA317_1* get__view()
		{
			return ((::Class_3_1EA5936EA10EA317_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::Class_2_0C733E34D80A5104* get__viewModel()
		{
			return ((::Class_2_0C733E34D80A5104*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
