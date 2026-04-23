#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9B2D3A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GETTAGRANKDESC_OFFSET UNITYSDK_OFFSET(0x9B30270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GETTAGRANK_OFFSET UNITYSDK_OFFSET(0x9B30500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B306B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B30690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_TAG_OFFSET UNITYSDK_OFFSET(0x9B30670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B306C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9B306A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_TAG_OFFSET UNITYSDK_OFFSET(0x9B30680)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9B30260)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarTagConfig_TypeDefinitionIndex = 69140;

	class IdleLiveAvatarTagConfig : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::GameCore::ILBattleAvatarTag _Tag_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig* Create(::RPG::GameCore::ILBattleAvatarTag tagId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*(*)(::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_CREATE_OFFSET))(tagId);
		}

		static ::System::String* GetTagRankDesc(::System::UInt32 rank, ::System::String* colorString)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GETTAGRANKDESC_OFFSET))(rank, colorString);
		}

		static ::System::UInt32 GetTagRank(::System::UInt32 rank)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GETTAGRANK_OFFSET))(rank);
		}

		::RPG::GameCore::ILBattleAvatarTag get_Tag()
		{
			return ((::RPG::GameCore::ILBattleAvatarTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::RPG::GameCore::ILBattleAvatarTag value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_TAG_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
