#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONS_GET_GAMESESSIONID_OFFSET UNITYSDK_OFFSET(0x8BB6350)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONS_SET_GAMESESSIONID_OFFSET UNITYSDK_OFFSET(0x8BB6360)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB6370)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int SetGameSessionIdOptions_TypeDefinitionIndex = 42510;

	class SetGameSessionIdOptions : public ::System::Object
	{
	public:
		::System::String* _GameSessionId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_GameSessionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONS_GET_GAMESESSIONID_OFFSET))(this);
		}

		::System::Void set_GameSessionId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_SETGAMESESSIONIDOPTIONS_SET_GAMESESSIONID_OFFSET))(this, value);
		}
	};
}
