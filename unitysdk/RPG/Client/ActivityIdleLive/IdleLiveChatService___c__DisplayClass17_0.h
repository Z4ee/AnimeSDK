#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1148;
class Class_1_B547B56320B70AD4;
namespace RPG::Client::ActivityIdleLive { class IdleLiveChatService; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0__ADDSPECIALCHAT_B__0_OFFSET UNITYSDK_OFFSET(0xB124790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1242E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveChatService___c__DisplayClass17_0_TypeDefinitionIndex = 70153;

	class IdleLiveChatService___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveChatService* __4__this; // 0x10
		::Class_1_B547B56320B70AD4* specialChatData; // 0x18
		::Class_0_16E4307DCC419505_1148* trigger; // 0x20

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
