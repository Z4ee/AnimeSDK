#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/WriteResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class WriteFileDataCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86C5980)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86C59C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86C53C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86C53A0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnWriteFileDataCallback_TypeDefinitionIndex = 35841;

	class OnWriteFileDataCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::Epic::OnlineServices::PlayerDataStorage::WriteResult Invoke(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo* data, ::Il2CppArray<::System::Byte>*& outDataBuffer)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_INVOKE_OFFSET))(this, data, outDataBuffer);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo* data, ::Il2CppArray<::System::Byte>*& outDataBuffer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo*, ::Il2CppArray<::System::Byte>*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_BEGININVOKE_OFFSET))(this, data, outDataBuffer, callback, object);
		}

		::Epic::OnlineServices::PlayerDataStorage::WriteResult EndInvoke(::Il2CppArray<::System::Byte>*& outDataBuffer, ::System::IAsyncResult* result)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_ENDINVOKE_OFFSET))(this, outDataBuffer, result);
		}
	};
}
