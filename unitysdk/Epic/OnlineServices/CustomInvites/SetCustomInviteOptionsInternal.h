#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::CustomInvites { class SetCustomInviteOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EBEE0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9EBE70)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9EBCF0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9EBE60)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x9EBDB0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int SetCustomInviteOptionsInternal_TypeDefinitionIndex = 36695;

	struct alignas(8) SetCustomInviteOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Payload; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Payload(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_SET_PAYLOAD_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SETCUSTOMINVITEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
