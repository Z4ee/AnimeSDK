#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class PlayerReturnAssistConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xDBFCCF0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETTRIALAVATARLIST_OFFSET UNITYSDK_OFFSET(0xDBFCF00)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xDBFD070)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0xDBFD240)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_INITCONFIG_OFFSET UNITYSDK_OFFSET(0xDBFCDC0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_ISAVAILABLETRIALAVATARCONFIGID_OFFSET UNITYSDK_OFFSET(0xDBFD180)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xDBFCC90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnTrialAvatarGroup_TypeDefinitionIndex = 61884;

	class PlayerReturnTrialAvatarGroup : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayerReturnAssistConfigRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TrialAvatarConfigIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerReturnTrialAvatarGroup* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETTRIALAVATARLIST_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* GetTrialAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GETTRIALAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsAvailableTrialAvatarConfigID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_ISAVAILABLETRIALAVATARCONFIGID_OFFSET))(this, a1);
		}

		::System::Void InitConfig(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_INITCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_GroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP_GET_GROUPDESC_OFFSET))(this);
		}
	};
}
