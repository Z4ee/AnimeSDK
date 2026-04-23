#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETBATTLESCORERANKTEXTID_OFFSET UNITYSDK_OFFSET(0xA326290)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETBUFFICONREDDOTSUBKEY_OFFSET UNITYSDK_OFFSET(0xA326480)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETFINALQUESTDATA_OFFSET UNITYSDK_OFFSET(0xA323BA0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA325EB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_ISINFANTASTICSTORYACTIVITYBATTLE_OFFSET UNITYSDK_OFFSET(0xA3260A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_TRYGETTRIALAVATARSBYPARAGRAPHID_OFFSET UNITYSDK_OFFSET(0xA322180)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_TRYTRANSFERTOBATTLENPC_OFFSET UNITYSDK_OFFSET(0xA325D70)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryActivityUtils_TypeDefinitionIndex = 58841;

	class FantasticStoryActivityUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::QuestData* GetFinalQuestData()
		{
			return ((::RPG::Client::QuestData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETFINALQUESTDATA_OFFSET))();
		}

		static ::System::Void TryTransferToBattleNPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_TRYTRANSFERTOBATTLENPC_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETUNLOCKMISSIONLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* TryGetTrialAvatarsByParagraphID(::System::UInt32 ParagraphID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_TRYGETTRIALAVATARSBYPARAGRAPHID_OFFSET))(ParagraphID);
		}

		static ::System::Boolean IsInFantasticStoryActivityBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_ISINFANTASTICSTORYACTIVITYBATTLE_OFFSET))();
		}

		static ::RPG::Client::TextID GetBattleScoreRankTextID(::System::UInt32 score)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETBATTLESCORERANKTEXTID_OFFSET))(score);
		}

		static ::System::UInt32 GetBuffIconRedDotSubKey(::System::UInt32 slotID, ::System::UInt32 paragraphID)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETBUFFICONREDDOTSUBKEY_OFFSET))(slotID, paragraphID);
		}
	};
}
