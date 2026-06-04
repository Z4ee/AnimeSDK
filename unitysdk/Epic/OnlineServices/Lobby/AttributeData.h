#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/AttributeDataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Lobby { class AttributeDataValue; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA2DE570)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA2DE590)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_1_OFFSET UNITYSDK_OFFSET(0xA2DEA40)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_KEY_OFFSET UNITYSDK_OFFSET(0xA2DE580)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_OFFSET UNITYSDK_OFFSET(0xA2DE5B0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA2DE5A0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DEB70)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeData_TypeDefinitionIndex = 42630;

	class AttributeData : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::Epic::OnlineServices::Lobby::AttributeDataValue* _Value_k__BackingField; // 0x18

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
