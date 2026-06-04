#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class CaptainData; }

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS256_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB191370)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS256_0__GETCAPTAINONEBASEDRANK_B__0_OFFSET UNITYSDK_OFFSET(0xB192210)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass256_0_TypeDefinitionIndex = 57544;

	class ActivityIdleLiveModule___c__DisplayClass256_0 : public ::System::Object
	{
	public:
		::System::UInt32 senderId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS256_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCaptainOneBasedRank_b__0(::RPG::Client::ActivityIdleLive::CaptainData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS256_0__GETCAPTAINONEBASEDRANK_B__0_OFFSET))(this, a1);
		}
	};
}
