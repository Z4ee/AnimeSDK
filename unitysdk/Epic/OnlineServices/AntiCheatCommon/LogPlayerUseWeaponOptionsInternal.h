#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerUseWeaponData; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerUseWeaponOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x914080)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x914070)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x913FF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONSINTERNAL_SET_USEWEAPONDATA_OFFSET UNITYSDK_OFFSET(0x913F80)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerUseWeaponOptionsInternal_TypeDefinitionIndex = 36277;

	struct alignas(8) LogPlayerUseWeaponOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UseWeaponData; // 0x18

		::System::Void set_UseWeaponData(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONSINTERNAL_SET_USEWEAPONDATA_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
