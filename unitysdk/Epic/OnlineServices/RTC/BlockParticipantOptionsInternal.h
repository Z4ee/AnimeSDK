#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTC { class BlockParticipantOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x66A10)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x669A0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_BLOCKED_OFFSET UNITYSDK_OFFSET(0x668E0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x666B0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x66990)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x66820)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x66770)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int BlockParticipantOptionsInternal_TypeDefinitionIndex = 41525;

	struct alignas(8) BlockParticipantOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_ParticipantId; // 0x28
		::System::Int32 m_Blocked; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::System::Void set_Blocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_BLOCKED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::BlockParticipantOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::BlockParticipantOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
