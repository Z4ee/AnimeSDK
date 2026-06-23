#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/ReadResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class ReadFileDataCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C824EC0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C824EF0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C824980)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C824960)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnReadFileDataCallback_TypeDefinitionIndex = 35445;

	class OnReadFileDataCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::Epic::OnlineServices::PlayerDataStorage::ReadResult Invoke(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo* data)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::ReadResult(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::Epic::OnlineServices::PlayerDataStorage::ReadResult EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::ReadResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
