#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class IKCPChannel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA181260)
#define MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA181290)
#define MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA180AB0)
#define MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA181170)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPClient_OnDisconnetDelegate_TypeDefinitionIndex = 43537;

	class KCPClient_OnDisconnetDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::IKCPChannel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::IKCPChannel* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONDISCONNETDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
