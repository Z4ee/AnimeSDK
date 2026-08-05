#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIBPPagePageController; }

#define MOLEMOLE_UIBPPURCHASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19562270)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPPurchaseContext_TypeDefinitionIndex = 53524;

	class UIBPPurchaseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBPPagePageController* pageController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPURCHASECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
