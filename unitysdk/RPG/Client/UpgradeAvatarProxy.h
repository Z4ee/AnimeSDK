#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_1_35EF8ACF9B94E295_1;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_UPGRADEAVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7430B0)
#define RPG_CLIENT_UPGRADEAVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xA742FC0)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA742DA0)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xA742C80)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xA742C90)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA742E60)
#define RPG_CLIENT_UPGRADEAVATARPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xA742F10)

namespace RPG::Client
{
	inline static constexpr unsigned int UpgradeAvatarProxy_TypeDefinitionIndex = 51020;

	class UpgradeAvatarProxy : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Origin_k__BackingField; // 0x10
		::Class_1_35EF8ACF9B94E295_1* _UpgradeRepository; // 0x18

		::System::Void _ctor(::Class_1_35EF8ACF9B94E295_1* upgradeRepository, ::RPG::AvatarSystem::IAvatar* origin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35EF8ACF9B94E295_1*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY__CTOR_OFFSET))(this, upgradeRepository, origin);
		}

		::RPG::AvatarSystem::IAvatar* get_Origin()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_GET_ORIGIN_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Upgrade()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_GET_UPGRADE_OFFSET))(this);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_GET_VERSION_OFFSET))(this);
		}

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_341* builder)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_EXPORTPROFILE_OFFSET))(this, builder);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
