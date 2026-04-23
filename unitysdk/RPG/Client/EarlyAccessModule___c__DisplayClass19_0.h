#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class WorldEarlyUnlockData; }

#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1AE370)
#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS19_0__GETWORLDEARLYUNLOCKDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA1AF750)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessModule___c__DisplayClass19_0_TypeDefinitionIndex = 58644;

	class EarlyAccessModule___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::UInt32 worldID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetWorldEarlyUnlockData_b__0(::RPG::Client::WorldEarlyUnlockData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WorldEarlyUnlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS19_0__GETWORLDEARLYUNLOCKDATA_B__0_OFFSET))(this, x);
		}
	};
}
