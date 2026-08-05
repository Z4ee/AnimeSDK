#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVirtualPlayBtnBaseController.h"

#define MOLEMOLE_UIARCADEPLAYBTNBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196F73C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePlayBtnBaseController_TypeDefinitionIndex = 64476;

	class UIArcadePlayBtnBaseController : public ::MoleMole::UIVirtualPlayBtnBaseController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYBTNBASECONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
