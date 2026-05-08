#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAdmin { class SetParticipantHardMuteOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E2D00)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8E2C90)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_MUTE_OFFSET UNITYSDK_OFFSET(0x8E2BD0)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8E2C80)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8E2A60)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8E2B10)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int SetParticipantHardMuteOptionsInternal_TypeDefinitionIndex = 33734;

	struct alignas(8) SetParticipantHardMuteOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_RoomName; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20
		::System::Int32 m_Mute; // 0x28

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_Mute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_MUTE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
