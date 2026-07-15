#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonActivityQuestRewardTabInfo.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::GameCore { class ActivityQuestRewardDataRow; }
namespace RPG::GameCore { class ActivitySummonRewardTabRow; }

#define RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x18A90E90)
#define RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A90E00)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonQuestRewardTabInfo_TypeDefinitionIndex = 59173;

	class ActivitySummonQuestRewardTabInfo : public ::RPG::Client::CommonActivityQuestRewardTabInfo
	{
	public:
		::RPG::Client::ActivitySummonStage* _Stage; // 0x48
		::RPG::Client::TextID _TitleBeforeRevealed; // 0x50
		::RPG::Client::TextID _TitleAfterRevealed; // 0x60

		::System::Void _ctor(::RPG::GameCore::ActivityQuestRewardDataRow* a1, ::RPG::GameCore::ActivitySummonRewardTabRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityQuestRewardDataRow*, ::RPG::GameCore::ActivitySummonRewardTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO_GET_TITLE_OFFSET))(this);
		}
	};
}
