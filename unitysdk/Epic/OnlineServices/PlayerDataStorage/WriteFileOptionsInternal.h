#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnFileTransferProgressCallbackInternal; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnWriteFileDataCallbackInternal; }
namespace Epic::OnlineServices::PlayerDataStorage { class WriteFileOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D3530)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A492600)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_GET_WRITEFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0x1A492570)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8D34C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_CHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x319040)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x8D3400)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8D3340)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8D34B0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int WriteFileOptionsInternal_TypeDefinitionIndex = 33910;

	struct alignas(8) WriteFileOptionsInternal
	{
		static ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal** StaticGet_s_FileTransferProgressCallback()
		{
			return (::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal**)Il2CppClass::FromTypeDefinitionIndex(WriteFileOptionsInternal_TypeDefinitionIndex)->GetStaticField(0x26900);
		}
		static ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal** StaticGet_s_WriteFileDataCallback()
		{
			return (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal**)Il2CppClass::FromTypeDefinitionIndex(WriteFileOptionsInternal_TypeDefinitionIndex)->GetStaticField(0x26908);
		}
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Filename; // 0x20
		::System::UInt32 m_ChunkLengthBytes; // 0x28
		::System::IntPtr m_WriteFileDataCallback; // 0x30
		::System::IntPtr m_FileTransferProgressCallback; // 0x38

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Void set_ChunkLengthBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_CHUNKLENGTHBYTES_OFFSET))(this, value);
		}

		static ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal* get_WriteFileDataCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_GET_WRITEFILEDATACALLBACK_OFFSET))();
		}

		static ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal* get_FileTransferProgressCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET))();
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
