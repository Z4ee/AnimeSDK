#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class IKCPChannel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CBA26E0)
#define MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CBA2760)
#define MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBA2190)
#define MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA2170)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPClient_OnConnectDelegate_TypeDefinitionIndex = 36513;

	class KCPClient_OnConnectDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::IKCPChannel* channel, ::System::Int32 nCode)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_INVOKE_OFFSET))(this, channel, nCode);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::IKCPChannel* channel, ::System::Int32 nCode, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_BEGININVOKE_OFFSET))(this, channel, nCode, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONCONNECTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
