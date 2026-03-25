#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6238D7FF0191672E_15;
namespace RPG::Client { class RogueMagicGameScorePreviewDataItem; }

#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ISALLEMPTY_OFFSET UNITYSDK_OFFSET(0xA31DDF0)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ROGUESCOREPREVIEWITEM_OFFSET UNITYSDK_OFFSET(0xA31DDD0)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_TALENTCOINPREVIEWITEM_OFFSET UNITYSDK_OFFSET(0xA31DDE0)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA31BA20)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA31A480)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameScorePreviewInfo_TypeDefinitionIndex = 54909;

	class RogueMagicGameScorePreviewInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicGameScorePreviewDataItem* _TalentCoinPreviewItem_k__BackingField; // 0x10
		::RPG::Client::RogueMagicGameScorePreviewDataItem* _RogueScorePreviewItem_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_6238D7FF0191672E_15* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_SYNC_OFFSET))(this, proto);
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
