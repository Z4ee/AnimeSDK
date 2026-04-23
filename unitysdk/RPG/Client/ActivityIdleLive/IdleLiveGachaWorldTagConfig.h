#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9B58FB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B5A5D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B5A590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B5A5B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B5A5E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x9B5A5A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9B5A5C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9B5A580)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaWorldTagConfig_TypeDefinitionIndex = 69320;

	class IdleLiveGachaWorldTagConfig : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig* Create(::System::UInt32 worldTagId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_CREATE_OFFSET))(worldTagId);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
