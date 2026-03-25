#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/ReadResult.h"

namespace Epic::OnlineServices::TitleStorage { class CopyFileMetadataAtIndexOptions; }
namespace Epic::OnlineServices::TitleStorage { class CopyFileMetadataByFilenameOptions; }
namespace Epic::OnlineServices::TitleStorage { class DeleteCacheOptions; }
namespace Epic::OnlineServices::TitleStorage { class FileMetadata; }
namespace Epic::OnlineServices::TitleStorage { class GetFileMetadataCountOptions; }
namespace Epic::OnlineServices::TitleStorage { class OnDeleteCacheCompleteCallback; }
namespace Epic::OnlineServices::TitleStorage { class OnQueryFileCompleteCallback; }
namespace Epic::OnlineServices::TitleStorage { class OnQueryFileListCompleteCallback; }
namespace Epic::OnlineServices::TitleStorage { class OnReadFileCompleteCallback; }
namespace Epic::OnlineServices::TitleStorage { class QueryFileListOptions; }
namespace Epic::OnlineServices::TitleStorage { class QueryFileOptions; }
namespace Epic::OnlineServices::TitleStorage { class ReadFileOptions; }
namespace Epic::OnlineServices::TitleStorage { class TitleStorageFileTransferRequest; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_COPYFILEMETADATAATINDEX_OFFSET UNITYSDK_OFFSET(0x83C9260)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_COPYFILEMETADATABYFILENAME_OFFSET UNITYSDK_OFFSET(0x83C94F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_DELETECACHE_OFFSET UNITYSDK_OFFSET(0x83C96F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_GETFILEMETADATACOUNT_OFFSET UNITYSDK_OFFSET(0x83C9940)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONDELETECACHECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C8E50)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONFILETRANSFERPROGRESSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C8EE0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONQUERYFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C8FB0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONQUERYFILELISTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C9040)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONREADFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C90D0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONREADFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C9160)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_QUERYFILELIST_OFFSET UNITYSDK_OFFSET(0x83C9CF0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_QUERYFILE_OFFSET UNITYSDK_OFFSET(0x83C9B30)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_READFILE_OFFSET UNITYSDK_OFFSET(0x83C9EB0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x83C9250)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x83C9240)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int TitleStorageInterface_TypeDefinitionIndex = 35376;

	class TitleStorageInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 CopyfilemetadataatindexoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyfilemetadatabyfilenameoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DeletecacheoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 FilemetadataApiLatest = 0x2; // 0x0
		// static const ::System::Int32 FilenameMaxLengthBytes = 0x40; // 0x0
		// static const ::System::Int32 GetfilemetadatacountoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryfilelistoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryfileoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ReadfileoptionsApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyFileMetadataAtIndex(::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptions* options, ::Epic::OnlineServices::TitleStorage::FileMetadata*& outMetadata)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptions*, ::Epic::OnlineServices::TitleStorage::FileMetadata*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_COPYFILEMETADATAATINDEX_OFFSET))(this, options, outMetadata);
		}

		::Epic::OnlineServices::Result CopyFileMetadataByFilename(::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions* options, ::Epic::OnlineServices::TitleStorage::FileMetadata*& outMetadata)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions*, ::Epic::OnlineServices::TitleStorage::FileMetadata*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_COPYFILEMETADATABYFILENAME_OFFSET))(this, options, outMetadata);
		}

		::Epic::OnlineServices::Result DeleteCache(::Epic::OnlineServices::TitleStorage::DeleteCacheOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallback* completionCallback)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::DeleteCacheOptions*, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_DELETECACHE_OFFSET))(this, options, clientData, completionCallback);
		}

		::System::UInt32 GetFileMetadataCount(::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_GETFILEMETADATACOUNT_OFFSET))(this, options);
		}

		::System::Void QueryFile(::Epic::OnlineServices::TitleStorage::QueryFileOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback* completionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileOptions*, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_QUERYFILE_OFFSET))(this, options, clientData, completionCallback);
		}

		::System::Void QueryFileList(::Epic::OnlineServices::TitleStorage::QueryFileListOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallback* completionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileListOptions*, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_QUERYFILELIST_OFFSET))(this, options, clientData, completionCallback);
		}

		::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest* ReadFile(::Epic::OnlineServices::TitleStorage::ReadFileOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallback* completionCallback)
		{
			return ((::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::ReadFileOptions*, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_READFILE_OFFSET))(this, options, clientData, completionCallback);
		}

		static ::System::Void OnDeleteCacheCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONDELETECACHECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnFileTransferProgressCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONFILETRANSFERPROGRESSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryFileCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONQUERYFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryFileListCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONQUERYFILELISTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnReadFileCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONREADFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::Epic::OnlineServices::TitleStorage::ReadResult OnReadFileDataCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONREADFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
