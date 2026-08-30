#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class SecurityTunnel_Packet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB2AD5A0)
#define MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB2AD600)
#define MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xB2AD590)
#define MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AD520)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ResponseCallbackAction_TypeDefinitionIndex = 46855;

	class SecurityTunnel_ResponseCallbackAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
