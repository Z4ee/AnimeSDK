#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/DeleteCacheCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xB3C22C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB3C2280)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3C22A0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB3C2260)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB3C26C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB3C2290)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3C22B0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xB3C22E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB3C2270)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C27E0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int DeleteCacheCallbackInfo_TypeDefinitionIndex = 45477;

	class DeleteCacheCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHECALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
