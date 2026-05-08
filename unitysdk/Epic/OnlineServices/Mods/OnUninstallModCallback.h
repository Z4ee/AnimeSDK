#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Mods { class UninstallModCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x198AD4E0)
#define EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x198AD510)
#define EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x198ACFE0)
#define EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x198ACFD0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int OnUninstallModCallback_TypeDefinitionIndex = 34000;

	class OnUninstallModCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Mods::UninstallModCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UninstallModCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Mods::UninstallModCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Mods::UninstallModCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
