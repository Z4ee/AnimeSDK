#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnFileTransferProgressCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnWriteFileDataCallback; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_CHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0xA32A710)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0xA32A6F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA32A750)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA32A6D0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_WRITEFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0xA32A730)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_CHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0xA32A720)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0xA32A700)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA32A760)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA32A6E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_WRITEFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0xA32A740)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA32A770)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int WriteFileOptions_TypeDefinitionIndex = 42493;

	class WriteFileOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* _WriteFileDataCallback_k__BackingField; // 0x18
		::System::String* _Filename_k__BackingField; // 0x20
		::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* _FileTransferProgressCallback_k__BackingField; // 0x28
		::System::UInt32 _ChunkLengthBytes_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChunkLengthBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_CHUNKLENGTHBYTES_OFFSET))(this);
		}

		::System::Void set_ChunkLengthBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_CHUNKLENGTHBYTES_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* get_WriteFileDataCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_WRITEFILEDATACALLBACK_OFFSET))(this);
		}

		::System::Void set_WriteFileDataCallback(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_WRITEFILEDATACALLBACK_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* get_FileTransferProgressCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET))(this);
		}

		::System::Void set_FileTransferProgressCallback(::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONS_SET_FILETRANSFERPROGRESSCALLBACK_OFFSET))(this, a1);
		}
	};
}
