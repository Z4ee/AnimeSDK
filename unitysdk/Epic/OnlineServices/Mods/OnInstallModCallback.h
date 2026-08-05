#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Mods { class InstallModCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E1AC0A0)
#define EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E1AC0D0)
#define EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E1ABB80)
#define EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1ABB60)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int OnInstallModCallback_TypeDefinitionIndex = 36220;

	class OnInstallModCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Mods::InstallModCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::InstallModCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Mods::InstallModCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Mods::InstallModCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
