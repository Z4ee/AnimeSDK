#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTC { class BlockParticipantOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6C080)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6C000)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_BLOCKED_OFFSET UNITYSDK_OFFSET(0x6BF40)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6BD10)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x6BFF0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x6BE80)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x6BDD0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int BlockParticipantOptionsInternal_TypeDefinitionIndex = 42328;

	struct alignas(8) BlockParticipantOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_ParticipantId; // 0x28
		::System::Int32 m_Blocked; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET))(this, a1);
		}

		::System::Void set_Blocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_BLOCKED_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::BlockParticipantOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::BlockParticipantOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
