#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_38.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6DDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleNodeWidgetControllerContext_TypeDefinitionIndex = 67757;

	class UICampIdleNodeWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_0A3761FE34514D6C_38 m_playType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
