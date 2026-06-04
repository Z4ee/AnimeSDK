#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/UI/HideFriendsCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA101380)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA101340)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA101360)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA101320)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA101780)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA101350)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA101370)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA1013A0)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA101330)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA1018A0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int HideFriendsCallbackInfo_TypeDefinitionIndex = 41936;

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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UI::HideFriendsCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UI::HideFriendsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
