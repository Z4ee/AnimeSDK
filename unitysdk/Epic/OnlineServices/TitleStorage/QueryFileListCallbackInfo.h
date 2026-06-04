#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/QueryFileListCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0FC6A0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0FC640)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_FILECOUNT_OFFSET UNITYSDK_OFFSET(0xA0FC680)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0FC660)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0FC620)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA0FCB00)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0FC650)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_FILECOUNT_OFFSET UNITYSDK_OFFSET(0xA0FC690)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0FC670)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA0FC6C0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0FC630)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0FCC30)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int QueryFileListCallbackInfo_TypeDefinitionIndex = 41991;

	class QueryFileListCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20
		::System::UInt32 _FileCount_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FileCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_FILECOUNT_OFFSET))(this);
		}

		::System::Void set_FileCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_FILECOUNT_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
