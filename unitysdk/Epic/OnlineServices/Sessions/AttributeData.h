#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/AttributeDataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Sessions { class AttributeDataValue; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1DE58F60)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DE58F80)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_1_OFFSET UNITYSDK_OFFSET(0x1DE59430)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1DE58F70)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1DE58FA0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DE58F90)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE59560)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AttributeData_TypeDefinitionIndex = 45087;

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

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_KEY_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::AttributeDataValue* get_Value()
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Epic::OnlineServices::Sessions::AttributeDataValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeDataInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeDataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATA_SET_1_OFFSET))(this, a1);
		}
	};
}
