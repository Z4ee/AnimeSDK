#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnFileTransferProgressCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnWriteFileDataCallback; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_CHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x1ADECF20)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1ADECF00)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADECF60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADECEE0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_WRITEFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADECF40)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_CHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x1ADECF30)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1ADECF10)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADECF70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADECEF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_WRITEFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADECF50)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADECF80)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int WriteFileOptions_TypeDefinitionIndex = 33909;

	class WriteFileOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* _FileTransferProgressCallback_k__BackingField; // 0x18
		::System::String* _Filename_k__BackingField; // 0x20
		::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* _WriteFileDataCallback_k__BackingField; // 0x28
		::System::UInt32 _ChunkLengthBytes_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_FILENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_ChunkLengthBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_CHUNKLENGTHBYTES_OFFSET))(this);
		}

		::System::Void set_ChunkLengthBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_CHUNKLENGTHBYTES_OFFSET))(this, value);
		}

		::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* get_WriteFileDataCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_WRITEFILEDATACALLBACK_OFFSET))(this);
		}

		::System::Void set_WriteFileDataCallback(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_WRITEFILEDATACALLBACK_OFFSET))(this, value);
		}

		::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* get_FileTransferProgressCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET))(this);
		}

		::System::Void set_FileTransferProgressCallback(::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_FILETRANSFERPROGRESSCALLBACK_OFFSET))(this, value);
		}
	};
}
