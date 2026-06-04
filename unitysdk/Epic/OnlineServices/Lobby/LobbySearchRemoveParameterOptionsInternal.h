#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbySearchRemoveParameterOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x54C70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x54C60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x2A90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x54AE0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x54B90)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchRemoveParameterOptionsInternal_TypeDefinitionIndex = 42736;

	struct alignas(8) LobbySearchRemoveParameterOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::Epic::OnlineServices::ComparisonOp m_ComparisonOp; // 0x20

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_KEY_OFFSET))(this, a1);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHREMOVEPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
