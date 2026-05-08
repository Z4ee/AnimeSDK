#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class AreaPositionConfig; }
namespace MoleMole { class BattleEvaluteConfigs; }
namespace MoleMole { class CardOptionConfigs; }
namespace MoleMole { class CardOptionRarityConfigs; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class ItemRarityConfigs; }
namespace MoleMole { class RoleRarityIconConfigs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_MISC__CTOR_OFFSET UNITYSDK_OFFSET(0x15A073E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Misc_TypeDefinitionIndex = 52813;

	class ConfigUICommon_Misc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single skillLevelUpDelay; // 0x58
		::System::Single weaponRefineRefreshDelay; // 0x5C
		::MoleMole::RoleRarityIconConfigs* RoleRarityIconConfig; // 0x60
		::MoleMole::ItemRarityConfigs* ItemRarityConfigs; // 0x68
		::MoleMole::DepositoryPageTabConfigs* DepositoryTabConfigs; // 0x70
		::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>* YorozuyaQuestColors; // 0x78
		::MoleMole::ItemIconTweenConfig* ItemTweenConfig; // 0x80
		::MoleMole::BattleEvaluteConfigs* BattleEvaluateConfigs; // 0x88
		::MoleMole::CardOptionConfigs* CardOptionConfigs; // 0x90
		::MoleMole::CardOptionRarityConfigs* CardOptionRarityConfigs; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* GeneralColorConfigs; // 0xA0
		::System::Single LoadingFadeInTime; // 0xA8
		::System::Single LoadingFadeOutTime; // 0xAC
		::System::Single EventClickTime; // 0xB0
		::System::String* QuestColor; // 0xB8
		::UnityEngine::Color TempleFullProgressColor; // 0xC0
		::UnityEngine::Color TempleInProgressColor; // 0xD0
		::UnityEngine::Color TempleAddProgressColor; // 0xE0
		::UnityEngine::Color BuddyEnergyNotEnoughColor; // 0xF0
		::UnityEngine::Color BuddyEnergyEnoughColor; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::AreaPositionConfig*>* ExpeditionAreaArtConfig; // 0x110
		::System::Single ProductFadeOutTime; // 0x118
		::System::Single SaleFadeOutTime; // 0x11C
		::System::Single ResearchFadeOutTime; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC__CTOR_OFFSET))(this);
		}
	};
}
