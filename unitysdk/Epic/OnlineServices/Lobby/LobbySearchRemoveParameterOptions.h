#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x1D19A960)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1D19A940)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x1D19A970)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1D19A950)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19A980)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchRemoveParameterOptions_TypeDefinitionIndex = 35714;

	class LobbySearchRemoveParameterOptions : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::Epic::OnlineServices::ComparisonOp _ComparisonOp_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS_SET_KEY_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ComparisonOp get_ComparisonOp()
		{
			return ((::Epic::OnlineServices::ComparisonOp(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET))(this);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET))(this, value);
		}
	};
}
