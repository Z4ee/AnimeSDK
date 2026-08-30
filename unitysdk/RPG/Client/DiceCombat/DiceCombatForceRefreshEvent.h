#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATFORCEREFRESHEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4095B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatForceRefreshEvent_TypeDefinitionIndex = 75577;

	class DiceCombatForceRefreshEvent : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFORCEREFRESHEVENT__CTOR_OFFSET))(this);
		}
	};
}
