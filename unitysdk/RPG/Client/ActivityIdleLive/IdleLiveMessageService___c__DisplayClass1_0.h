#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_FFE4D00B495B8020;
namespace Proto { class ItemList; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveMessageService; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FA7A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE___C__DISPLAYCLASS1_0__TAKEMESSAGEREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x1C0FA7C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveMessageService___c__DisplayClass1_0_TypeDefinitionIndex = 75071;

	class IdleLiveMessageService___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveMessageService* __4__this; // 0x10
		::Class_1_FFE4D00B495B8020* contentRewardService; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _TakeMessageReward_b__0(::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_45> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_45>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE___C__DISPLAYCLASS1_0__TAKEMESSAGEREWARD_B__0_OFFSET))(this, a1);
		}
	};
}
