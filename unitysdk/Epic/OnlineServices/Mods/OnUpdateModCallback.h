#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Mods { class UpdateModCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD2CA0)
#define EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD2CD0)
#define EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD2430)
#define EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD2C80)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int OnUpdateModCallback_TypeDefinitionIndex = 35565;

	class OnUpdateModCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Mods::UpdateModCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UpdateModCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Mods::UpdateModCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Mods::UpdateModCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
