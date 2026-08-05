#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EZenkovConsoleInteractInputMode.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_ZENKOVCONSOLEINTERACTINPUTMODESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11666000)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovConsoleInteractInputModeSettingContext_TypeDefinitionIndex = 55350;

	class ZenkovConsoleInteractInputModeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::EZenkovConsoleInteractInputMode InteractInputMode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCONSOLEINTERACTINPUTMODESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
