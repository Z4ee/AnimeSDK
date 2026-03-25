#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS_GET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x86240E0)
#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86240C0)
#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x86240F0)
#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86240D0)
#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8624100)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int LinkAccountOptions_TypeDefinitionIndex = 36472;

	class LinkAccountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ContinuanceToken* _ContinuanceToken_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken()
		{
			return ((::Epic::OnlineServices::ContinuanceToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS_GET_CONTINUANCETOKEN_OFFSET))(this);
		}

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONS_SET_CONTINUANCETOKEN_OFFSET))(this, value);
		}
	};
}
