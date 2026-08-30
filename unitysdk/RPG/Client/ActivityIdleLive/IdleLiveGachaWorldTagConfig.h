#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xC5BC910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC5BE400)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xC5BE3C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC5BE3E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC5BE410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0xC5BE3D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC5BE3F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC5BE3B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaWorldTagConfig_TypeDefinitionIndex = 74962;

	class IdleLiveGachaWorldTagConfig : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAWORLDTAGCONFIG_SET_ICONPATH_OFFSET))(this, a1);
		}
	};
}
