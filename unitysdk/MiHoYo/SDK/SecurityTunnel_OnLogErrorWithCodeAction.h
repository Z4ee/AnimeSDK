#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ErrorCode.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB2AB070)
#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB2AB0F0)
#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xB2AAB90)
#define MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AB000)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_OnLogErrorWithCodeAction_TypeDefinitionIndex = 46865;

	class SecurityTunnel_OnLogErrorWithCodeAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::SecurityTunnel_ErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::SecurityTunnel_ErrorCode a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ErrorCode, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONLOGERRORWITHCODEACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
