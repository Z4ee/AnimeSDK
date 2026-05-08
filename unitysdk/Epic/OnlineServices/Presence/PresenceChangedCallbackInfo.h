#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/PresenceChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x18CDDE30)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x18CDDDD0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDDDF0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_PRESENCEUSERID_OFFSET UNITYSDK_OFFSET(0x18CDDE10)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x18CDE090)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x18CDDDE0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDDE00)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x18CDDE40)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_PRESENCEUSERID_OFFSET UNITYSDK_OFFSET(0x18CDDE20)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDE1C0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceChangedCallbackInfo_TypeDefinitionIndex = 33819;

	class PresenceChangedCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _PresenceUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_PresenceUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GET_PRESENCEUSERID_OFFSET))(this);
		}

		::System::Void set_PresenceUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_PRESENCEUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCECHANGEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
