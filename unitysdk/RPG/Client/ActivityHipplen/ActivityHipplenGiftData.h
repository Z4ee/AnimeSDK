#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_4770AAB4DD7D317C_1;

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA_GET_GIFTSHOWTEXT_OFFSET UNITYSDK_OFFSET(0x8F1B7B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA_GET_GIFTSHOWTITLE_OFFSET UNITYSDK_OFFSET(0x8F1B780)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x8F1B7E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F1B740)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGiftData_TypeDefinitionIndex = 61623;

	class ActivityHipplenGiftData : public ::System::Object
	{
	public:
		::Class_1_4770AAB4DD7D317C_1* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 giftID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA__CTOR_OFFSET))(this, giftID);
		}

		::RPG::Client::TextID get_GiftShowTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA_GET_GIFTSHOWTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_GiftShowText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA_GET_GIFTSHOWTEXT_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA_GET_REWARDID_OFFSET))(this);
		}
	};
}
