#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONS_GET_MAXPLAYERS_OFFSET UNITYSDK_OFFSET(0x1AE342B0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONS_SET_MAXPLAYERS_OFFSET UNITYSDK_OFFSET(0x1AE342C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE342D0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetMaxPlayersOptions_TypeDefinitionIndex = 33575;

	class SessionModificationSetMaxPlayersOptions : public ::System::Object
	{
	public:
		::System::UInt32 _MaxPlayers_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxPlayers()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONS_GET_MAXPLAYERS_OFFSET))(this);
		}

		::System::Void set_MaxPlayers(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETMAXPLAYERSOPTIONS_SET_MAXPLAYERS_OFFSET))(this, value);
		}
	};
}
