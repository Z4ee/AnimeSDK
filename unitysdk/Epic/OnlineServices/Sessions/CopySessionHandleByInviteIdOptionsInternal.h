#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class CopySessionHandleByInviteIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97F470)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x97F350)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONSINTERNAL_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x97F1D0)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x97F280)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CopySessionHandleByInviteIdOptionsInternal_TypeDefinitionIndex = 35030;

	struct alignas(8) CopySessionHandleByInviteIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_InviteId; // 0x18

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONSINTERNAL_SET_INVITEID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
