#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Mods { class InstallModCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB3AABF0)
#define EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB3AAC20)
#define EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB3AA8C0)
#define EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AAB00)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int OnInstallModCallback_TypeDefinitionIndex = 45625;

	class OnInstallModCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Mods::InstallModCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::InstallModCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Mods::InstallModCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Mods::InstallModCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONINSTALLMODCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
