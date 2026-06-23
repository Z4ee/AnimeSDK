#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/ReadFileDataCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D27E870)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D27E7B0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_DATACHUNK_OFFSET UNITYSDK_OFFSET(0x1D27E850)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1D27E7F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_ISLASTCHUNK_OFFSET UNITYSDK_OFFSET(0x1D27E830)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D27E7D0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_TOTALFILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1D27E810)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1D27EDC0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D27E7C0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_DATACHUNK_OFFSET UNITYSDK_OFFSET(0x1D27E860)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1D27E800)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_ISLASTCHUNK_OFFSET UNITYSDK_OFFSET(0x1D27E840)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D27E7E0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1D27E880)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_TOTALFILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1D27E820)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27EF10)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int ReadFileDataCallbackInfo_TypeDefinitionIndex = 34978;

	class ReadFileDataCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _Filename_k__BackingField; // 0x18
		::Il2CppArray<::System::Byte>* _DataChunk_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28
		::System::Boolean _IsLastChunk_k__BackingField; // 0x30
		::System::UInt32 _TotalFileSizeBytes_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_FILENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalFileSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_TOTALFILESIZEBYTES_OFFSET))(this);
		}

		::System::Void set_TotalFileSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_TOTALFILESIZEBYTES_OFFSET))(this, value);
		}

		::System::Boolean get_IsLastChunk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_ISLASTCHUNK_OFFSET))(this);
		}

		::System::Void set_IsLastChunk(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_ISLASTCHUNK_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_DataChunk()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_DATACHUNK_OFFSET))(this);
		}

		::System::Void set_DataChunk(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_DATACHUNK_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
