#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnFileTransferProgressCallbackInternal; }
namespace Epic::OnlineServices::PlayerDataStorage { class OnWriteFileDataCallbackInternal; }
namespace Epic::OnlineServices::PlayerDataStorage { class WriteFileOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C0EB20)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DD7C780)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_GET_WRITEFILEDATACALLBACK_OFFSET UNITYSDK_OFFSET(0x1DD7C6E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C0EAA0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_CHUNKLENGTHBYTES_OFFSET UNITYSDK_OFFSET(0x3AA1870)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x3C0E9E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C0E920)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C0EA90)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int WriteFileOptionsInternal_TypeDefinitionIndex = 45537;

	struct alignas(8) WriteFileOptionsInternal
	{
		static ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal** StaticGet_s_FileTransferProgressCallback()
		{
			return (::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal**)Il2CppClass::FromTypeDefinitionIndex(WriteFileOptionsInternal_TypeDefinitionIndex)->GetStaticField(0x35750);
		}
		static ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal** StaticGet_s_WriteFileDataCallback()
		{
			return (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal**)Il2CppClass::FromTypeDefinitionIndex(WriteFileOptionsInternal_TypeDefinitionIndex)->GetStaticField(0x35758);
		}
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Filename; // 0x20
		::System::UInt32 m_ChunkLengthBytes; // 0x28
		::System::IntPtr m_WriteFileDataCallback; // 0x30
		::System::IntPtr m_FileTransferProgressCallback; // 0x38

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Filename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::Void set_ChunkLengthBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_CHUNKLENGTHBYTES_OFFSET))(this, a1);
		}

		static ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal* get_WriteFileDataCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_GET_WRITEFILEDATACALLBACK_OFFSET))();
		}

		static ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal* get_FileTransferProgressCallback()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_GET_FILETRANSFERPROGRESSCALLBACK_OFFSET))();
		}

		::System::Void Set(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_WRITEFILEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
