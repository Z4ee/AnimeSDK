#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/PresenceModificationDataRecordIdInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_GET_KEY_OFFSET UNITYSDK_OFFSET(0x86D5920)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_SET_1_OFFSET UNITYSDK_OFFSET(0x86D5B30)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_SET_KEY_OFFSET UNITYSDK_OFFSET(0x86D5930)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_SET_OFFSET UNITYSDK_OFFSET(0x86D5940)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID__CTOR_OFFSET UNITYSDK_OFFSET(0x86D5D40)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationDataRecordId_TypeDefinitionIndex = 35778;

	class PresenceModificationDataRecordId : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_SET_KEY_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::PresenceModificationDataRecordIdInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_SET_1_OFFSET))(this, other);
		}
	};
}
