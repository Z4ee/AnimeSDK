#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_98DE5B0AA67D49FB;

#define MOLEMOLE_GENERALBUFFPANELWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13022DD0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralBuffPanelWidgetContext_TypeDefinitionIndex = 67341;

	class GeneralBuffPanelWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_98DE5B0AA67D49FB* Config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBUFFPANELWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
