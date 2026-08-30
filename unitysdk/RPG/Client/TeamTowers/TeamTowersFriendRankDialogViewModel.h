#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::TeamTowers { class TeamTowersFriendData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL_GETFRIENDRANKLIST_OFFSET UNITYSDK_OFFSET(0x1A3A8A60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL_GETSELFRANKDATA_OFFSET UNITYSDK_OFFSET(0x1A3A8AA0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL_UPDATERANKINGDATA_OFFSET UNITYSDK_OFFSET(0x1A3A8780)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL__BUILDFRIENDRANKLIST_OFFSET UNITYSDK_OFFSET(0x1A3A8AE0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A8FD0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersFriendRankDialogViewModel_TypeDefinitionIndex = 78584;

	class TeamTowersFriendRankDialogViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersFriendData*>* _FriendRankList; // 0x10
		::RPG::Client::TeamTowers::TeamTowersFriendData* _SelfRankData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* UpdateRankingData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL_UPDATERANKINGDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersFriendData*>* GetFriendRankList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersFriendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL_GETFRIENDRANKLIST_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersFriendData* GetSelfRankData()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersFriendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL_GETSELFRANKDATA_OFFSET))(this);
		}

		::System::Void _BuildFriendRankList(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL__BUILDFRIENDRANKLIST_OFFSET))(this, a1);
		}
	};
}
