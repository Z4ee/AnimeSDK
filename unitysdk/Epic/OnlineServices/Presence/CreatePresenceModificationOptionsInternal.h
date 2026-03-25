#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class CreatePresenceModificationOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x60D40)
#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x60C10)
#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x60A80)
#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x60B40)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int CreatePresenceModificationOptionsInternal_TypeDefinitionIndex = 35757;

	struct alignas(8) CreatePresenceModificationOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::CreatePresenceModificationOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::CreatePresenceModificationOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
