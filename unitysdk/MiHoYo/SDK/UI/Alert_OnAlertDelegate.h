#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Alert_AlertResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_UI_ALERT_ONALERTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9E9F60)
#define MIHOYO_SDK_UI_ALERT_ONALERTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9E9FD0)
#define MIHOYO_SDK_UI_ALERT_ONALERTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9E9C70)
#define MIHOYO_SDK_UI_ALERT_ONALERTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E9C50)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Alert_OnAlertDelegate_TypeDefinitionIndex = 20158;

	class Alert_OnAlertDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT_ONALERTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::UI::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT_ONALERTDELEGATE_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::UI::Alert_AlertResult result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::UI::Alert_AlertResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT_ONALERTDELEGATE_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT_ONALERTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
