#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1DF037E0)
#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DF03800)
#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1DF037F0)
#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DF03810)
#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF03820)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int IsUserInSessionOptions_TypeDefinitionIndex = 45117;

	class IsUserInSessionOptions : public ::System::Object
	{
	public:
		::System::String* _SessionName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_SET_SESSIONNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}
	};
}
