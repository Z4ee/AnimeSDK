#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/AttributeDataValueInternal.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AttributeData; }
namespace Epic::OnlineServices::Lobby { class AttributeDataValue; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4B980)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x4B610)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x4B770)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4B900)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x4B6C0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x4B8F0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x4B880)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeDataInternal_TypeDefinitionIndex = 42631;

	struct alignas(8) AttributeDataInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::Epic::OnlineServices::Lobby::AttributeDataValueInternal m_Value; // 0x20

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_KEY_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Lobby::AttributeDataValue* get_Value()
		{
			return ((::Epic::OnlineServices::Lobby::AttributeDataValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Epic::OnlineServices::Lobby::AttributeDataValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
