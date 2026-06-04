#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/ParticipantMetadataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA33D0C0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA33D0E0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_SET_1_OFFSET UNITYSDK_OFFSET(0xA33D4E0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_SET_KEY_OFFSET UNITYSDK_OFFSET(0xA33D0D0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_SET_OFFSET UNITYSDK_OFFSET(0xA33D100)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA33D0F0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA33D600)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int ParticipantMetadata_TypeDefinitionIndex = 42350;

	class ParticipantMetadata : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::System::String* _Value_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_SET_KEY_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTC::ParticipantMetadataInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTC::ParticipantMetadataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATA_SET_1_OFFSET))(this, a1);
		}
	};
}
