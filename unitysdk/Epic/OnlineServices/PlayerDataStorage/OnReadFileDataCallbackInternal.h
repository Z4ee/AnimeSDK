#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/ReadResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8EF8270)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8EF82C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x8EF7F80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x8EF7F60)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnReadFileDataCallbackInternal_TypeDefinitionIndex = 41664;

	class OnReadFileDataCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::Epic::OnlineServices::PlayerDataStorage::ReadResult Invoke(::System::IntPtr data)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::ReadResult(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::Epic::OnlineServices::PlayerDataStorage::ReadResult EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::ReadResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONREADFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
