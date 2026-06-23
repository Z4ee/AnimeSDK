#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYHOTPOTITEMICONBTNSMALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11079C50)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityHotPotItemIconBtnSmallContext_TypeDefinitionIndex = 46254;

	class ActivityHotPotItemIconBtnSmallContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOTPOTITEMICONBTNSMALLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
