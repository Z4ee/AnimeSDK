#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyAttributeVisibility.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class Attribute; }
namespace Epic::OnlineServices::Lobby { class AttributeData; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x901FA0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_GET_DATA_OFFSET UNITYSDK_OFFSET(0x901E30)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x2E8B50)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x901F90)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x901EA0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x901F10)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x577FD0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeInternal_TypeDefinitionIndex = 34045;

	struct alignas(8) AttributeInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Data; // 0x18
		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility m_Visibility; // 0x20

		::Epic::OnlineServices::Lobby::AttributeData* get_Data()
		{
			return ((::Epic::OnlineServices::Lobby::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Epic::OnlineServices::Lobby::AttributeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_DATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility get_Visibility()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyAttributeVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_Visibility(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_VISIBILITY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::Attribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::Attribute*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
