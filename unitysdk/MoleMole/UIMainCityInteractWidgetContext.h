#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17143550)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityInteractWidgetContext_TypeDefinitionIndex = 47215;

	class UIMainCityInteractWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 NpcTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
