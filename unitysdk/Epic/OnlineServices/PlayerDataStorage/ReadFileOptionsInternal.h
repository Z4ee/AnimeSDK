#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnFileTransferProgressCallbackInternal; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnReadFileDataCallbackInternal; }
namespace Epic::OnlineServices::PlayerDataStorage { class ReadFileOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F5F00)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF79440)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_GET_READFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0x1DF793B0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9F5E90)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x9F5DD0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9F5D10)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9F5E80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_READCHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x36CDA0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int ReadFileOptionsInternal_TypeDefinitionIndex = 36125;

	struct alignas(8) ReadFileOptionsInternal
	{
		static ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal** StaticGet_s_FileTransferProgressCallback()
		{
			return (::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal**)Il2CppClass::FromTypeDefinitionIndex(ReadFileOptionsInternal_TypeDefinitionIndex)->GetStaticField(0x29E00);
		}
		static ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal** StaticGet_s_ReadFileDataCallback()
		{
			return (::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal**)Il2CppClass::FromTypeDefinitionIndex(ReadFileOptionsInternal_TypeDefinitionIndex)->GetStaticField(0x29E08);
		}
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Filename; // 0x20
		::System::UInt32 m_ReadChunkLengthBytes; // 0x28
		::System::IntPtr m_ReadFileDataCallback; // 0x30
		::System::IntPtr m_FileTransferProgressCallback; // 0x38

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Void set_ReadChunkLengthBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_READCHUNKLENGTHBYTES_OFFSET))(this, value);
		}

		static ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal* get_ReadFileDataCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_GET_READFILEDATACALLBACK_OFFSET))();
		}

		static ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal* get_FileTransferProgressCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET))();
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_READFILEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
