#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F22380)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__DISPLAYCLASS7_0__GETAUTOFINISHEDREWARDS_B__0_OFFSET UNITYSDK_OFFSET(0x9F225D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeAutoSettleResult___c__DisplayClass7_0_TypeDefinitionIndex = 58127;

	class ChallengeAutoSettleResult___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayData* tempItemDisplayData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAutoFinishedRewards_b__0(::RPG::Client::ItemDisplayData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__DISPLAYCLASS7_0__GETAUTOFINISHEDREWARDS_B__0_OFFSET))(this, x);
		}
	};
}
