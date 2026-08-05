#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18506C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopPageController_Context_TypeDefinitionIndex = 65274;

	class UIAreaShopPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 m_uid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
