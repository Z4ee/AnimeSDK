#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB17F490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xB17F4D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_ISSLOTHASAVATAR_OFFSET UNITYSDK_OFFSET(0xB17F4C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_OWNEDAVATARICON_OFFSET UNITYSDK_OFFSET(0xB17F4B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_SPEQUIP_OFFSET UNITYSDK_OFFSET(0xB17F4A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA_GET_UNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xB17F4E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB17CCF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpSlotUiData_TypeDefinitionIndex = 70311;

	class SpSlotUiData : public ::System::Object
	{
	public:
		::System::String* _OwnedAvatarIcon_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::SpecialEquip* _SpEquip_k__BackingField; // 0x18
		::RPG::Client::TextID _UnlockHint_k__BackingField; // 0x20
		::System::Boolean _IsSlotHasAvatar_k__BackingField; // 0x30
		::System::Boolean _IsLocked_k__BackingField; // 0x31
		::System::Boolean _IsEmpty_k__BackingField; // 0x32

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::SpecialEquip* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::RPG::Client::TextID a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*, ::System::String*, ::System::Boolean, ::System::Boolean, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPSLOTUIDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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
