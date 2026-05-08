#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/WriteFileCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1ADECAB0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1ADECA50)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1ADECA90)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADECA70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1ADECA30)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1ADECD90)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1ADECA60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1ADECAA0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADECA80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1ADECAD0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1ADECA40)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADECED0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int WriteFileCallbackInfo_TypeDefinitionIndex = 33905;

	class WriteFileCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::String* _Filename_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
