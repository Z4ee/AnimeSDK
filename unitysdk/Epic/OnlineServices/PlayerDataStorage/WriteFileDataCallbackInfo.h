#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/WriteFileDataCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8EFF7C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8EFF740)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_DATABUFFERLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x8EFF7A0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x8EFF780)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EFF760)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8EFFDF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8EFF750)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_DATABUFFERLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x8EFF7B0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x8EFF790)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EFF770)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8EFF7D0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8EFFF20)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int WriteFileDataCallbackInfo_TypeDefinitionIndex = 41688;

	class WriteFileDataCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _Filename_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::System::UInt32 _DataBufferLengthBytes_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_FILENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_DataBufferLengthBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_DATABUFFERLENGTHBYTES_OFFSET))(this);
		}

		::System::Void set_DataBufferLengthBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_DATABUFFERLENGTHBYTES_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
