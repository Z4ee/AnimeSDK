#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_CUSTOMINVITEID_OFFSET UNITYSDK_OFFSET(0xA2AA140)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2AA120)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_PROCESSINGRESULT_OFFSET UNITYSDK_OFFSET(0xA2AA160)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2AA100)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_CUSTOMINVITEID_OFFSET UNITYSDK_OFFSET(0xA2AA150)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2AA130)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_PROCESSINGRESULT_OFFSET UNITYSDK_OFFSET(0xA2AA170)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2AA110)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2AA180)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int FinalizeInviteOptions_TypeDefinitionIndex = 43040;

	class FinalizeInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
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

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_CustomInviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_CUSTOMINVITEID_OFFSET))(this);
		}

		::System::Void set_CustomInviteId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_CUSTOMINVITEID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result get_ProcessingResult()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_GET_PROCESSINGRESULT_OFFSET))(this);
		}

		::System::Void set_ProcessingResult(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONS_SET_PROCESSINGRESULT_OFFSET))(this, a1);
		}
	};
}
