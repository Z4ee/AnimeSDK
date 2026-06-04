#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PlayerReturnTrialAvatarGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETCURRENTUSINGGROUPID_OFFSET UNITYSDK_OFFSET(0xC4AA540)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETRETURNTRIALAVATARTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xC4AA690)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETRETURNTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xC4AA800)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETTRIALAVATARGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0xC4AA360)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETTRIALAVATARGROUP_OFFSET UNITYSDK_OFFSET(0xC4AA400)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_HASRETURNTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xC4AA4A0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_ISRETURNTRIALAVATARFUNCTIONOPEN_OFFSET UNITYSDK_OFFSET(0xC4AA2C0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_ISSKIPCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xC4AA910)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_SETISSKIPCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xC4AA730)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_SETUSINGGROUP_OFFSET UNITYSDK_OFFSET(0xC4AA5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnTrialAvatarHelper_TypeDefinitionIndex = 57876;

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

		static ::RPG::Client::PlayerReturnTrialAvatarGroup* GetTrialAvatarGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETTRIALAVATARGROUP_OFFSET))(a1);
		}

		static ::System::Boolean HasReturnTrialAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_HASRETURNTRIALAVATAR_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurrentUsingGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETCURRENTUSINGGROUPID_OFFSET))();
		}

		static ::System::Void SetUsingGroup(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_SETUSINGGROUP_OFFSET))(a1);
		}

		static ::System::UInt32 GetReturnTrialAvatarTeamIndex()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETRETURNTRIALAVATARTEAMINDEX_OFFSET))();
		}

		static ::System::Void SetIsSkipConfirmDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_SETISSKIPCONFIRMDIALOG_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetReturnTrialAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_GETRETURNTRIALAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsSkipConfirmDialog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARHELPER_ISSKIPCONFIRMDIALOG_OFFSET))();
		}
	};
}
