#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x839EFA0)
#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x839EFC0)
#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x839EFB0)
#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x839EFD0)
#define EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x839EFE0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int IsUserInSessionOptions_TypeDefinitionIndex = 35445;

	class IsUserInSessionOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::String* _SessionName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ISUSERINSESSIONOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
