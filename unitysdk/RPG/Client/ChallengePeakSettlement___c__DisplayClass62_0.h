#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class Item; }
namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCAB4370)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT___C__DISPLAYCLASS62_0___GENERATEREWARDLIST_B__0_OFFSET UNITYSDK_OFFSET(0xCAB4380)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakSettlement___c__DisplayClass62_0_TypeDefinitionIndex = 63257;

	class ChallengePeakSettlement___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::Proto::Item* protoItem; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GenerateRewardList_b__0(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT___C__DISPLAYCLASS62_0___GENERATEREWARDLIST_B__0_OFFSET))(this, a1);
		}
	};
}
