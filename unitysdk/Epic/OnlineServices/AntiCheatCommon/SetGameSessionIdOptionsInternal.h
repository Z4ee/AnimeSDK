#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class SetGameSessionIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD900)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xD7E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONSINTERNAL_SET_GAMESESSIONID_OFFSET UNITYSDK_OFFSET(0xD660)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xD710)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int SetGameSessionIdOptionsInternal_TypeDefinitionIndex = 36685;

	struct alignas(8) SetGameSessionIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_GameSessionId; // 0x18

		::System::Void set_GameSessionId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONSINTERNAL_SET_GAMESESSIONID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
