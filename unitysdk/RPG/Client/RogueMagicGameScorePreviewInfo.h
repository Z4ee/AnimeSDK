#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A_98;
namespace RPG::Client { class RogueMagicGameScorePreviewDataItem; }

#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ISALLEMPTY_OFFSET UNITYSDK_OFFSET(0x1B694C40)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ROGUESCOREPREVIEWITEM_OFFSET UNITYSDK_OFFSET(0x1B694C20)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_TALENTCOINPREVIEWITEM_OFFSET UNITYSDK_OFFSET(0x1B694C30)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1B692740)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B690F30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameScorePreviewInfo_TypeDefinitionIndex = 67393;

	class RogueMagicGameScorePreviewInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicGameScorePreviewDataItem* _TalentCoinPreviewItem_k__BackingField; // 0x10
		::RPG::Client::RogueMagicGameScorePreviewDataItem* _RogueScorePreviewItem_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_963E317C37FB5E9A_98* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicGameScorePreviewDataItem* get_RogueScorePreviewItem()
		{
			return ((::RPG::Client::RogueMagicGameScorePreviewDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ROGUESCOREPREVIEWITEM_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameScorePreviewDataItem* get_TalentCoinPreviewItem()
		{
			return ((::RPG::Client::RogueMagicGameScorePreviewDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_TALENTCOINPREVIEWITEM_OFFSET))(this);
		}

		::System::Boolean get_IsAllEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ISALLEMPTY_OFFSET))(this);
		}
	};
}
