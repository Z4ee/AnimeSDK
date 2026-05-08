#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/PresenceModificationDataRecordIdInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1AD894E0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_SET_1_OFFSET UNITYSDK_OFFSET(0x1AD89640)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1AD894F0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID_SET_OFFSET UNITYSDK_OFFSET(0x1AD89500)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDID__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD89860)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationDataRecordId_TypeDefinitionIndex = 33823;

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
