#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LinkAccountFlags.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_GET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x1D76BD60)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_GET_LINKACCOUNTFLAGS_OFFSET UNITYSDK_OFFSET(0x1DF6E740)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D76BD80)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x1D76BD70)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_SET_LINKACCOUNTFLAGS_OFFSET UNITYSDK_OFFSET(0x1D76BD50)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D76BD90)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D76BDA0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LinkAccountOptions_TypeDefinitionIndex = 46220;

	class LinkAccountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ContinuanceToken* _ContinuanceToken_k__BackingField; // 0x18
		::Epic::OnlineServices::Auth::LinkAccountFlags _LinkAccountFlags_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Auth::LinkAccountFlags get_LinkAccountFlags()
		{
			return ((::Epic::OnlineServices::Auth::LinkAccountFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_GET_LINKACCOUNTFLAGS_OFFSET))(this);
		}

		::System::Void set_LinkAccountFlags(::Epic::OnlineServices::Auth::LinkAccountFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LinkAccountFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_SET_LINKACCOUNTFLAGS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken()
		{
			return ((::Epic::OnlineServices::ContinuanceToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_GET_CONTINUANCETOKEN_OFFSET))(this);
		}

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_SET_CONTINUANCETOKEN_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
