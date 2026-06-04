#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA27EFF0)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA27F000)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA27F010)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LogoutOptions_TypeDefinitionIndex = 43188;

	class LogoutOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
