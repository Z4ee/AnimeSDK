#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_BASEUIFLOWERSHOPTASKPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE9472F0)

namespace MoleMole
{
	inline static constexpr unsigned int BaseUIFlowerShopTaskPageController_Context_TypeDefinitionIndex = 58535;

	class BaseUIFlowerShopTaskPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsOpenByNPC; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEUIFLOWERSHOPTASKPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
