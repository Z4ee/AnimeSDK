#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/DataRecordInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_DATARECORD_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C001720)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORD_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C001740)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORD_SET_1_OFFSET UNITYSDK_OFFSET(0x1C001B40)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORD_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1C001730)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORD_SET_OFFSET UNITYSDK_OFFSET(0x1C001760)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORD_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C001750)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C001C60)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int DataRecord_TypeDefinitionIndex = 43248;

	class DataRecord : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::System::String* _Value_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORD__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORD_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORD_SET_KEY_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORD_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORD_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::DataRecordInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::DataRecordInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORD_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORD_SET_1_OFFSET))(this, a1);
		}
	};
}
