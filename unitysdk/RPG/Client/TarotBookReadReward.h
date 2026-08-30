#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_25.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class TarotBookReadRewardRow; }

#define RPG_CLIENT_TAROTBOOKREADREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0xE17B100)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GETQUESTDATA_OFFSET UNITYSDK_OFFSET(0xE17E620)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GET_ID_OFFSET UNITYSDK_OFFSET(0xE17E530)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xE17E580)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xE17BE30)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GET_STORYCOUNT_OFFSET UNITYSDK_OFFSET(0xE17E5D0)
#define RPG_CLIENT_TAROTBOOKREADREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0xE17E700)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookReadReward_TypeDefinitionIndex = 68067;

	class TarotBookReadReward : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookReadRewardRow* _Meta; // 0x10

		::System::Void _ctor(::RPG::GameCore::TarotBookReadRewardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookReadRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GET_QUESTID_OFFSET))(this);
		}

		::System::UInt32 get_StoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GET_STORYCOUNT_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_25 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_25(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GET_STATUS_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookReadReward* Create(::RPG::GameCore::TarotBookReadRewardRow* a1)
		{
			return ((::RPG::Client::TarotBookReadReward*(*)(::RPG::GameCore::TarotBookReadRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_CREATE_OFFSET))(a1);
		}

		::RPG::Client::QuestData* GetQuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GETQUESTDATA_OFFSET))(this);
		}
	};
}
