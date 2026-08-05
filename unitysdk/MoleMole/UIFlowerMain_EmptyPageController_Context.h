#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187FEB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_EmptyPageController_Context_TypeDefinitionIndex = 66366;

	class UIFlowerMain_EmptyPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
