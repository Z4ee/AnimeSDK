#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/WriteFileDataCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BFFFCB0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BFFFC30)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_DATABUFFERLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x1BFFFC90)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1BFFFC70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BFFFC50)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C0002E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BFFFC40)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_DATABUFFERLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x1BFFFCA0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1BFFFC80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BFFFC60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1BFFFCC0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C000410)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int WriteFileDataCallbackInfo_TypeDefinitionIndex = 43352;

	class WriteFileDataCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::String* _Filename_k__BackingField; // 0x18
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

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_DataBufferLengthBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GET_DATABUFFERLENGTHBYTES_OFFSET))(this);
		}

		::System::Void set_DataBufferLengthBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_DATABUFFERLENGTHBYTES_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEDATACALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
