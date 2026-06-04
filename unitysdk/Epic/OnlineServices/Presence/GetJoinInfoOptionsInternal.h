#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class GetJoinInfoOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x674B0)
#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x67430)
#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x672A0)
#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x67420)
#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x67360)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int GetJoinInfoOptionsInternal_TypeDefinitionIndex = 42390;

	struct alignas(8) GetJoinInfoOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::GetJoinInfoOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::GetJoinInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
