#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_B2D270DFAE7C21C4;

#define MOLEMOLE_UIACTIVITWEEKREWARDCOMPONENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15883A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitWeekRewardComponentContext_TypeDefinitionIndex = 82992;

	class UIActivitWeekRewardComponentContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_B2D270DFAE7C21C4* proxy; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITWEEKREWARDCOMPONENTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
