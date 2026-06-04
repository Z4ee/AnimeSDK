#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::TitleStorage { class OnFileTransferProgressCallback; }
namespace Epic::OnlineServices::TitleStorage { class OnReadFileDataCallback; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0xA0FE970)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0FE9D0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0FE950)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_READCHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0xA0FE990)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_READFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0xA0FE9B0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0xA0FE980)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0FE9E0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0FE960)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_READCHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0xA0FE9A0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_READFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0xA0FE9C0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0FE9F0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int ReadFileOptions_TypeDefinitionIndex = 42001;

	class ReadFileOptions : public ::System::Object
	{
	public:
		::System::String* _Filename_k__BackingField; // 0x10
		::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback* _FileTransferProgressCallback_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback* _ReadFileDataCallback_k__BackingField; // 0x28
		::System::UInt32 _ReadChunkLengthBytes_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReadChunkLengthBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_READCHUNKLENGTHBYTES_OFFSET))(this);
		}

		::System::Void set_ReadChunkLengthBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_READCHUNKLENGTHBYTES_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback* get_ReadFileDataCallback()
		{
			return ((::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_READFILEDATACALLBACK_OFFSET))(this);
		}

		::System::Void set_ReadFileDataCallback(::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_READFILEDATACALLBACK_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback* get_FileTransferProgressCallback()
		{
			return ((::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET))(this);
		}

		::System::Void set_FileTransferProgressCallback(::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_READFILEOPTIONS_SET_FILETRANSFERPROGRESSCALLBACK_OFFSET))(this, a1);
		}
	};
}
