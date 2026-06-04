#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/PresenceChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA32FB20)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA32FAC0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA32FAE0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_PRESENCEUSERID_OFFSET UNITYSDK_OFFSET(0xA32FB00)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA330050)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA32FAD0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA32FAF0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA32FB30)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_PRESENCEUSERID_OFFSET UNITYSDK_OFFSET(0xA32FB10)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA330170)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceChangedCallbackInfo_TypeDefinitionIndex = 42403;

	class PresenceChangedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _PresenceUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_PresenceUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_PRESENCEUSERID_OFFSET))(this);
		}

		::System::Void set_PresenceUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_PRESENCEUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
