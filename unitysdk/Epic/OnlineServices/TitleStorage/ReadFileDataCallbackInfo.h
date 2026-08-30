#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/ReadFileDataCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xB164B90)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB164AD0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_DATACHUNK_OFFSET UNITYSDK_OFFSET(0xB164B70)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0xB164B10)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_ISLASTCHUNK_OFFSET UNITYSDK_OFFSET(0xB164B50)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB164AF0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_TOTALFILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0xB164B30)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB1654B0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB164AE0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_DATACHUNK_OFFSET UNITYSDK_OFFSET(0xB164B80)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0xB164B20)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_ISLASTCHUNK_OFFSET UNITYSDK_OFFSET(0xB164B60)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB164B00)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xB164BA0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_TOTALFILESIZEBYTES_OFFSET UNITYSDK_OFFSET(0xB164B40)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB1655F0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int ReadFileDataCallbackInfo_TypeDefinitionIndex = 45042;

	class ReadFileDataCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Il2CppArray<::System::Byte>* _DataChunk_k__BackingField; // 0x18
		::System::String* _Filename_k__BackingField; // 0x20
		::System::Object* _ClientData_k__BackingField; // 0x28
		::System::UInt32 _TotalFileSizeBytes_k__BackingField; // 0x30
		::System::Boolean _IsLastChunk_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalFileSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_TOTALFILESIZEBYTES_OFFSET))(this);
		}

		::System::Void set_TotalFileSizeBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_TOTALFILESIZEBYTES_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLastChunk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_ISLASTCHUNK_OFFSET))(this);
		}

		::System::Void set_IsLastChunk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_ISLASTCHUNK_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_DataChunk()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GET_DATACHUNK_OFFSET))(this);
		}

		::System::Void set_DataChunk(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_DATACHUNK_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEDATACALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
