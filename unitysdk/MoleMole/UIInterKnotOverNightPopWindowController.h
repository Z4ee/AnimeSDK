#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_44E81328D83FEA12;

#define MOLEMOLE_UIINTERKNOTOVERNIGHTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14826440)
#define MOLEMOLE_UIINTERKNOTOVERNIGHTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14826450)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotOverNightPopWindowController_TypeDefinitionIndex = 68107;

	class UIInterKnotOverNightPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_44E81328D83FEA12* _view; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTOVERNIGHTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTOVERNIGHTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}
	};
}
