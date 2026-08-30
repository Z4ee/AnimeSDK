#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_4770AAB4DD7D317C_1;

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA_GET_GIFTSHOWTEXT_OFFSET UNITYSDK_OFFSET(0xC544940)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA_GET_GIFTSHOWTITLE_OFFSET UNITYSDK_OFFSET(0xC5448D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC5449B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC544890)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGiftData_TypeDefinitionIndex = 75175;

	class ActivityHipplenGiftData : public ::System::Object
	{
	public:
		::Class_1_4770AAB4DD7D317C_1* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGIFTDATA__CTOR_OFFSET))(this, a1);
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
