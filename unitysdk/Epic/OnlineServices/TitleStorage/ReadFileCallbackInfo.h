#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/ReadFileCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8BEEE90)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8BEEE30)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x8BEEE70)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8BEEE50)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8BEEE10)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8BEF470)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8BEEE40)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x8BEEE80)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8BEEE60)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8BEEEB0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8BEEE20)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8BEF5A0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int ReadFileCallbackInfo_TypeDefinitionIndex = 41194;

	class ReadFileCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _Filename_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
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
