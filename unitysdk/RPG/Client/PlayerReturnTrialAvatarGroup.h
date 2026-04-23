#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class PlayerReturnAssistConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xAD68A90)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETAVATARINFOPROVIDERBYSPECIALID_OFFSET UNITYSDK_OFFSET(0xAD68C50)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0xAD68EB0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETSPECIALAVATARIDFORROLEID_OFFSET UNITYSDK_OFFSET(0xAD68FC0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETTRIALAVATARLIST_OFFSET UNITYSDK_OFFSET(0xAD68CF0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0xAD690E0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_INITCONFIG_OFFSET UNITYSDK_OFFSET(0xAD68B20)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_ISAVAILABLETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xAD68F50)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xAD68A80)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnTrialAvatarGroup_TypeDefinitionIndex = 57086;

	class PlayerReturnTrialAvatarGroup : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayerReturnAssistConfigRow* _Meta; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerReturnTrialAvatarGroup* Create(::System::UInt32 groupID)
		{
			return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_CREATE_OFFSET))(groupID);
		}

		::RPG::Client::IAvatarInfoProvider* GetAvatarInfoProviderBySpecialID(::System::UInt32 specialID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETAVATARINFOPROVIDERBYSPECIALID_OFFSET))(this, specialID);
		}

		::RPG::Client::IAvatarInfoProvider* GetAvatarInfoProvider(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETAVATARINFOPROVIDER_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETTRIALAVATARLIST_OFFSET))(this);
		}

		::System::Boolean IsAvailableTrialAvatar(::System::UInt32 specialAvatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_ISAVAILABLETRIALAVATAR_OFFSET))(this, specialAvatarID);
		}

		::System::UInt32 GetSpecialAvatarIDForRoleID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETSPECIALAVATARIDFORROLEID_OFFSET))(this, avatarID);
		}

		::System::Void InitConfig(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_INITCONFIG_OFFSET))(this, groupID);
		}

		::RPG::Client::TextID get_GroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GET_GROUPDESC_OFFSET))(this);
		}
	};
}
