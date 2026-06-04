#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/UI/ShowFriendsCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA102FB0)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA102F70)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA102F90)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA102F50)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA1033B0)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA102F80)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA102FA0)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA102FD0)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA102F60)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA1034D0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int ShowFriendsCallbackInfo_TypeDefinitionIndex = 41958;

	class ShowFriendsCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UI::ShowFriendsCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UI::ShowFriendsCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
