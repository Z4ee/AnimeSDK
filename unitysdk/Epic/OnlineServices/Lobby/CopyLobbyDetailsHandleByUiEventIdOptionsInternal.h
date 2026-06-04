#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class CopyLobbyDetailsHandleByUiEventIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4C4D0)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9F00)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x95B0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int CopyLobbyDetailsHandleByUiEventIdOptionsInternal_TypeDefinitionIndex = 42637;

	struct alignas(8) CopyLobbyDetailsHandleByUiEventIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt64 m_UiEventId; // 0x18

		::System::Void set_UiEventId(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_UIEVENTID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEBYUIEVENTIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
