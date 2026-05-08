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

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_COPYFILEMETADATAATINDEX_OFFSET UNITYSDK_OFFSET(0x1A86E030)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_COPYFILEMETADATABYFILENAME_OFFSET UNITYSDK_OFFSET(0x1A86E2E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DELETECACHE_OFFSET UNITYSDK_OFFSET(0x1A86E4E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x1A86E740)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DUPLICATEFILE_OFFSET UNITYSDK_OFFSET(0x1A86E900)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_GETFILEMETADATACOUNT_OFFSET UNITYSDK_OFFSET(0x1A86EAC0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDELETECACHECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86D850)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDELETEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86D8E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDUPLICATEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86D970)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONFILETRANSFERPROGRESSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86DA00)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONQUERYFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86DAD0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONQUERYFILELISTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86DB60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONREADFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86DBF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONREADFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86DC80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONWRITEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86DD60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONWRITEFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86DDF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_QUERYFILELIST_OFFSET UNITYSDK_OFFSET(0x1A86EE70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_QUERYFILE_OFFSET UNITYSDK_OFFSET(0x1A86ECB0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_READFILE_OFFSET UNITYSDK_OFFSET(0x1A86F0C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_WRITEFILE_OFFSET UNITYSDK_OFFSET(0x1A86F6F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A86E020)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A86E010)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int PlayerDataStorageInterface_TypeDefinitionIndex = 33889;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyFileMetadataAtIndex(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions* copyFileMetadataOptions, ::Epic::OnlineServices::PlayerDataStorage::FileMetadata*& outMetadata)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions*, ::Epic::OnlineServices::PlayerDataStorage::FileMetadata*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_COPYFILEMETADATAATINDEX_OFFSET))(this, copyFileMetadataOptions, outMetadata);
		}

		::Epic::OnlineServices::Result CopyFileMetadataByFilename(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions* copyFileMetadataOptions, ::Epic::OnlineServices::PlayerDataStorage::FileMetadata*& outMetadata)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions*, ::Epic::OnlineServices::PlayerDataStorage::FileMetadata*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_COPYFILEMETADATABYFILENAME_OFFSET))(this, copyFileMetadataOptions, outMetadata);
		}

		::Epic::OnlineServices::Result DeleteCache(::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallback* completionCallback)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DELETECACHE_OFFSET))(this, options, clientData, completionCallback);
		}

		::System::Void DeleteFile(::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptions* deleteOptions, ::System::Object* clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallback* completionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DELETEFILE_OFFSET))(this, deleteOptions, clientData, completionCallback);
		}

		::System::Void DuplicateFile(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions* duplicateOptions, ::System::Object* clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallback* completionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_DUPLICATEFILE_OFFSET))(this, duplicateOptions, clientData, completionCallback);
		}

		::Epic::OnlineServices::Result GetFileMetadataCount(::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions* getFileMetadataCountOptions, ::System::Int32& outFileMetadataCount)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions*, ::System::Int32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_GETFILEMETADATACOUNT_OFFSET))(this, getFileMetadataCountOptions, outFileMetadataCount);
		}

		::System::Void QueryFile(::Epic::OnlineServices::PlayerDataStorage::QueryFileOptions* queryFileOptions, ::System::Object* clientData, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallback* completionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::QueryFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_QUERYFILE_OFFSET))(this, queryFileOptions, clientData, completionCallback);
		}

		::System::Void QueryFileList(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions* queryFileListOptions, ::System::Object* clientData, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallback* completionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_QUERYFILELIST_OFFSET))(this, queryFileListOptions, clientData, completionCallback);
		}

		::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* ReadFile(::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions* readOptions, ::System::Object* clientData, ::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallback* completionCallback)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_READFILE_OFFSET))(this, readOptions, clientData, completionCallback);
		}

		::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* WriteFile(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions* writeOptions, ::System::Object* clientData, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallback* completionCallback)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions*, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_WRITEFILE_OFFSET))(this, writeOptions, clientData, completionCallback);
		}

		static ::System::Void OnDeleteCacheCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDELETECACHECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnDeleteFileCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDELETEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnDuplicateFileCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONDUPLICATEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnFileTransferProgressCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONFILETRANSFERPROGRESSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryFileCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONQUERYFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryFileListCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONQUERYFILELISTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnReadFileCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONREADFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::Epic::OnlineServices::PlayerDataStorage::ReadResult OnReadFileDataCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::ReadResult(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONREADFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnWriteFileCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONWRITEFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::Epic::OnlineServices::PlayerDataStorage::WriteResult OnWriteFileDataCallbackInternalImplementation(::System::IntPtr data, ::System::IntPtr outDataBuffer, ::System::UInt32& outDataWritten)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::System::IntPtr, ::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_PLAYERDATASTORAGEINTERFACE_ONWRITEFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET))(data, outDataBuffer, outDataWritten);
		}
	};
}
