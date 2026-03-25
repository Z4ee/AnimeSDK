#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/AttributeDataValueInternal.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AttributeData; }
namespace Epic::OnlineServices::Lobby { class AttributeDataValue; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x46800)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x464A0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x46600)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x46790)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x46550)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x46780)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x46710)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeDataInternal_TypeDefinitionIndex = 36002;

	struct alignas(8) AttributeDataInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::Epic::OnlineServices::Lobby::AttributeDataValueInternal m_Value; // 0x20

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Lobby::AttributeDataValue* get_Value()
		{
			return ((::Epic::OnlineServices::Lobby::AttributeDataValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Epic::OnlineServices::Lobby::AttributeDataValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::AttributeData* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
