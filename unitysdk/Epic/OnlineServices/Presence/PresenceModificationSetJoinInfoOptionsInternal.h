#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class PresenceModificationSetJoinInfoOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E23A0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8E2280)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONSINTERNAL_SET_JOININFO_OFFSET UNITYSDK_OFFSET(0x8E2100)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8E21B0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationSetJoinInfoOptionsInternal_TypeDefinitionIndex = 33830;

	struct alignas(8) PresenceModificationSetJoinInfoOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_JoinInfo; // 0x18

		::System::Void set_JoinInfo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONSINTERNAL_SET_JOININFO_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
