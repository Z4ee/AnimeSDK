#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_32.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x193265F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleRewardDialogPopWindowControllerContext_TypeDefinitionIndex = 40822;

	class UICampIdleRewardDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_0A3761FE34514D6C_32 m_playType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
