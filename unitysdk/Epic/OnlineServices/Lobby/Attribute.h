#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/AttributeInternal.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyAttributeVisibility.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Lobby { class AttributeData; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C2B12B0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1C2B12D0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_SET_1_OFFSET UNITYSDK_OFFSET(0x1C2B14C0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1C2B12C0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_SET_OFFSET UNITYSDK_OFFSET(0x1C2B12F0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1C2B12E0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B15E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int Attribute_TypeDefinitionIndex = 43489;

	class Attribute : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Lobby::AttributeData* _Data_k__BackingField; // 0x10
		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility _Visibility_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Lobby::AttributeData* get_Data()
		{
			return ((::Epic::OnlineServices::Lobby::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Epic::OnlineServices::Lobby::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_SET_DATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility get_Visibility()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyAttributeVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_Visibility(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_SET_VISIBILITY_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTE_SET_1_OFFSET))(this, a1);
		}
	};
}
