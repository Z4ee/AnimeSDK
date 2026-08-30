#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyAttributeVisibility.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class Attribute; }
namespace Epic::OnlineServices::Lobby { class AttributeData; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C4F350)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_GET_DATA_OFFSET UNITYSDK_OFFSET(0x3C4F1E0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x7845E0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C4F340)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x3C4F250)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C4F2C0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x3A2C790)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeInternal_TypeDefinitionIndex = 45672;

	struct alignas(8) AttributeInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Data; // 0x18
		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility m_Visibility; // 0x20

		::Epic::OnlineServices::Lobby::AttributeData* get_Data()
		{
			return ((::Epic::OnlineServices::Lobby::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Epic::OnlineServices::Lobby::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_DATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility get_Visibility()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyAttributeVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_Visibility(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_VISIBILITY_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::Attribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::Attribute*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
