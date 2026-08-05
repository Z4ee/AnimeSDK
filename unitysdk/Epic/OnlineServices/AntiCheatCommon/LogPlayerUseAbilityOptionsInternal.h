#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerUseAbilityOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EAF90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9EAF10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_ABILITYCOOLDOWNMS_OFFSET UNITYSDK_OFFSET(0x36CDA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_ABILITYDURATIONMS_OFFSET UNITYSDK_OFFSET(0x352890)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9EAEE0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_PLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x462A80)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerUseAbilityOptionsInternal_TypeDefinitionIndex = 36932;

	struct alignas(8) LogPlayerUseAbilityOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PlayerHandle; // 0x18
		::System::UInt32 m_AbilityId; // 0x20
		::System::UInt32 m_AbilityDurationMs; // 0x24
		::System::UInt32 m_AbilityCooldownMs; // 0x28

		::System::Void set_PlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_PLAYERHANDLE_OFFSET))(this, value);
		}

		::System::Void set_AbilityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_ABILITYID_OFFSET))(this, value);
		}

		::System::Void set_AbilityDurationMs(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_ABILITYDURATIONMS_OFFSET))(this, value);
		}

		::System::Void set_AbilityCooldownMs(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_ABILITYCOOLDOWNMS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEABILITYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
