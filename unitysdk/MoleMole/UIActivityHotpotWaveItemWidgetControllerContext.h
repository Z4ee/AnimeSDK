#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180CCAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotWaveItemWidgetControllerContext_TypeDefinitionIndex = 68660;

	class UIActivityHotpotWaveItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 BubbleIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
