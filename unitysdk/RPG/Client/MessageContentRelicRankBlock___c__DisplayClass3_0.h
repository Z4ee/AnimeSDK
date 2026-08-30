#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContentRelicRankBlock; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A5510)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK___C__DISPLAYCLASS3_0__REQUESTRELICRANKDATA_B__0_OFFSET UNITYSDK_OFFSET(0xD6A5730)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRelicRankBlock___c__DisplayClass3_0_TypeDefinitionIndex = 63323;

	class MessageContentRelicRankBlock___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::MessageContentRelicRankBlock* __4__this; // 0x10
		::System::Action_1<::System::UInt32>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRelicRankData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK___C__DISPLAYCLASS3_0__REQUESTRELICRANKDATA_B__0_OFFSET))(this);
		}
	};
}
