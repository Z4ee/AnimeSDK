#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1254;
class Class_1_B547B56320B70AD4;
namespace RPG::Client::ActivityIdleLive { class IdleLiveChatService; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0__ADDSPECIALCHAT_B__0_OFFSET UNITYSDK_OFFSET(0xC59EBE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC59E6D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveChatService___c__DisplayClass17_0_TypeDefinitionIndex = 74983;

	class IdleLiveChatService___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_1_B547B56320B70AD4* specialChatData; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveChatService* __4__this; // 0x18
		::Class_0_16E4307DCC419505_1254* trigger; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddSpecialChat_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0__ADDSPECIALCHAT_B__0_OFFSET))(this);
		}
	};
}
