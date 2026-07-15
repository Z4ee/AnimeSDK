#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KCPErrorCode.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD04040)
#define MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD040C0)
#define MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD038F0)
#define MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD03FD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPClient_OnErrorDelegate_TypeDefinitionIndex = 44400;

	class KCPClient_OnErrorDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::KCPErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::KCPErrorCode a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONERRORDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
