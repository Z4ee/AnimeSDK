#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::CustomInvites { class FinalizeInviteOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x35AE0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x35A70)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_CUSTOMINVITEID_OFFSET UNITYSDK_OFFSET(0x359B0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x358F0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x35A60)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_PROCESSINGRESULT_OFFSET UNITYSDK_OFFSET(0xAC20)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x35830)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int FinalizeInviteOptionsInternal_TypeDefinitionIndex = 36412;

	struct alignas(8) FinalizeInviteOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_CustomInviteId; // 0x28
		::Epic::OnlineServices::Result m_ProcessingResult; // 0x30

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_CustomInviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_CUSTOMINVITEID_OFFSET))(this, value);
		}

		::System::Void set_ProcessingResult(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_PROCESSINGRESULT_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_FINALIZEINVITEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
