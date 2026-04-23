#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonActivityQuestRewardTabInfo.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::GameCore { class ActivityQuestRewardDataRow; }
namespace RPG::GameCore { class ActivitySummonRewardTabRow; }

#define RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9C64280)
#define RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9C641F0)
#define RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO___IFIXBASEPROXY_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9C643B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonQuestRewardTabInfo_TypeDefinitionIndex = 57117;

	class ActivitySummonQuestRewardTabInfo : public ::RPG::Client::CommonActivityQuestRewardTabInfo
	{
	public:
		::RPG::Client::ActivitySummonStage* _Stage; // 0x48
		::RPG::Client::TextID _TitleAfterRevealed; // 0x50
		::RPG::Client::TextID _TitleBeforeRevealed; // 0x60

		::System::Void _ctor(::RPG::GameCore::ActivityQuestRewardDataRow* row, ::RPG::GameCore::ActivitySummonRewardTabRow* activityTabRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityQuestRewardDataRow*, ::RPG::GameCore::ActivitySummonRewardTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO__CTOR_OFFSET))(this, row, activityTabRow);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID __iFixBaseProxy_get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFO___IFIXBASEPROXY_GET_TITLE_OFFSET))(this);
		}
	};
}
