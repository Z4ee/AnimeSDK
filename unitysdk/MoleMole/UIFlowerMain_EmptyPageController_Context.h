#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A85D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_EmptyPageController_Context_TypeDefinitionIndex = 65844;

	class UIFlowerMain_EmptyPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
