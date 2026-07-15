#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_KCPCLIENT_ONTIMEOUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD04220)
#define MIHOYO_SDK_KCPCLIENT_ONTIMEOUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD04250)
#define MIHOYO_SDK_KCPCLIENT_ONTIMEOUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD03880)
#define MIHOYO_SDK_KCPCLIENT_ONTIMEOUTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD041B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPClient_OnTimeoutDelegate_TypeDefinitionIndex = 44399;

	class KCPClient_OnTimeoutDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONTIMEOUTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONTIMEOUTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONTIMEOUTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONTIMEOUTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
