#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AlertCompliance_AlertResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_ALERTCOMPLIANCE_ONALERTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x173DA0D0)
#define MIHOYO_SDK_ALERTCOMPLIANCE_ONALERTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x173DA140)
#define MIHOYO_SDK_ALERTCOMPLIANCE_ONALERTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x173D9720)
#define MIHOYO_SDK_ALERTCOMPLIANCE_ONALERTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x173DA0B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AlertCompliance_OnAlertDelegate_TypeDefinitionIndex = 7036;

	class AlertCompliance_OnAlertDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_ONALERTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::AlertCompliance_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AlertCompliance_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_ONALERTDELEGATE_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::AlertCompliance_AlertResult result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::AlertCompliance_AlertResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_ONALERTDELEGATE_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE_ONALERTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
