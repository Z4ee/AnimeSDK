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

#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_COPYFILEMETADATAATINDEX_OFFSET UNITYSDK_OFFSET(0x1D442940)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_COPYFILEMETADATABYFILENAME_OFFSET UNITYSDK_OFFSET(0x1D442BD0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_DELETECACHE_OFFSET UNITYSDK_OFFSET(0x1D442DD0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_GETFILEMETADATACOUNT_OFFSET UNITYSDK_OFFSET(0x1D443030)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONDELETECACHECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D4424E0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONFILETRANSFERPROGRESSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D442580)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONQUERYFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D442650)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONQUERYFILELISTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D4426F0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONREADFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D442790)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONREADFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D442830)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_QUERYFILELIST_OFFSET UNITYSDK_OFFSET(0x1D443400)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_QUERYFILE_OFFSET UNITYSDK_OFFSET(0x1D443220)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_READFILE_OFFSET UNITYSDK_OFFSET(0x1D4435E0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D442930)
#define EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D442920)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int TitleStorageInterface_TypeDefinitionIndex = 45048;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopyFileMetadataAtIndex(::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptions* a1, ::Epic::OnlineServices::TitleStorage::FileMetadata*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptions*, ::Epic::OnlineServices::TitleStorage::FileMetadata*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_COPYFILEMETADATAATINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyFileMetadataByFilename(::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions* a1, ::Epic::OnlineServices::TitleStorage::FileMetadata*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions*, ::Epic::OnlineServices::TitleStorage::FileMetadata*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_COPYFILEMETADATABYFILENAME_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result DeleteCache(::Epic::OnlineServices::TitleStorage::DeleteCacheOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallback* a3)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::DeleteCacheOptions*, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_DELETECACHE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetFileMetadataCount(::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_GETFILEMETADATACOUNT_OFFSET))(this, a1);
		}

		::System::Void QueryFile(::Epic::OnlineServices::TitleStorage::QueryFileOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileOptions*, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_QUERYFILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryFileList(::Epic::OnlineServices::TitleStorage::QueryFileListOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::QueryFileListOptions*, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_QUERYFILELIST_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest* ReadFile(::Epic::OnlineServices::TitleStorage::ReadFileOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallback* a3)
		{
			return ((::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::ReadFileOptions*, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_READFILE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnDeleteCacheCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONDELETECACHECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnFileTransferProgressCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONFILETRANSFERPROGRESSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryFileCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONQUERYFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryFileListCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONQUERYFILELISTCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnReadFileCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONREADFILECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::Epic::OnlineServices::TitleStorage::ReadResult OnReadFileDataCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::Epic::OnlineServices::TitleStorage::ReadResult(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_TITLESTORAGEINTERFACE_ONREADFILEDATACALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
