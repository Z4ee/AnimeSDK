#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Mods { class EnumerateModsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C9CC020)
#define EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C9CC050)
#define EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C9CBB00)
#define EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9CBAE0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int OnEnumerateModsCallback_TypeDefinitionIndex = 36218;

	class OnEnumerateModsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
