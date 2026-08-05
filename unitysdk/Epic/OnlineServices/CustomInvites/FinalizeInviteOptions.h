#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_CUSTOMINVITEID_OFFSET UNITYSDK_OFFSET(0x1C9C4590)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C9C4570)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_PROCESSINGRESULT_OFFSET UNITYSDK_OFFSET(0x1C9C45B0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C9C4550)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_CUSTOMINVITEID_OFFSET UNITYSDK_OFFSET(0x1C9C45A0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C9C4580)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_PROCESSINGRESULT_OFFSET UNITYSDK_OFFSET(0x1C9C45C0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C9C4560)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C45D0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int FinalizeInviteOptions_TypeDefinitionIndex = 36678;

	class FinalizeInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18
		::System::String* _CustomInviteId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ProcessingResult_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_CustomInviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_CUSTOMINVITEID_OFFSET))(this);
		}

		::System::Void set_CustomInviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_CUSTOMINVITEID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Result get_ProcessingResult()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_PROCESSINGRESULT_OFFSET))(this);
		}

		::System::Void set_ProcessingResult(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_PROCESSINGRESULT_OFFSET))(this, value);
		}
	};
}
