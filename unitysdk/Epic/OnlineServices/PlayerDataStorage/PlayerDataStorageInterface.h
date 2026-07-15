#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/ReadResult.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/WriteResult.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::PlayerDataStorage { class CopyFileMetadataAtIndexOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class CopyFileMetadataByFilenameOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class DeleteCacheOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class DeleteFileOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class DuplicateFileOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class FileMetadata; }
namespace Epic::OnlineServices::PlayerDataStorage { class GetFileMetadataCountOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnDeleteCacheCompleteCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnDeleteFileCompleteCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnDuplicateFileCompleteCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnQueryFileCompleteCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnQueryFileListCompleteCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnReadFileCompleteCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnWriteFileCompleteCallback; }
namespace Epic::OnlineServices::PlayerDataStorage { class PlayerDataStorageFileTransferRequest; }
namespace Epic::OnlineServices::PlayerDataStorage { class QueryFileListOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class QueryFileOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class ReadFileOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class WriteFileOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_COPYFILEMETADATAATINDEX_OFFSET UNITYSDK_OFFSET(0x1BFFA6D0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_COPYFILEMETADATABYFILENAME_OFFSET UNITYSDK_OFFSET(0x1BFFA980)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DELETECACHE_OFFSET UNITYSDK_OFFSET(0x1BFFAB80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x1BFFADF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DUPLICATEFILE_OFFSET UNITYSDK_OFFSET(0x1BFFAFD0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_GETFILEMETADATACOUNT_OFFSET UNITYSDK_OFFSET(0x1BFFB1B0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDELETECACHECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFF9E70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDELETEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFF9F10)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDUPLICATEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFF9FB0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONFILETRANSFERPROGRESSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFFA050)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONQUERYFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFFA120)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONQUERYFILELISTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFFA1C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONREADFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFFA260)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONREADFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFFA300)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONWRITEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFFA3F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONWRITEFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BFFA490)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_QUERYFILELIST_OFFSET UNITYSDK_OFFSET(0x1BFFB580)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_QUERYFILE_OFFSET UNITYSDK_OFFSET(0x1BFFB3A0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_READFILE_OFFSET UNITYSDK_OFFSET(0x1BFFB7E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_WRITEFILE_OFFSET UNITYSDK_OFFSET(0x1BFFBDE0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BFFA6C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFFA6B0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int PlayerDataStorageInterface_TypeDefinitionIndex = 43334;

	class PlayerDataStorageInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 CopyfilemetadataatindexoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyfilemetadatabyfilenameoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DeletecacheoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DeletefileoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DuplicatefileoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 FileMaxSizeBytes = 0x4000000; // 0x0
		// static const ::System::Int32 FilemetadataApiLatest = 0x3; // 0x0
		// static const ::System::Int32 FilenameMaxLengthBytes = 0x40; // 0x0
		// static const ::System::Int32 GetfilemetadatacountoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryfilelistoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryfileoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ReadfileoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 WritefileoptionsApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopyFileMetadataAtIndex(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions* a1, ::Epic::OnlineServices::PlayerDataStorage::FileMetadata*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions*, ::Epic::OnlineServices::PlayerDataStorage::FileMetadata*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_COPYFILEMETADATAATINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyFileMetadataByFilename(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions* a1, ::Epic::OnlineServices::PlayerDataStorage::FileMetadata*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions*, ::Epic::OnlineServices::PlayerDataStorage::FileMetadata*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_COPYFILEMETADATABYFILENAME_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result DeleteCache(::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallback* a3)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DELETECACHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeleteFile(::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DELETEFILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DuplicateFile(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DUPLICATEFILE_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result GetFileMetadataCount(::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions* a1, ::System::Int32& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions*, ::System::Int32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_GETFILEMETADATACOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void QueryFile(::Epic::OnlineServices::PlayerDataStorage::QueryFileOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::QueryFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_QUERYFILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryFileList(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_QUERYFILELIST_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* ReadFile(::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallback* a3)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_READFILE_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* WriteFile(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallback* a3)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_WRITEFILE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnDeleteCacheCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDELETECACHECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnDeleteFileCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDELETEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnDuplicateFileCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDUPLICATEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnFileTransferProgressCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONFILETRANSFERPROGRESSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryFileCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONQUERYFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryFileListCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONQUERYFILELISTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnReadFileCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONREADFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::Epic::OnlineServices::PlayerDataStorage::ReadResult OnReadFileDataCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::ReadResult(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONREADFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnWriteFileCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONWRITEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::Epic::OnlineServices::PlayerDataStorage::WriteResult OnWriteFileDataCallbackInternalImplementation(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32& a3)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::System::IntPtr, ::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONWRITEFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1, a2, a3);
		}
	};
}
