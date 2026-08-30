#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA75770)
#define MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA757C0)
#define MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA75760)
#define MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA756F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_NotifyPremiumFeatureDelegate_TypeDefinitionIndex = 7719;

	class PSDelegate_NotifyPremiumFeatureDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_NOTIFYPREMIUMFEATUREDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
