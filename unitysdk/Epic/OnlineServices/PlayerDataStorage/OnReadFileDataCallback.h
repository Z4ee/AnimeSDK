#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/ReadResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class ReadFileDataCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA323700)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA323730)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3236F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA323600)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnReadFileDataCallback_TypeDefinitionIndex = 42466;

	class OnReadFileDataCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::PlayerDataStorage::ReadResult Invoke(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo* a1)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::ReadResult(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::PlayerDataStorage::ReadResult EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::ReadResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
