#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/AttributeDataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Lobby { class AttributeDataValue; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B60D720)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B60D740)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_1_OFFSET UNITYSDK_OFFSET(0x1B60D930)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1B60D730)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1B60D760)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B60D750)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B60DB90)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeData_TypeDefinitionIndex = 35609;

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

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_KEY_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Lobby::AttributeDataValue* get_Value()
		{
			return ((::Epic::OnlineServices::Lobby::AttributeDataValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Epic::OnlineServices::Lobby::AttributeDataValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeDataInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeDataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_1_OFFSET))(this, other);
		}
	};
}
