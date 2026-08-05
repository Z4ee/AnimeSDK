#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_24A53FACD918DAF7.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_3DE13267B43F74B1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_GAMEPADINIT_OFFSET UNITYSDK_OFFSET(0x1A63D6C0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A63CDE0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A63CE50)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1A63DAF0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A63CEF0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1A63DB60)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_SETCANVASALPHA_OFFSET UNITYSDK_OFFSET(0x1A63D920)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63DC40)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A63DCA0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1A63DD40)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A63DDD0)
#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1A63DE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovGodownWidgetController_TypeDefinitionIndex = 79780;

	class UIBangkovGodownWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Struct_2_24A53FACD918DAF7 _selectedItemListChangedSubscription; // 0x2C0
		::Struct_2_24A53FACD918DAF7 _isInMultiSellModeChangedSubscription; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_3DE13267B43F74B1* get__viewModel()
		{
			return ((::Class_2_3DE13267B43F74B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetCanvasAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_SETCANVASALPHA_OFFSET))(this);
		}

		::System::Void GamepadInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_GAMEPADINIT_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
