#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class PlayerReturnTrialAvatarGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETCURRENTUSINGGROUPID_OFFSET UNITYSDK_OFFSET(0xAD694E0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETPLAYERRETURNTRIALAVATARINFOPROVIDERBYSPECIALID_OFFSET UNITYSDK_OFFSET(0xAD69850)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETPLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0xAD698C0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETRETURNTRIALAVATARTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xAD69630)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETTRIALAVATARGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0xAD69200)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETTRIALAVATARGROUP_OFFSET UNITYSDK_OFFSET(0xAD692A0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_HASRETURNTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xAD693E0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_ISRETURNTRIALAVATARFUNCTIONOPEN_OFFSET UNITYSDK_OFFSET(0xAD69160)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_ISRETURNTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xAD69340)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_ISSKIPCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xAD697A0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_SETISSKIPCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xAD696D0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_SETUSINGGROUP_OFFSET UNITYSDK_OFFSET(0xAD69570)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnTrialAvatarHelper_TypeDefinitionIndex = 57087;

	class PlayerReturnTrialAvatarHelper : public ::System::Object
	{
	public:
		static ::System::Boolean IsReturnTrialAvatarFunctionOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_ISRETURNTRIALAVATARFUNCTIONOPEN_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetTrialAvatarGroupIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETTRIALAVATARGROUPIDLIST_OFFSET))();
		}

		static ::RPG::Client::PlayerReturnTrialAvatarGroup* GetTrialAvatarGroup(::System::UInt32 groupID)
		{
			return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETTRIALAVATARGROUP_OFFSET))(groupID);
		}

		static ::System::Boolean IsReturnTrialAvatar(::System::UInt32 specialAvatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_ISRETURNTRIALAVATAR_OFFSET))(specialAvatarID);
		}

		static ::System::Boolean HasReturnTrialAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_HASRETURNTRIALAVATAR_OFFSET))(avatarID);
		}

		static ::System::UInt32 GetCurrentUsingGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETCURRENTUSINGGROUPID_OFFSET))();
		}

		static ::System::Void SetUsingGroup(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_SETUSINGGROUP_OFFSET))(groupID);
		}

		static ::System::UInt32 GetReturnTrialAvatarTeamIndex()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETRETURNTRIALAVATARTEAMINDEX_OFFSET))();
		}

		static ::System::Void SetIsSkipConfirmDialog(::System::Boolean isSkip)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_SETISSKIPCONFIRMDIALOG_OFFSET))(isSkip);
		}

		static ::System::Boolean IsSkipConfirmDialog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_ISSKIPCONFIRMDIALOG_OFFSET))();
		}

		static ::RPG::Client::IAvatarInfoProvider* GetPlayerReturnTrialAvatarInfoProviderBySpecialID(::System::UInt32 specialAvatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETPLAYERRETURNTRIALAVATARINFOPROVIDERBYSPECIALID_OFFSET))(specialAvatarID);
		}

		static ::RPG::Client::IAvatarInfoProvider* GetPlayerReturnTrialAvatarInfoProvider(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETPLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(avatarID);
		}
	};
}
