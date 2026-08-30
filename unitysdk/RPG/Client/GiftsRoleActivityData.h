#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_GIFTSROLEACTIVITYDATA_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xD116AC0)
#define RPG_CLIENT_GIFTSROLEACTIVITYDATA_ISSHOWBTNGOTOEVERYDAYREDDOT_OFFSET UNITYSDK_OFFSET(0xD116A30)
#define RPG_CLIENT_GIFTSROLEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xD116970)
#define RPG_CLIENT_GIFTSROLEACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xD1168B0)
#define RPG_CLIENT_GIFTSROLEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD116850)
#define RPG_CLIENT_GIFTSROLEACTIVITYDATA__ONACTIVITYENDEDCUSTOM_OFFSET UNITYSDK_OFFSET(0xD116860)

namespace RPG::Client
{
	inline static constexpr unsigned int GiftsRoleActivityData_TypeDefinitionIndex = 61721;

	class GiftsRoleActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		// static const ::System::UInt32 GIFTS_ROLE_QUEST_ID = 0x5C0059; // 0x0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GIFTSROLEACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnActivityEndedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GIFTSROLEACTIVITYDATA__ONACTIVITYENDEDCUSTOM_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GIFTSROLEACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GIFTSROLEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowBtnGotoEveryDayRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GIFTSROLEACTIVITYDATA_ISSHOWBTNGOTOEVERYDAYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsAllRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GIFTSROLEACTIVITYDATA_ISALLREWARDTAKEN_OFFSET))(this);
		}
	};
}
