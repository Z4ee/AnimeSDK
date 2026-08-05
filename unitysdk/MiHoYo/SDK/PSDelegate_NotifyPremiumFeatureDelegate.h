#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF47BC0)
#define MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF47C30)
#define MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF29180)
#define MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF47BA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_NotifyPremiumFeatureDelegate_TypeDefinitionIndex = 19874;

	class PSDelegate_NotifyPremiumFeatureDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt64 properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_INVOKE_OFFSET))(this, properties);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 properties, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_BEGININVOKE_OFFSET))(this, properties, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
