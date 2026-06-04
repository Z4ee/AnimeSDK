#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class IKCPChannel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA181100)
#define MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA181160)
#define MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA180A70)
#define MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA181010)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPClient_OnConnectDelegate_TypeDefinitionIndex = 43536;

	class KCPClient_OnConnectDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::IKCPChannel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::IKCPChannel* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
