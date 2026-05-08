#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIFortuneFlowerShop3DModelController; }

#define MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER_CONTEXT_GET_FLOWERSHOP3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1698D830)
#define MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER_CONTEXT_SET_FLOWERSHOP3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1698D840)
#define MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1698D850)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopPrepPageController_Context_TypeDefinitionIndex = 60008;

	class UIFlowerShopPrepPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIFortuneFlowerShop3DModelController* _FlowerShop3DModelController_k__BackingField; // 0x28
		::System::Boolean OpenCustomMode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::UIFortuneFlowerShop3DModelController* get_FlowerShop3DModelController()
		{
			return ((::MoleMole::UIFortuneFlowerShop3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER_CONTEXT_GET_FLOWERSHOP3DMODELCONTROLLER_OFFSET))(this);
		}

		::System::Void set_FlowerShop3DModelController(::MoleMole::UIFortuneFlowerShop3DModelController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFortuneFlowerShop3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER_CONTEXT_SET_FLOWERSHOP3DMODELCONTROLLER_OFFSET))(this, value);
		}
	};
}
