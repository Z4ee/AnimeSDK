#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionModificationSetMaxPlayersOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x17E10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONSINTERNAL_SET_MAXPLAYERS_OFFSET UNITYSDK_OFFSET(0x2200)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2210)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetMaxPlayersOptionsInternal_TypeDefinitionIndex = 45203;

	struct alignas(4) SessionModificationSetMaxPlayersOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_MaxPlayers; // 0x14

		::System::Void set_MaxPlayers(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONSINTERNAL_SET_MAXPLAYERS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
