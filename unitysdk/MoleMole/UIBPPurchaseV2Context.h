#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIBPPagePageController; }

#define MOLEMOLE_UIBPPURCHASEV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF75A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPPurchaseV2Context_TypeDefinitionIndex = 90599;

	class UIBPPurchaseV2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBPPagePageController* pageController; // 0x28
		::System::Boolean isPop; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPURCHASEV2CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
