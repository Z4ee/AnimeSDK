#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONS_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x1DFEF000)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONS_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x1DFEF010)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEF020)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int CopyLobbyDetailsHandleByUiEventIdOptions_TypeDefinitionIndex = 45679;

	class CopyLobbyDetailsHandleByUiEventIdOptions : public ::System::Object
	{
	public:
		::System::UInt64 _UiEventId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONS_GET_UIEVENTID_OFFSET))(this);
		}

		::System::Void set_UiEventId(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONS_SET_UIEVENTID_OFFSET))(this, a1);
		}
	};
}
