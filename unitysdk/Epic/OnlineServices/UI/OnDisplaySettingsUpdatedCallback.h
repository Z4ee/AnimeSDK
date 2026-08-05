#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UI { class OnDisplaySettingsUpdatedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DCB4440)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DCB4470)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DCB3F20)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB3F00)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int OnDisplaySettingsUpdatedCallback_TypeDefinitionIndex = 35580;

	class OnDisplaySettingsUpdatedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
