#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/BlockParticipantCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x86DCDE0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_BLOCKED_OFFSET UNITYSDK_OFFSET(0x86DCDC0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86DCD40)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86DCD60)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x86DCDA0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x86DCD20)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86DCD80)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x86DD6D0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_BLOCKED_OFFSET UNITYSDK_OFFSET(0x86DCDD0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86DCD50)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86DCD70)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x86DCE00)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x86DCDB0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x86DCD30)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86DCD90)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x86DD810)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int BlockParticipantCallbackInfo_TypeDefinitionIndex = 35696;

	class BlockParticipantCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::String* _RoomName_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28
		::System::Boolean _Blocked_k__BackingField; // 0x30
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::System::Boolean get_Blocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GET_BLOCKED_OFFSET))(this);
		}

		::System::Void set_Blocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_BLOCKED_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
