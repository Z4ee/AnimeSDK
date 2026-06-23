#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONS_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1C828110)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONS_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1C828120)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C828130)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CopySessionHandleByInviteIdOptions_TypeDefinitionIndex = 35029;

	class CopySessionHandleByInviteIdOptions : public ::System::Object
	{
	public:
		::System::String* _InviteId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONS_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEBYINVITEIDOPTIONS_SET_INVITEID_OFFSET))(this, value);
		}
	};
}
