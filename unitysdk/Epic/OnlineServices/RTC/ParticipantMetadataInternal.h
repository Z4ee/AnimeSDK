#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTC { class ParticipantMetadata; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C15A70)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x3C15720)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3C15880)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C159F0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x3C157D0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C159E0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x3C15930)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int ParticipantMetadataInternal_TypeDefinitionIndex = 45394;

	struct alignas(8) ParticipantMetadataInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::System::IntPtr m_Value; // 0x20

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_KEY_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::ParticipantMetadata* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::ParticipantMetadata*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTMETADATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
