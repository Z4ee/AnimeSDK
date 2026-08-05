#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1938FF20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueBGWidgetController_Context_TypeDefinitionIndex = 74806;

	class UIGalgameArgueBGWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::GalGame::GalNPCLocation direction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEBGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
