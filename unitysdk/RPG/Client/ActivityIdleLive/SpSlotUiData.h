#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9BE31E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x9BE3220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_ISSLOTHASAVATAR_OFFSET UNITYSDK_OFFSET(0x9BE3210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_OWNEDAVATARICON_OFFSET UNITYSDK_OFFSET(0x9BE3200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_SPEQUIP_OFFSET UNITYSDK_OFFSET(0x9BE31F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_UNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x9BE3230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9BE0AE0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpSlotUiData_TypeDefinitionIndex = 69499;

	class SpSlotUiData : public ::System::Object
	{
	public:
		::System::String* _OwnedAvatarIcon_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::SpecialEquip* _SpEquip_k__BackingField; // 0x18
		::System::Boolean _IsSlotHasAvatar_k__BackingField; // 0x20
		::System::Boolean _IsEmpty_k__BackingField; // 0x21
		::System::Boolean _IsLocked_k__BackingField; // 0x22
		::RPG::Client::TextID _UnlockHint_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::SpecialEquip* equip, ::System::String* ownedAvatarIcon, ::System::Boolean isSlotHasAvatar, ::System::Boolean isUnlocked, ::RPG::Client::TextID unlockHint)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*, ::System::String*, ::System::Boolean, ::System::Boolean, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA__CTOR_OFFSET))(this, equip, ownedAvatarIcon, isSlotHasAvatar, isUnlocked, unlockHint);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* get_SpEquip()
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_SPEQUIP_OFFSET))(this);
		}

		::System::String* get_OwnedAvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_OWNEDAVATARICON_OFFSET))(this);
		}

		::System::Boolean get_IsSlotHasAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_ISSLOTHASAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_ISLOCKED_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_UNLOCKHINT_OFFSET))(this);
		}
	};
}
