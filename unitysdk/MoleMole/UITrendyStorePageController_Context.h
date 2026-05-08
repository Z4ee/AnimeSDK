#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE468000)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStorePageController_Context_TypeDefinitionIndex = 56400;

	class UITrendyStorePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SelectWeaponPro; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
