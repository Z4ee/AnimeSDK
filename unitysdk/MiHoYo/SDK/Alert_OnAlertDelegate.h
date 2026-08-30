#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_ALERT_ONALERTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B72E260)
#define MIHOYO_SDK_ALERT_ONALERTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B72E2D0)
#define MIHOYO_SDK_ALERT_ONALERTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B72DE60)
#define MIHOYO_SDK_ALERT_ONALERTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72E1F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert_OnAlertDelegate_TypeDefinitionIndex = 8198;

	class Alert_OnAlertDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONALERTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONALERTDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Alert_AlertResult a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONALERTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONALERTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
