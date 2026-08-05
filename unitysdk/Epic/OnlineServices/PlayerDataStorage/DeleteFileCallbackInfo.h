#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/DeleteFileCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DCACB50)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DCACB10)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DCACB30)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DCACAF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DCACD00)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DCACB20)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DCACB40)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DCACB70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DCACB00)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCACF20)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int DeleteFileCallbackInfo_TypeDefinitionIndex = 36076;

	class DeleteFileCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETEFILECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
