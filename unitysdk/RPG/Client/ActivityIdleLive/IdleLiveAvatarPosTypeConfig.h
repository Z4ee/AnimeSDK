#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9B2D050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2EC60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B2EC20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_GET_POSTYPE_OFFSET UNITYSDK_OFFSET(0x9B2EC40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2EC70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9B2EC30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_SET_POSTYPE_OFFSET UNITYSDK_OFFSET(0x9B2EC50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9B2EC10)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarPosTypeConfig_TypeDefinitionIndex = 69137;

	class IdleLiveAvatarPosTypeConfig : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::RPG::GameCore::ILBattleCharacterLocation _PosType_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* Create(::RPG::GameCore::ILBattleCharacterLocation posTypeId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig*(*)(::RPG::GameCore::ILBattleCharacterLocation))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_CREATE_OFFSET))(posTypeId);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_SET_NAME_OFFSET))(this, value);
		}

		::RPG::GameCore::ILBattleCharacterLocation get_PosType()
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_GET_POSTYPE_OFFSET))(this);
		}

		::System::Void set_PosType(::RPG::GameCore::ILBattleCharacterLocation value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ILBattleCharacterLocation))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_SET_POSTYPE_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPOSTYPECONFIG_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
