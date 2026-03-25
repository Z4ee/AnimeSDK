#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/UI/HideFriendsCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x83CAA20)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x83CA9E0)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83CAA00)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x83CA9C0)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x83CAE20)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x83CA9F0)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83CAA10)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x83CAA40)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x83CA9D0)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x83CAF30)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int HideFriendsCallbackInfo_TypeDefinitionIndex = 35307;

	class HideFriendsCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UI::HideFriendsCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UI::HideFriendsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
