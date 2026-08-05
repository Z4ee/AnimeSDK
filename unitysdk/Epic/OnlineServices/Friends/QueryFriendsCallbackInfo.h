#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Friends/QueryFriendsCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E5D0EE0)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1E5D0EA0)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E5D0EC0)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E5D0E80)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1E5D1090)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1E5D0EB0)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E5D0ED0)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1E5D0F00)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E5D0E90)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D12B0)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int QueryFriendsCallbackInfo_TypeDefinitionIndex = 36563;

	class QueryFriendsCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Friends::QueryFriendsCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Friends::QueryFriendsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
