#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/QueryInvitesCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xB39EED0)
#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB39EE90)
#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB39EEB0)
#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB39EE70)
#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB39F2D0)
#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB39EEA0)
#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB39EEC0)
#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xB39EEF0)
#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB39EE80)
#define EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB39F3F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int QueryInvitesCallbackInfo_TypeDefinitionIndex = 45830;

	class QueryInvitesCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_QUERYINVITESCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
