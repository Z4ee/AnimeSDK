#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x176304B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerTimeLinePage_EmptyPageController_Context_TypeDefinitionIndex = 43492;

	class UIFlowerTimeLinePage_EmptyPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
