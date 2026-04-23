#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/AttributeDataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Sessions { class AttributeDataValue; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x8F384D0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8F384F0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_1_OFFSET UNITYSDK_OFFSET(0x8F389A0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x8F384E0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_OFFSET UNITYSDK_OFFSET(0x8F38510)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x8F38500)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F38AD0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AttributeData_TypeDefinitionIndex = 41241;

	class AttributeData : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::Epic::OnlineServices::Sessions::AttributeDataValue* _Value_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_KEY_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::AttributeDataValue* get_Value()
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Epic::OnlineServices::Sessions::AttributeDataValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeDataInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeDataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_1_OFFSET))(this, other);
		}
	};
}
