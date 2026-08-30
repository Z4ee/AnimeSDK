#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class WorldEarlyUnlockData; }

#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69BCF0)
#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS22_0__GETWORLDEARLYUNLOCKDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1A69E240)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessModule___c__DisplayClass22_0_TypeDefinitionIndex = 63712;

	class EarlyAccessModule___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::UInt32 worldID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetWorldEarlyUnlockData_b__0(::RPG::Client::WorldEarlyUnlockData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WorldEarlyUnlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS22_0__GETWORLDEARLYUNLOCKDATA_B__0_OFFSET))(this, a1);
		}
	};
}
