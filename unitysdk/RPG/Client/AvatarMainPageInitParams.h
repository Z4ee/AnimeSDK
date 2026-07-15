#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ITeamInfoProviderViewModel; }

#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x18144040)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_ID_OFFSET UNITYSDK_OFFSET(0x18143FE0)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_ISLOCATEAVATAR_OFFSET UNITYSDK_OFFSET(0x18144060)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SHOWLACKEQUIPMARK_OFFSET UNITYSDK_OFFSET(0x181440A0)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SKINID_OFFSET UNITYSDK_OFFSET(0x18144080)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SUBMENUID_OFFSET UNITYSDK_OFFSET(0x18144000)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_TEAMINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x18144020)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x18144050)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_ID_OFFSET UNITYSDK_OFFSET(0x18143FF0)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_ISLOCATEAVATAR_OFFSET UNITYSDK_OFFSET(0x18144070)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SHOWLACKEQUIPMARK_OFFSET UNITYSDK_OFFSET(0x181440B0)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SKINID_OFFSET UNITYSDK_OFFSET(0x18144090)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SUBMENUID_OFFSET UNITYSDK_OFFSET(0x18144010)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_TEAMINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x18144030)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x181440C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarMainPageInitParams_TypeDefinitionIndex = 57424;

	class AvatarMainPageInitParams : public ::System::Object
	{
	public:
		::RPG::Client::ITeamInfoProviderViewModel* _TeamInfoProvider_k__BackingField; // 0x10
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x18
		::System::Nullable_1<::System::UInt32> _SubMenuID_k__BackingField; // 0x20
		::System::Nullable_1<::System::UInt32> _SkinID_k__BackingField; // 0x28
		::System::Nullable_1<::System::UInt32> _ID_k__BackingField; // 0x30
		::System::Nullable_1<::System::Boolean> _IsLocateAvatar_k__BackingField; // 0x38
		::System::Nullable_1<::System::Boolean> _ShowLackEquipMark_k__BackingField; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_ID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_ID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> get_SubMenuID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SUBMENUID_OFFSET))(this);
		}

		::System::Void set_SubMenuID(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SUBMENUID_OFFSET))(this, a1);
		}

		::RPG::Client::ITeamInfoProviderViewModel* get_TeamInfoProvider()
		{
			return ((::RPG::Client::ITeamInfoProviderViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_TEAMINFOPROVIDER_OFFSET))(this);
		}

		::System::Void set_TeamInfoProvider(::RPG::Client::ITeamInfoProviderViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ITeamInfoProviderViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_TEAMINFOPROVIDER_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_AVATAR_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> get_IsLocateAvatar()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_ISLOCATEAVATAR_OFFSET))(this);
		}

		::System::Void set_IsLocateAvatar(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_ISLOCATEAVATAR_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> get_SkinID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SKINID_OFFSET))(this);
		}

		::System::Void set_SkinID(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SKINID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> get_ShowLackEquipMark()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SHOWLACKEQUIPMARK_OFFSET))(this);
		}

		::System::Void set_ShowLackEquipMark(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SHOWLACKEQUIPMARK_OFFSET))(this, a1);
		}
	};
}
