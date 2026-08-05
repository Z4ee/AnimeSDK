#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB3DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopPrep_EmptyPageController_Context_TypeDefinitionIndex = 56632;

	class UIFlowerShopPrep_EmptyPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean OpenCustomMode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
