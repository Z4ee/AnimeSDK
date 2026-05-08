#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPlayerAccessoryPageController.h"

#define MOLEMOLE_UIPLAYERACCESSORYEXTRAPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E10620)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryExtraPageController_TypeDefinitionIndex = 55429;

	class UIPlayerAccessoryExtraPageController : public ::MoleMole::UIPlayerAccessoryPageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYEXTRAPAGECONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
