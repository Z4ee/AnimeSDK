#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class IKCPChannel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8D2A000)
#define MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8D2A030)
#define MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8D29AB0)
#define MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D29A90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPClient_OnDisconnetDelegate_TypeDefinitionIndex = 42734;

	class KCPClient_OnDisconnetDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::IKCPChannel* channel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_INVOKE_OFFSET))(this, channel);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::IKCPChannel* channel, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_BEGININVOKE_OFFSET))(this, channel, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
