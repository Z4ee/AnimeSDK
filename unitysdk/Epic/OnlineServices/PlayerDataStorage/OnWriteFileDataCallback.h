#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/WriteResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class WriteFileDataCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BFF98F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BFF9930)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BFF98E0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFF97F0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnWriteFileDataCallback_TypeDefinitionIndex = 43331;

	class OnWriteFileDataCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::PlayerDataStorage::WriteResult Invoke(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo* a1, ::Il2CppArray<::System::Byte>*& a2)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo* a1, ::Il2CppArray<::System::Byte>*& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo*, ::Il2CppArray<::System::Byte>*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Epic::OnlineServices::PlayerDataStorage::WriteResult EndInvoke(::Il2CppArray<::System::Byte>*& a1, ::System::IAsyncResult* a2)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACK_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
