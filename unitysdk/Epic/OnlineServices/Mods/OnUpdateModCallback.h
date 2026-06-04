#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Mods { class UpdateModCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA307B10)
#define EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA307B40)
#define EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3073E0)
#define EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA307A20)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int OnUpdateModCallback_TypeDefinitionIndex = 42586;

	class OnUpdateModCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Mods::UpdateModCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UpdateModCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Mods::UpdateModCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Mods::UpdateModCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONUPDATEMODCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
