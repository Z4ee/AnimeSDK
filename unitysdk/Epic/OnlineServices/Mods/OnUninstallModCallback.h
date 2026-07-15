#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Mods { class UninstallModCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF9FFE0)
#define EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BFA0010)
#define EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF9FAB0)
#define EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF9FEF0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int OnUninstallModCallback_TypeDefinitionIndex = 43445;

	class OnUninstallModCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Mods::UninstallModCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UninstallModCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Mods::UninstallModCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Mods::UninstallModCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUNINSTALLMODCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
