#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_BASEUIFLOWERSHOPTASKPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAE3070)

namespace MoleMole
{
	inline static constexpr unsigned int BaseUIFlowerShopTaskPageController_Context_TypeDefinitionIndex = 44995;

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
