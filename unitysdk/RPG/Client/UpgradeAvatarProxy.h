#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BB4D72520EB5607.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_419;
class Class_0_16E4307DCC419505_806;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_UPGRADEAVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DDC4CB0)
#define RPG_CLIENT_UPGRADEAVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x1DDC4B30)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1DDC4A30)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1DDC4850)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0x1DDC4890)
#define RPG_CLIENT_UPGRADEAVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1DDC4AB0)
#define RPG_CLIENT_UPGRADEAVATARPROXY_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1DDC4AC0)
#define RPG_CLIENT_UPGRADEAVATARPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC4AD0)
#define RPG_CLIENT_UPGRADEAVATARPROXY__ENSUREENTRYREFRESHED_OFFSET UNITYSDK_OFFSET(0x1DDC48F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UpgradeAvatarProxy_TypeDefinitionIndex = 62930;

	class UpgradeAvatarProxy : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_806* _UpgradeAvatarRefresher; // 0x10
		::Struct_2_9BB4D72520EB5607 _Entry; // 0x18
		::System::UInt32 _Version_k__BackingField; // 0x40

		::System::Void _ctor(::Struct_2_9BB4D72520EB5607& a1, ::Class_0_16E4307DCC419505_806* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9BB4D72520EB5607&, ::Class_0_16E4307DCC419505_806*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_419* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_419*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void _EnsureEntryRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARPROXY__ENSUREENTRYREFRESHED_OFFSET))(this);
		}
	};
}
