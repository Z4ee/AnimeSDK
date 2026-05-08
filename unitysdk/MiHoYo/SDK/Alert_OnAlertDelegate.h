#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_ALERT_ONALERTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19FBD5A0)
#define MIHOYO_SDK_ALERT_ONALERTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19FBD610)
#define MIHOYO_SDK_ALERT_ONALERTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19FBD2B0)
#define MIHOYO_SDK_ALERT_ONALERTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBD2A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert_OnAlertDelegate_TypeDefinitionIndex = 19105;

	class Alert_OnAlertDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONALERTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONALERTDELEGATE_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Alert_AlertResult result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONALERTDELEGATE_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONALERTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
