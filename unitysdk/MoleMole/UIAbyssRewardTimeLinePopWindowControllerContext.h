#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E78540)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssRewardTimeLinePopWindowControllerContext_TypeDefinitionIndex = 72435;

	class UIAbyssRewardTimeLinePopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean m_needPlayAnim; // 0x28
		::System::Boolean m_showOnlyMission; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
