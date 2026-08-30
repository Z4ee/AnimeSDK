#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETBATTLESCORERANKTEXTID_OFFSET UNITYSDK_OFFSET(0xCF229C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETBUFFICONREDDOTSUBKEY_OFFSET UNITYSDK_OFFSET(0xCF22C30)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETFINALQUESTDATA_OFFSET UNITYSDK_OFFSET(0xCF1EF70)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xCF22220)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_ISINFANTASTICSTORYACTIVITYBATTLE_OFFSET UNITYSDK_OFFSET(0xCF22740)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_TRYGETTRIALAVATARSBYPARAGRAPHID_OFFSET UNITYSDK_OFFSET(0xCF22400)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_TRYTRANSFERTOBATTLENPC_OFFSET UNITYSDK_OFFSET(0xCF220E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryActivityUtils_TypeDefinitionIndex = 64037;

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

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* TryGetTrialAvatarsByParagraphID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_TRYGETTRIALAVATARSBYPARAGRAPHID_OFFSET))(a1);
		}

		static ::System::Boolean IsInFantasticStoryActivityBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_ISINFANTASTICSTORYACTIVITYBATTLE_OFFSET))();
		}

		static ::RPG::Client::TextID GetBattleScoreRankTextID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETBATTLESCORERANKTEXTID_OFFSET))(a1);
		}

		static ::System::UInt32 GetBuffIconRedDotSubKey(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYUTILS_GETBUFFICONREDDOTSUBKEY_OFFSET))(a1, a2);
		}
	};
}
