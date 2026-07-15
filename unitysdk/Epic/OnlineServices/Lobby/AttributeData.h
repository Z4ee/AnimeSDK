#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/AttributeDataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Lobby { class AttributeDataValue; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C2B15F0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C2B1610)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_1_OFFSET UNITYSDK_OFFSET(0x1C2B1AC0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1C2B1600)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1C2B1630)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C2B1620)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B1BF0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeData_TypeDefinitionIndex = 43491;

	class AttributeData : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Lobby::AttributeDataValue* _Value_k__BackingField; // 0x10
		::System::String* _Key_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_KEY_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Lobby::AttributeDataValue* get_Value()
		{
			return ((::Epic::OnlineServices::Lobby::AttributeDataValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Epic::OnlineServices::Lobby::AttributeDataValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeDataInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeDataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_1_OFFSET))(this, a1);
		}
	};
}
