#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionHarvestData; }
namespace RPG::Client { class ExpeditionModule; }

#define RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89B760)
#define RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS6_0__GETUNLOCKEDHARVESTDATASBYGROUPID_B__0_OFFSET UNITYSDK_OFFSET(0x1B89F350)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionModule___c__DisplayClass6_0_TypeDefinitionIndex = 64032;

	class ExpeditionModule___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::ExpeditionModule* __4__this; // 0x10
		::System::UInt32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetUnlockedHarvestDatasByGroupId_b__0(::RPG::Client::ExpeditionHarvestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionHarvestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS6_0__GETUNLOCKEDHARVESTDATASBYGROUPID_B__0_OFFSET))(this, a1);
		}
	};
}
