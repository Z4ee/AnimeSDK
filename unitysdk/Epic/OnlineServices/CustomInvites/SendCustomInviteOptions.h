#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A488B10)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS_GET_TARGETUSERIDS_OFFSET UNITYSDK_OFFSET(0x1A488B30)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A488B20)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS_SET_TARGETUSERIDS_OFFSET UNITYSDK_OFFSET(0x1A488B40)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A488B50)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int SendCustomInviteOptions_TypeDefinitionIndex = 34470;

	class SendCustomInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* _TargetUserIds_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* get_TargetUserIds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS_GET_TARGETUSERIDS_OFFSET))(this);
		}

		::System::Void set_TargetUserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONS_SET_TARGETUSERIDS_OFFSET))(this, value);
		}
	};
}
