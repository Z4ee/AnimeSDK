#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ShoppingMallBaseContextBase; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x188744E0)
#define MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18874720)
#define MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18874780)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallRightBaseController_TypeDefinitionIndex = 86872;

	class UIShoppingMallRightBaseController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::ShoppingMallBaseContextBase* _baseContext; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
