#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xC58BDA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GETTAGRANKDESC_OFFSET UNITYSDK_OFFSET(0xC58F450)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GETTAGRANK_OFFSET UNITYSDK_OFFSET(0xC58F6E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC58F8A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC58F880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_TAG_OFFSET UNITYSDK_OFFSET(0xC58F860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC58F8B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC58F890)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_TAG_OFFSET UNITYSDK_OFFSET(0xC58F870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC58F440)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarTagConfig_TypeDefinitionIndex = 74782;

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

		static ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig* Create(::RPG::GameCore::ILBattleAvatarTag a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*(*)(::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_CREATE_OFFSET))(a1);
		}

		static ::System::String* GetTagRankDesc(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GETTAGRANKDESC_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetTagRank(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GETTAGRANK_OFFSET))(a1);
		}

		::RPG::GameCore::ILBattleAvatarTag get_Tag()
		{
			return ((::RPG::GameCore::ILBattleAvatarTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::RPG::GameCore::ILBattleAvatarTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_TAG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARTAGCONFIG_SET_ICONPATH_OFFSET))(this, a1);
		}
	};
}
