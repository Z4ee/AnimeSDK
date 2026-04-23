#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class GetJoinInfoOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x61E90)
#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x61E20)
#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x61C90)
#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x61E10)
#define EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x61D50)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int GetJoinInfoOptionsInternal_TypeDefinitionIndex = 41587;

	struct alignas(8) GetJoinInfoOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::GetJoinInfoOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::GetJoinInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_GETJOININFOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
