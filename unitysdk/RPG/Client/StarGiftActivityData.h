#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_STARGIFTACTIVITYDATA_CHECKCANCLAIMREWARD_OFFSET UNITYSDK_OFFSET(0xE0EA440)
#define RPG_CLIENT_STARGIFTACTIVITYDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xE0EA600)
#define RPG_CLIENT_STARGIFTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xE0EA3C0)
#define RPG_CLIENT_STARGIFTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xE0EA540)
#define RPG_CLIENT_STARGIFTACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EA3B0)
#define RPG_CLIENT_STARGIFTACTIVITYDATA__ONACTIVITYENDEDCUSTOM_OFFSET UNITYSDK_OFFSET(0xE0EA4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StarGiftActivityData_TypeDefinitionIndex = 61757;

	class StarGiftActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 _QuestID; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARGIFTACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARGIFTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _OnActivityEndedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARGIFTACTIVITYDATA__ONACTIVITYENDEDCUSTOM_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARGIFTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean CheckCanClaimReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARGIFTACTIVITYDATA_CHECKCANCLAIMREWARD_OFFSET))(this);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARGIFTACTIVITYDATA_GET_QUESTID_OFFSET))(this);
		}
	};
}
