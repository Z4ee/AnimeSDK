#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/ReadFileCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1ADF3E10)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1ADF3DB0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1ADF3DF0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADF3DD0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1ADF3D90)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1ADF40F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1ADF3DC0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1ADF3E00)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADF3DE0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1ADF3E30)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1ADF3DA0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF4230)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int ReadFileCallbackInfo_TypeDefinitionIndex = 33413;

	class ReadFileCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _Filename_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
