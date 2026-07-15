#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEFORPRESENCEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C17D8E0)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEFORPRESENCEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C17D8F0)
#define EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEFORPRESENCEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17D900)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CopySessionHandleForPresenceOptions_TypeDefinitionIndex = 42915;

	class CopySessionHandleForPresenceOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEFORPRESENCEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEFORPRESENCEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYSESSIONHANDLEFORPRESENCEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
