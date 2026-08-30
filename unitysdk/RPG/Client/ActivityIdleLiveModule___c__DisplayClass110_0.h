#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS110_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC614B80)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS110_0___INITFINALACTDICT_B__0_OFFSET UNITYSDK_OFFSET(0xC614B90)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass110_0_TypeDefinitionIndex = 61633;

	class ActivityIdleLiveModule___c__DisplayClass110_0 : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayData* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS110_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitFinalActDict_b__0(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS110_0___INITFINALACTDICT_B__0_OFFSET))(this, a1);
		}
	};
}
