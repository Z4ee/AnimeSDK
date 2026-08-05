#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/DeleteCacheCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CC4A410)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CC4A3D0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC4A3F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CC4A3B0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1CC4A5C0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CC4A3E0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC4A400)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1CC4A430)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CC4A3C0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4A7E0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int DeleteCacheCallbackInfo_TypeDefinitionIndex = 35605;

	class DeleteCacheCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::TitleStorage::DeleteCacheCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
