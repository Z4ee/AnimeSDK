#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class PresenceModificationDataRecordId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F0EF0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9F0BA0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9F0DD0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x9F0C50)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9F0D00)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationDataRecordIdInternal_TypeDefinitionIndex = 36046;

	struct alignas(8) PresenceModificationDataRecordIdInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::PresenceModificationDataRecordId* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationDataRecordId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDATARECORDIDINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
