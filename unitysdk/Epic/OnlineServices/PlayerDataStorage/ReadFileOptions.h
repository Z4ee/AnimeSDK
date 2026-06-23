#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnFileTransferProgressCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnReadFileDataCallback; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1CC5ACA0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC5AD00)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC5AC80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_READCHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x1CC5ACC0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_READFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC5ACE0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1CC5ACB0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC5AD10)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC5AC90)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_READCHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x1CC5ACD0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_READFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC5ACF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5AD20)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int ReadFileOptions_TypeDefinitionIndex = 35465;

	class ReadFileOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback* _ReadFileDataCallback_k__BackingField; // 0x10
		::System::String* _Filename_k__BackingField; // 0x18
		::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* _FileTransferProgressCallback_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28
		::System::UInt32 _ReadChunkLengthBytes_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_FILENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_ReadChunkLengthBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_READCHUNKLENGTHBYTES_OFFSET))(this);
		}

		::System::Void set_ReadChunkLengthBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_READCHUNKLENGTHBYTES_OFFSET))(this, value);
		}

		::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback* get_ReadFileDataCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_READFILEDATACALLBACK_OFFSET))(this);
		}

		::System::Void set_ReadFileDataCallback(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_READFILEDATACALLBACK_OFFSET))(this, value);
		}

		::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* get_FileTransferProgressCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET))(this);
		}

		::System::Void set_FileTransferProgressCallback(::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONS_SET_FILETRANSFERPROGRESSCALLBACK_OFFSET))(this, value);
		}
	};
}
