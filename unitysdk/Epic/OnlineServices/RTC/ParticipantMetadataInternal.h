#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTC { class ParticipantMetadata; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F6790)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9F6450)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9F65B0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9F6720)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x9F6500)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9F6710)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9F6660)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int ParticipantMetadataInternal_TypeDefinitionIndex = 35989;

	struct alignas(8) ParticipantMetadataInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::System::IntPtr m_Value; // 0x20

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::ParticipantMetadata* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::ParticipantMetadata*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
