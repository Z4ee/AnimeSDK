#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MobileTouchRumbleEnableType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_MOBILETOUCHRUMBLEENABLESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16058970)

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleEnableSettingContext_TypeDefinitionIndex = 51532;

	class MobileTouchRumbleEnableSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::MobileTouchRumbleEnableType RumbleEnableType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILETOUCHRUMBLEENABLESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
