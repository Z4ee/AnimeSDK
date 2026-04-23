#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class MatchThreeGame; }
namespace RPG::Client { class MatchThreeLobby; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEUTILS_CANSKIPTUTORIALFORROYALE_OFFSET UNITYSDK_OFFSET(0xA84C6C0)
#define RPG_CLIENT_MATCHTHREEUTILS_CREATEANDOPENLOBBY_1_OFFSET UNITYSDK_OFFSET(0xA84BFA0)
#define RPG_CLIENT_MATCHTHREEUTILS_CREATEANDOPENLOBBY_OFFSET UNITYSDK_OFFSET(0xA84B8E0)
#define RPG_CLIENT_MATCHTHREEUTILS_GETCURRENTGAME_OFFSET UNITYSDK_OFFSET(0xA84B7A0)
#define RPG_CLIENT_MATCHTHREEUTILS_GETSTATICCOUNT_OFFSET UNITYSDK_OFFSET(0xA849DE0)
#define RPG_CLIENT_MATCHTHREEUTILS_ISENEMYGHOSTBIRD_OFFSET UNITYSDK_OFFSET(0xA84C3B0)
#define RPG_CLIENT_MATCHTHREEUTILS_ISROYALETUTORIALFINISHED_OFFSET UNITYSDK_OFFSET(0xA84C4F0)
#define RPG_CLIENT_MATCHTHREEUTILS_ISSAMELOBBY_OFFSET UNITYSDK_OFFSET(0xA84C310)
#define RPG_CLIENT_MATCHTHREEUTILS_ISUNLOCKBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA8386F0)
#define RPG_CLIENT_MATCHTHREEUTILS_JOINANDOPENLOBBY_1_OFFSET UNITYSDK_OFFSET(0xA84C130)
#define RPG_CLIENT_MATCHTHREEUTILS_JOINANDOPENLOBBY_OFFSET UNITYSDK_OFFSET(0xA84BA70)
#define RPG_CLIENT_MATCHTHREEUTILS_SETROYALETUTORIALSKIPPED_OFFSET UNITYSDK_OFFSET(0xA84C860)
#define RPG_CLIENT_MATCHTHREEUTILS_SHOWCONFIRMGIVEUPDIALOG_OFFSET UNITYSDK_OFFSET(0xA84C8B0)
#define RPG_CLIENT_MATCHTHREEUTILS_TRYRECONNECTANDOPENLOBBY_OFFSET UNITYSDK_OFFSET(0xA84C2D0)
#define RPG_CLIENT_MATCHTHREEUTILS__BEGINJOINLOBBY_OFFSET UNITYSDK_OFFSET(0xA84BBF0)
#define RPG_CLIENT_MATCHTHREEUTILS__ONJOINLOBBY_OFFSET UNITYSDK_OFFSET(0xA84BE00)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeUtils_TypeDefinitionIndex = 60744;

	class MatchThreeUtils : public ::System::Object
	{
	public:
		// static const ::System::String* _LOBBY_MAIN_PAGE; // 0x0
		// static const ::System::UInt32 _MAP_ENTRANCE_ID = 0xFC775; // 0x0
		// static const ::System::UInt32 _MAPPING_INFO_ID = 0x972; // 0x0
		// static const ::System::UInt32 _GHOST_BIRD_ID = 0x1FD; // 0x0

		static ::RPG::Client::MatchThreeGame* GetCurrentGame()
		{
			return ((::RPG::Client::MatchThreeGame*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_GETCURRENTGAME_OFFSET))();
		}

		static ::System::Boolean IsUnlockBySubMission(::System::UInt32 unlockSubmissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_ISUNLOCKBYSUBMISSION_OFFSET))(unlockSubmissionID);
		}

		static ::System::Void CreateAndOpenLobby(::System::UInt32 birdID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_CREATEANDOPENLOBBY_OFFSET))(birdID);
		}

		static ::System::Void JoinAndOpenLobby(::System::UInt64 roomID, ::System::UInt32 birdID)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_JOINANDOPENLOBBY_OFFSET))(roomID, birdID);
		}

		static ::System::Void _BeginJoinLobby(::System::UInt64 roomID, ::System::UInt32 birdID)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS__BEGINJOINLOBBY_OFFSET))(roomID, birdID);
		}

		static ::System::Void _OnJoinLobby()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS__ONJOINLOBBY_OFFSET))();
		}

		static ::System::Void CreateAndOpenLobby_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_CREATEANDOPENLOBBY_1_OFFSET))();
		}

		static ::System::Boolean JoinAndOpenLobby_1(::System::UInt64 roomID)
		{
			return ((::System::Boolean(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_JOINANDOPENLOBBY_1_OFFSET))(roomID);
		}

		static ::System::Void TryReconnectAndOpenLobby()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_TRYRECONNECTANDOPENLOBBY_OFFSET))();
		}

		static ::System::UInt32 GetStaticCount(::System::UInt32 scoreID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_GETSTATICCOUNT_OFFSET))(scoreID);
		}

		static ::System::Boolean IsSameLobby(::RPG::Client::MatchThreeLobby* lobby, ::RPG::Client::ChatMessageInviteData* inviteData)
		{
			return ((::System::Boolean(*)(::RPG::Client::MatchThreeLobby*, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_ISSAMELOBBY_OFFSET))(lobby, inviteData);
		}

		static ::System::Boolean IsEnemyGhostBird()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_ISENEMYGHOSTBIRD_OFFSET))();
		}

		static ::System::Boolean IsRoyaleTutorialFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_ISROYALETUTORIALFINISHED_OFFSET))();
		}

		static ::System::Boolean CanSkipTutorialForRoyale()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_CANSKIPTUTORIALFORROYALE_OFFSET))();
		}

		static ::System::Void SetRoyaleTutorialSkipped()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_SETROYALETUTORIALSKIPPED_OFFSET))();
		}

		static ::System::Void ShowConfirmGiveUpDialog()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS_SHOWCONFIRMGIVEUPDIALOG_OFFSET))();
		}
	};
}
